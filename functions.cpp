//functions.cpp
//Michael Carlton
//CS485 Project 3 - svsh
//11-3-14
//Contains the core functions and built-in commands for the shared variable
//shell (svsh). Also includes global variables used throughout
//the shell and initializes them to a default value.

#include "functions.h"
#include <string>
#include <iostream>

using namespace std;

static string prompt = "svsh > "; //Default prompt
static bool ShowTokens = false;   //Default is to not show tokens

//int cmdInput()
//This function reads in a command line from stdin to prepare it to be used
//by other functions. It can be given different return values to represent
//different shell exit codes which we can handle in main().)
int cmdInput()
{
    string cmdstring;
    cout << prompt;
    cin >> cmdstring;
    if (cmdstring == "bye") //Exit on "bye" command
    {
        return 1;
    }
    else if (cin.eof()) //Exit on EOF character CTRL+D
    {
        return 2;
    }
    else //Continue shell prompt
    {
        return 0;
    }
}

void tokenize()
{
    //Takes cmdstring and breaks it into individual tokens, gives them a type,
    //and stores them to be used by parse() and printTokens().

    //*insert tokenize() code here*
}
void parse()
{
    //Parses tokens and determines if they are used in a syntactically
    //correct manner. Prints a specific error about the problem if there is one.
    //Otherwise, it executes the command (we may want a separate function
    //for execution). We will probably want to handle errors by using exit
    //codes on the parse() function.

    //*insert parse() code here*

    printTokens(); //Needs to be passed whatever data structure we choose so
                   //the tokens will be printed if $ShowTokens is set in the
                   //shell.
}

void printTokens()
{
    if (ShowTokens == true)
    {
        //Print token type, token, and usage if $ShowTokens is set in the shell.
    }
}
