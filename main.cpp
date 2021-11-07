#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:

 bool

 char

 int

 float

 double

 void
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{   
    int x = 7;

    int things = 99;

    int money = 9;

    bool loggedIn = false;

    bool nomad = true;

    bool admin = false;

    char lastChar = 'z';

    char firstChar = 'a';

    char randomChar = 'g';

    float num1 = 3.3333333f;

    float num2 = 3.0f;

    float num3 = 5.567f;

    double num4 = 3.37474;

    double num5 = 5.3;

    double num6 = 6.789;

    ignoreUnused(x, things, money, loggedIn, nomad, admin, lastChar, firstChar, randomChar, num1, num2, num3, num4, num5, num6); 
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int makeDinner(int numIngredients = 7, int temperature = 350)
{
    ignoreUnused(numIngredients, temperature);
    return {};
}

/*
 2)
 */
int howMuchMoneyLeft(int balance = 1000, int spent = 0, int deposits = 5)
{
    ignoreUnused(balance, spent, deposits);
    return {};
}
/*
 3)
 */
bool isLoggedIn(int id = 1)
{
    ignoreUnused(id);
    return {};
}
/*
 4)
 */
char serial(char firstChar = 'C', char secondChar = 'F', int num1 = 6, int num2 = 7)
{
    ignoreUnused(firstChar, secondChar, num1, num2);
    return {};
}
/*
 5)
 */
int numCats(int kittens = 99, int adultCats = 2)
{
    ignoreUnused(kittens, adultCats);
    return {};
}
/*
 6)
 */
int jungleDescription(int animalTypes = 20000, int plantTypes = 10000, int ecosystems = 5)
{
    ignoreUnused(animalTypes, plantTypes, ecosystems);
    return {};
}
/*
 7)
 */
int addScore(int firstRound = 5, int secondRound = 5, int thirdRound = 5, int fourthRound = 5)
{
    ignoreUnused(firstRound, secondRound, thirdRound, fourthRound);
    return {};
}
/*
 8)
 */
bool onTime(int id = 1, int startTime = 900, int timeStamp = 12000)
{
    ignoreUnused(id, startTime, timeStamp);
    return {};
}
/*
 9)
 */
int warpDrive(int speed = 9, char destination = 'z', double warpFactor = 9.9999, float wobbleFactor = 7373.5f)
{
    ignoreUnused(speed, destination, warpFactor, wobbleFactor);
    return {};
}
/*
 10)
 */
bool includesOneChar(char firstChar = 'a', char secondChar = 'b', char thirdChar = 'c')
{
    ignoreUnused(firstChar, secondChar, thirdChar);
    return {};
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto dinner = makeDinner(7, 400);
    //2)
    int balance = howMuchMoneyLeft(800, 250, 119);
    //3)
    bool loggedIn = isLoggedIn(55);
    //4)
    auto productId = serial('f','q', 3, 9);
    //5)
    int felines = numCats(13, 9);
    //6)
    auto jungle = jungleDescription(30000, 90000, 10);
    //7)
    int score = addScore(4, 12, 3, 2);
    //8)
    bool lateOrNot = onTime(12, 8000, 6082021);
    //9)
    int warpPower = warpDrive(70000, 'f', 5.999999, 5.55f);
    //10)
    bool hasLetter = includesOneChar('e', 'g', 'c');
    
    ignoreUnused(carRented, dinner, balance, loggedIn, productId, felines, jungle, score, lateOrNot, warpPower, hasLetter);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
