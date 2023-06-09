#include <iostream>

int main(){
    
    /*
        Unitialized variables and undefined behavior

        initialization  - the object is a given a known value at the point of definition.
        assignment      - the object is given a known value beyond the point of definition.
        unitialized     - the object is has not given a known value yet.
    */

   int x;
   std::cout << x << '\n'; // what's inside x? Idk.

   /*
        Observations on undefined behavior

        Your program produces different results every time it is run.
        Your program consistently produces the same incorrect result.
        Your program behaves inconsistently (sometimes produces the correct result, sometimes not).
        Your program seems like it’s working but produces incorrect results later in the program.
        Your program crashes, either immediately or later.
        Your program works on some compilers but not others.
        Your program works until you change some other seemingly unrelated code.

        Best Practice: take care to avoid all situations that results in undefined behavior,
        such as using uninitialized variables.
   */

   return 0;
}