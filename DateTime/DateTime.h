//
// Created by james on 28.05.2022.
//

#ifndef UNTITLED1_DATETIME_H
#define UNTITLED1_DATETIME_H
#include <string>

namespace DateTime {

    class DateTime {
    private:
        int second;
        int minute;
        int hour;
        int day;
        int mouth;
        int year;

    public:
        DateTime();
        DateTime(int year, int mouth, int day, int hour = 0,int minute = 0, int second = 0);
        DateTime(int hour, int minute, int second = 0);

        bool operator>(DateTime &dateTime);
        bool operator<(DateTime &dateTime);
        bool operator>=(DateTime &dateTime);
        bool operator<=(DateTime &dateTime);
        bool operator==(DateTime &dateTime);
        bool operator!=(DateTime &dateTime);

        void operator+(DateTime &dateTime);
        void operator-(DateTime &dateTime);

        std::string DateToString(std::string culture);
        static DateTime& DateTimeNow();
        static DateTime& DateNow();
        static DateTime& TimeNow();

    private:
        bool CheckRangeYear(int year);
        bool CheckRangeMouth(int mouth);
        bool CheckRangeDay(int day);
        bool CheckRangeHour(int hour);
        bool CheckRangeMinuteAndSecond(int time);



    };

} // DateTime

#endif //UNTITLED1_DATETIME_H
