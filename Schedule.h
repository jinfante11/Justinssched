#include <iostream>
#include <vector>
#include <string>
#include <ctime> //add the concept of time in the program
using namespace std;

#ifndef SCHEDULE_H
#define SCHEDULE_H

//Data structure will contain the data about a programme that is in the csv file that is relevant to schedule
struct ProgrammeSchedule {
    string ProgramID;
    string Name;
    string Duration;
    string Genre;
    string Channel;
};

struct CommercialBreak {
    tm startTime; // Start time of the commercial break
    tm endTime;   // End time of the commercial break
};

#endif 
