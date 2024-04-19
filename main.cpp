#include <iostream>
#include <fstream> //Allows header files to be used/reads other files
#include <vector>
using namespace std;

string EnterFile;

// User enters their choice in the menu
int choice;

void menu()
{
    cout << "|-------------------------|\n";
    cout << "| ****     Menu      **** |\n";
    cout << "|-------------------------|\n";
    // options of actions
    cout << "| 1. See channel list     |\n";
    cout << "| 2. Switch to channel    |\n";
    cout << "| 3. See favorites        |\n";
    cout << "| 0. Exit the program     |\n";
    cout << "|-------------------------|\n";
    cout << "Enter your choice > ";
}

int main()
{
    cout << "Welcome to cloud\n";
    cout << "Please enter the program file absolute path or relative path > ";
    cin >> EnterFile;

    // open the inputted file
    ifstream inputFile(EnterFile);

    // check to see if the file can be opened
    if (inputFile.is_open())
    {
        cout << " The file " << EnterFile << " can be read \n";
        // TODO : Initialize channels，Call functions to initialize channels
    }
    else
    {
        cout << " The File " << EnterFile << " cannot be read \n";
    }

    do
    {
        // Output menu
        menu();
        cin >> choice;
        cout << "\n";
        // call the function that the user chose
        switch (choice)
        {
        case 1:
            // TODO Calling function to see channel list
            printf("Calling function to see channel list\n");
            break;
        case 2:
            // TODO Calling function to switch to channel
            printf("Calling function to switch to channel\n");
            break;
        case 3:
            // TODO Calling function to see favorites
            printf("Calling function to see favorites\n");
            break;
        case 0:
            // Exit the program
            cout << "Exiting program...\n";
            return 0;
        default:
            cout << "Invalid choice, please try again\n";
        }
    } while (choice != 0);
}