/*
 * File:   main.cpp
 * Author: Michael Carlton
 * CS485 Project 3 - svsh (Shared Variable Shell)
 * This file contains the main() function for the svsh.
 * Created on November 3, 2014, 2:26 PM
 */

#include <cstdlib>
#include <string>
#include <vector>
#include <iostream>
#include "functions.h"

using namespace std;


int main(int argc, char** argv) {
    int exitstatus = 0; //Tracks exit code status

    //This is the main shell loop. It will continuously ask for commands
    //unless the user types "bye" or gives the EOF command (CTRL+D). This
    //needs to be modified to wait for process execution if the process
    //is set to run normally (without the <bg> tag in the command line).
    do {
        exitstatus = cmdInput();
        tokenize();
        parse();
    } while (exitstatus == 0);

    //Exit codes to give feedback to the user on why the shell quit. I think
    //we only need 2, but there is room to add more if we need them. The parse()
    //function will have the majority of the errors and this could be handled
    //via interrupts or codes like this for incorrect syntax in the commands.
    if (exitstatus == 1)
    {
        cout << "Exiting svsh normally via \"bye\" command." << endl;
    }
    if (exitstatus == 2)
    {
        cout << "Exiting svsh normally because EOF was reached." << endl;
    }
    return 0;
}

