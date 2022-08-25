#include <iostream>

//These lines impout cout and string from the std namespace to make our code easier to read.
using std::cout;
using std::string;

string makeGreetingFromName(string name){
   return "Hello, " + name + ".";
}

void printMessageToConsole(string);

int main()
{
   string message = makeGreetingFromName("World");
   printMessageToConsole(message);
}

void printMessageToConsole(string message){
   cout << message;
}
