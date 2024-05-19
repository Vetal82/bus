#pragma once
#ifndef BUS_H
#define BUS_H

#include "Time.h"
#include <vector>

class Bus {
public:
    Bus(Time start, Time end, int routeDuration, int breakTime)
        : startTime(start), endTime(end), routeDuration(routeDuration), breakTime(breakTime) {}

    std::vector<Time> getDailySchedule() const {
        std::vector<Time> schedule;
        Time currentTime = startTime;

        while (currentTime < endTime) {
            schedule.push_back(currentTime);
            currentTime.addMinute(routeDuration);
            currentTime.addMinute(-breakTime);
        }

        return schedule;
    }

private:
    Time startTime;
    Time endTime;
    int routeDuration;
    int breakTime;
};

#endif