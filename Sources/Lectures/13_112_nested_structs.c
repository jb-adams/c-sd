/* Nested Structs
 * a structure can contain another structure as one of its members
 * 
 */

struct date {
    int day;
    int month;
    int year;
};

struct time {
    int hours;
    int minutes;
    int seconds;
};

struct dateAndTime {
    struct date date;
    struct time time;
};

// declare a struct within another struct
struct Foo {
    struct Bar {
        int bar;
        int baz;
    };
    int fab;
    int far;
};

int main() {

    struct dateAndTime event;
    event.date.month = 10; // multiple dots in dot-notation
    event.time.seconds = 21;
    event.time.seconds++;

    struct dateAndTime e2 = {
        {2, 1, 2015}, {3, 30, 0}
    };

    struct dateAndTime e3 = {
        {.month = 2, .day = 1, .year = 2015},
        {.hours = 5}
    };

    // an array of nested structures
    struct dateAndTime events[100];
    events[3].time.hours = 12;
    events[3].date.day = 26;

    return 0;
}