#include <iostream>
#include <fstream>
#include <string>

int main()
{
    // Send user input numbers
    int nav;
    do {
        nav = 0;
        std::cout << "Press 1 to display the contents of the file\nPress 2 to write the file as an XML file\nPress 3 to escape the matrix\n";
        std::cin >> nav;

        if (nav == 1) {
            std::string getcontent;
            std::ifstream openfile("./contacts.csv");
            if (openfile.fail()) {
                std::cout << "the file cannot be read\n";
            }
            else {
                if (openfile.is_open())
                {
                    while (!openfile.eof())
                    {
                        getline(openfile, getcontent);
                        std::cout << getcontent;
                    }
                }
            }
        }
        else if (nav == 2) {
            int personNum = 1;
            // Create and open contacts.xml
            std::ofstream MyFile("./contacts.xml");

            MyFile << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n";
            MyFile << "<contacts>\n";
            for (int i = 0; i < 1000; i++) {
                MyFile << "<person category=" << personNum << "\">";
                MyFile << "<number1>" << "</number1>";
                MyFile << "<number2>" << "</number2>";
                MyFile << "<number3>" << "</number3>";
                MyFile << "<firstname>" << "</firstname>";
                MyFile << "<number4>" << "</number4>";
                MyFile << "<lastname>" << "</lastname>";
                MyFile << "<number5>" << "</number5>";
                MyFile << "<email>" << "</email>";
                MyFile << "<number6>" << "</number6>";
                MyFile << "<country>" << "</country>";
                MyFile << "</person>";
                personNum + 1;
            }
            MyFile << "</contacts>\n";

            // Close the file
            MyFile.close();
            std::cout << "What do you want to do next?\n";
            std::cin >> nav;
        }
        else if (nav == 3) {
            std::cout << "Ending program...";
            return 0;
        }
        else {
            std::cout << "Number must be between 1 and 4\n";
            std::cin >> nav;
        }
    } while (nav >= 0 && nav <= 3);
}