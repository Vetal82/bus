#pragma once
#ifndef TIME_H
#define TIME_H

class Time {
public:
    Time(int h = 0, int m = 0) : hour(h), minute(m) {}

    int getHour() const { return hour; }
    int getMinute() const { return minute; }

    void addMinute(int m) {
        minute += m;
        hour += minute / 60;
        minute %= 60;
    }

    bool operator==(const Time& t) const {
        return hour == t.hour && minute == t.minute;
    }

    bool operator<(const Time& t) const {
        return hour < t.hour || (hour == t.hour && minute < t.minute);
    }

private:
    int hour;
    int minute;
};

#endif