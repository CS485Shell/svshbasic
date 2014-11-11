//functions.cpp
//CS485 Project 3 - svsh
//11-3-14
//Contains the core functions and built-in commands for the shared variable
//shell (svsh). Also includes global variables used throughout
//the shell and initializes them to a default value.

#include "functions.h"
#include <string.h>
#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include <cstdio>


using namespace std;


//static string prompt = "svsh > "; //Default prompt
char *prompt = "svsh";
static bool ShowTokens = false;   //Default is to not show tokens

//int cmdInput()
//This function reads in a command line from stdin to prepare it to be used
//by other functions. It can be given different return values to represent
//different shell exit codes which we can handle in main().)
int cmdInput()
{
    char str[60];
    int space_flag = 0;
    int i = 0;
    //string CommandLine[] = string.split(" ", 2);
    //string command = CommandLine[0];
    //string theRest = CommandLine[1];
    string command;
    //cout << prompt;
    //cin >> command;
    
    printf("CS485 Systems Shared Variable Shell\n");
    printf("%s > ", prompt);
    
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    
    
    //str[0] = command;    
    
    if (strcmp(str, "bye") != 0) //Exit on "bye" command
    {
        return 1;
    }
    else if (strcmp(str, cin.eof())) //Exit on EOF character CTRL+D
    {
        return 2;
    }
    
    /* Put a job in the background.  If the cont argument is true, send
   the process group a SIGCONT signal to wake it up.  */
    
    while (strcmp(str, "bye") != 0)
    {
            if (strcmp(str, "#") == 0)
            {
                // #anytext
                // Comments
                // Any text after the # will be ignored.
                printf("%s\n", str[1]);
                printf("Comment Section.\n");
            }
            else if (strcmp(str, "defprompt") == 0)
            {
                // defprompt prompt
                // Set the shell prompt to prompt. 
                // The default prompt should be ``svsh > ''.
                printf("defprompt stuff here.\n");
                prompt = str;
            }
            else if (strcmp(str, "cd") == 0)
            {
                // cd directory_name
                
                printf("cd has been called to directory_name. \n");
            }
            else if (strcmp(str, "variable_name") == 0)
            {
                // variable_name = variable_def
                // sets the variable specified by variable_name to variable_def.
                cout << "var stuff here.\n";
            }
            else if (strcmp(str, "istjobs") == 0)
            {
                // List all jobs running in the background
                printf("listjobs call has been made. \n");
            }
            else
            {
                    cout << "Error: Unknown Command.\n";
            }
            printf("%s > ", prompt);
            fgets(str, sizeof(str), stdin);
            
            str[strlen(str) - 1] = '\0';
    }

    return 0;
}


int main()
{
    cmdInput();
    return 0;
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

void run(int argc, char** argv)
{
    
}
