#include "Channel.h"
#include <fstream>
#include <iostream>
#include <sstream>

// Constructor implementation for Channel
Channel::Channel(std::string n, std::string f, std::string c) : name(n), frequency(f), category(c) {}

// Load channels from a CSV file
void ChannelManager::loadChannels(const std::string& filename) {
    std::ifstream file(filename);
    std::string line;
    if (!file.is_open()) {
        std::cerr << "Failed to open the file." << std::endl;
        return;
    }
    while (getline(file, line)) {
        std::stringstream ss(line);
        std::string name, frequency, category;
        getline(ss, name, ',');
        getline(ss, frequency, ',');
        getline(ss, category, ',');
        channels.emplace_back(name, frequency, category);
    }
    file.close();
}

// Display all channels
void ChannelManager::displayChannels() const {
    std::cout << "List of Channels:\n";
    for (const auto& channel : channels) {
        std::cout << "Name: " << channel.name << ", Frequency: " << channel.frequency << ", Category: " << channel.category << std::endl;
    }
}
