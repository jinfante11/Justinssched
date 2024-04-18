#include "Channel.h"
#include <fstream>
#include <iostream>
#include <sstream>

void ChannelManager::loadChannels(const std::string& filename) {
    std::ifstream file(filename);
    std::string line;
    if (!file.is_open()) {
        std::cerr << "Failed to open the file." << std::endl;
        return;
    }

    // Skip the header line
    std::getline(file, line);

    while (getline(file, line)) {
        std::stringstream ss(line);
        std::string cell;
        // Assuming channel names are in the 5th column (column E)
        for (int i = 0; i < 4; ++i) { // Skip first four columns
            std::getline(ss, cell, ',');
        }
        std::getline(ss, cell, ','); // Read the channel name
        channels.insert(cell); // Inserting into set will ensure uniqueness
    }
    file.close();
}

void ChannelManager::displayChannels() const {
    std::cout << "Unique Channels:\n";
    for (const auto& channel : channels) {
        std::cout << "Channel: " << channel << std::endl;
    }
}
