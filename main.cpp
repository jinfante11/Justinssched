#include <iostream>
#include "Channel.h"

using namespace std;

int main() {
    cout << "Welcome to Cloud TV\n";
    cout << "Please enter the channel file name\n";

    string EnterFile;
    cin >> EnterFile;

    ChannelManager channelManager;
    channelManager.loadChannels(EnterFile);

    int choice;
    do {
        cout << "Menu:\n";
        cout << "1. See channel list\n";
        cout << "2. Exit the program\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            channelManager.displayChannels();
            break;
        case 2:
            cout << "Exiting the program.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 2);

    return 0;
}
