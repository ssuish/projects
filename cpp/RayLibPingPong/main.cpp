#include "raylib.h"
#include <string>

struct Ball
{
	float x, y;
	float speedX, speedY;
	float radius;
	Color color;

	// type convesion from float -> int might have possible data loss
	void Draw()
	{
		DrawCircle((int)x, (int)y, (int)radius, color);
	}	
};

struct Paddle
{
	float x, y;
	float speed;
	float width, height;
	Color color;

	Rectangle GetRec()
	{
		return Rectangle{x, y, width, height};
	}

	// type convesion from float -> int might have possible data loss
	void Draw()
	{
		DrawRectangleRec(GetRec(), color);
	}
};

int main(void)
{
	InitWindow(800, 450, "Basic PingPong");
	SetWindowState(FLAG_VSYNC_HINT);

	Ball ball;

	ball.x = GetScreenWidth() / 2.0f;
	ball.y = GetScreenHeight() / 2.0f;
	ball.radius = 5;
	ball.speedX = 200.0f;
	ball.speedY = 200.0f;
	ball.color = WHITE;

	Paddle leftPaddle;
	leftPaddle.x = 50;
	leftPaddle.y = GetScreenHeight() / 2 - 50;
	leftPaddle.width = 10;
	leftPaddle.height = 100;
	leftPaddle.speed = 300;
	leftPaddle.color = WHITE;

	Paddle rightPaddle;
	rightPaddle.x = GetScreenWidth() - 50 - 10;
	rightPaddle.y = GetScreenHeight() / 2 - 50;
	rightPaddle.width = 10;
	rightPaddle.height = 100;
	rightPaddle.speed = 300;
	rightPaddle.color = WHITE;

	const char* winnerLable = nullptr;
	bool playingGame = false;

	while (!WindowShouldClose())
	{
		// To fix: apply proper delta time
		ball.x += ball.speedX * GetFrameTime();
		ball.y += ball.speedY * GetFrameTime();

		if (ball.y < 0)
		{
			ball.y = 0;
			ball.speedY *= -1;
		}

		if (ball.y > GetScreenHeight())
		{
			ball.y = GetScreenHeight();
			ball.speedY *= -1;
		}

		// Left Paddle Control
		if (IsKeyDown(KEY_W))
			leftPaddle.y -= leftPaddle.speed * GetFrameTime();
		if (IsKeyDown(KEY_S))
			leftPaddle.y += leftPaddle.speed * GetFrameTime();
		
		// Right Paddle Control
		if (IsKeyDown(KEY_UP))
			rightPaddle.y -= rightPaddle.speed * GetFrameTime();
		if (IsKeyDown(KEY_DOWN))
			rightPaddle.y += rightPaddle.speed * GetFrameTime();

		// Collision Detection
		if (CheckCollisionCircleRec(Vector2{ball.x, ball.y}, ball.radius, rightPaddle.GetRec()))
		{
			if (ball.speedX > 0)
			{
				ball.x = rightPaddle.x - ball.radius;
				ball.speedX *= -1.1f;
				ball.speedY = (ball.y - rightPaddle.y) / (rightPaddle.height / 2) * -ball.speedX;
			}
		}
		if (CheckCollisionCircleRec(Vector2{ ball.x, ball.y }, ball.radius, leftPaddle.GetRec()))
		{
			if (ball.speedX < 0)
			{
				ball.x = leftPaddle.x + leftPaddle.width + ball.radius;
				ball.speedX *= -1.1f;
				ball.speedY = (ball.y - leftPaddle.y) / (leftPaddle.height / 2) * ball.speedX;
			}
		}

		// Win Condition
		if (ball.x < 0)
		{
			winnerLable = "Right Player Wins!";
		}

		if (ball.x > GetScreenWidth())
		{
			winnerLable = "Left Player Wins!";
		}

		if (winnerLable && IsKeyPressed(KEY_SPACE))
		{
			ball.x = GetScreenWidth() / 2.0f;
			ball.y = GetScreenHeight() / 2.0f;
			
			if (winnerLable == "Right Player Wins!")
			{
				ball.speedX = -200.0f;
				ball.speedY = -200.0f;
			}
			else
			{
				ball.speedX = 200.0f;
				ball.speedY = 200.0f;
			}

			winnerLable = nullptr;
		}

		// starting game
		if (!playingGame && IsKeyPressed(KEY_SPACE))
		{
			playingGame = true;
		}

		BeginDrawing();
		ClearBackground(BLACK);

		if (playingGame)
		{
			ball.Draw();
			leftPaddle.Draw();
			rightPaddle.Draw();

			if (winnerLable)
			{
				DrawText(winnerLable, GetScreenWidth() / 2 - MeasureText(winnerLable, 40) / 2, GetScreenHeight() / 2 - 40, 40, WHITE);
			}
		}
		else
		{
			DrawText("Welcome to Ping Pong", GetScreenWidth() / 2 - MeasureText("Press Space to Start", 40) / 2, GetScreenHeight() / 2 - 60, 40, WHITE);
			DrawText("Press Space to Start", GetScreenWidth() / 2 - MeasureText("Press Space to Start", 20) / 2, GetScreenHeight() / 2 - 10, 20, WHITE);
		}

		DrawFPS(10, 10);
		EndDrawing();

	}

	CloseWindow();

	return 0;
}