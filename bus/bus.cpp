#include <iostream>
#include "Bus.h"

int main() {
    Time start(6, 0);
    Time end(11, 0);
    int routeDuration = 30;
    int breakTime = 10;

    Bus bus(start, end, routeDuration, breakTime);
    std::vector<Time> schedule = bus.getDailySchedule();

    for (const auto& t : schedule) {
        std::cout << t.getHour() << ":" << (t.getMinute() < 10 ? "0" : "") << t.getMinute() << " ";
    }

    return 0;
}