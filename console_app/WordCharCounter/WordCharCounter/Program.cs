// See https://aka.ms/new-console-template for more information

namespace WordCharCounter;

public static class WordCharCounter
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Word-Character Counter\n");
        Console.WriteLine("\tCount Words [w]\n \tCount Characters [c]\t");

        ConsoleKeyInfo inputKey;

        do
        {
            inputKey = Console.ReadKey();
            Console.WriteLine("\tYou Pressed " + inputKey.Key);

            int wordCount;
            int charCount;
            if (inputKey.Key == ConsoleKey.W)
            {
                // Word Counter
                Console.WriteLine("\nWord Counter \nPaste here:");
                var input = Console.ReadLine() ?? throw new ArgumentNullException();

                wordCount = 0;
                var index = 0;

                while (index < input.Length && char.IsWhiteSpace(input[index]))
                    index++;

                while (index < input.Length)
                {
                    while (index < input.Length && !char.IsWhiteSpace(input[index]))
                        index++;

                    wordCount++;

                    while (index < input.Length && char.IsWhiteSpace(input[index]))
                        index++;
                }

                Console.WriteLine("Word Count: " + wordCount + "\n");
                Console.WriteLine("Choose [w] or [c] or exit [Esc]");
            }
            else if (inputKey.Key == ConsoleKey.C)
            {
                // Character Counter
                Console.WriteLine("\nCharacter Counter \nPaste here:");
                var input = Console.ReadLine() ?? throw new ArgumentNullException();
                charCount = input.Count(c => !char.IsWhiteSpace(c));

                Console.WriteLine("Character Count: " + charCount + "\n");
                Console.WriteLine("Choose [w] or [c] or exit [Esc]");
            }
            else
            {
                Console.WriteLine("\tInvalid Input, try again or exit [Esc]");
            }
            
            
        } while (inputKey.Key != ConsoleKey.Escape);
    }
}