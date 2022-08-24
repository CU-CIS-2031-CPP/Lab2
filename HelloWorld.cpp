#include <iostream>

using namespace std;

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
