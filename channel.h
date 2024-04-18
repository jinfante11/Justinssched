#ifndef CHANNEL_H
#define CHANNEL_H

#include <string>
#include <set>

class ChannelManager {
private:
    std::set<std::string> channels; // Using set to store unique channels

public:
    void loadChannels(const std::string& filename);
    void displayChannels() const;
};

#endif // CHANNEL_H
