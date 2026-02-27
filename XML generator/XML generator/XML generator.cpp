#include <iostream>
#include <fstream>
#include <string>
#include "WriteFileClass.h"
#include "ReadFileClass.h"

int main()
{
    // Create an instance of WriteFileClass and ReadFileClass
    WriteFileClass writeFiles;
    ReadFileClass readFiles;

    int nav;
    do {
        //loop for navigating menu, send options to user and return input from user
        nav = 0;
        std::cout << "Press 1 to display the contents of the file\nPress 2 to write the file as an XML file\nPress 3 to escape the matrix\n";
        std::cin >> nav;

        if (nav == 1) {
            //read in csv
            readFiles.ReadFile();
        }
        else if (nav == 2) {
            //output data from csv to xml
            writeFiles.WriteFile();
        }
        else if (nav == 3) {
            // Ends the program
            std::cout << "Ending program...";
            return 0;
        }
        else {
            // Loops until a user picks a valid number
            std::cout << "Number must be between 1 and 3\n";
            std::cin >> nav;
        }
    } while (nav >= 0 && nav <= 3);
}