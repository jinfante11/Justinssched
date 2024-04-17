#ifndef CHANNEL_H
#define CHANNEL_H

#include <string>
#include <vector>

// Define the Channel class
class Channel {
public:
    std::string name;
    std::string frequency;
    std::string category;

    Channel(std::string n, std::string f, std::string c);
};

// Define the ChannelManager class
class ChannelManager {
private:
    std::vector<Channel> channels;

public:
    void loadChannels(const std::string& filename);
    void displayChannels() const;
};

#endif // CHANNEL_H
