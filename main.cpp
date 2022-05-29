#include <iostream>
#include <ctime>

using namespace std;

int main() {

    char buffer[80];
    time_t seconds = time(NULL);
    tm* timeinfo = localtime(&seconds);
    char *format = "%d %B %Y year";
    strftime(buffer, 80, format, timeinfo);
    cout<<buffer;


    return 0;
}
