/* Structures
 *
 * group elements together (similar to OOP)
 * object with data organization, no methods
 * primitive OOP
 * 
 * what elements are inside the structure?
 * these are referred to as members
 * struct keyword - allows you to group elements into structs
 * 
 * variables can be declared to be of type "struct date"
 * 
 * accessing members in a struct
 * use the dot notation (e.g. variable.member)
 * member selection operator
 * 
 */

// tells the C compiler what the structure looks like
struct date {
    // members or fields
    int month;
    int day;
    int year;
};

int main() {

    // instantiate a struct
    struct date today;
    struct date purchaseDate;

    // initialize member values
    today.day = 25;
    today.month = 7;
    today.year = 2015;
    printf("Today's date is %i/%i/%.2i.\n", today.month, today.day, today.year);

    int century = today.day / 100;

    // we can also define struct and create variable in the same line
    struct animal {
        char *species;
    } dog;
    dog.species = "DOG";
    printf("%s\n", dog.species);

    // unnamed structures
    struct {
        char *engine;
    } myCar;
    myCar.engine = "V8";
    printf("%s\n", myCar.engine);

    // initialization
    struct date tomorrow = {8, 12, 2016}; // variables populated in order the
                                          // struct members are defined
    
    // can manually assign to specific members
    struct date dayAfter = {.year = 2019, .day = 31, .month = 12};

    // compound literals
    struct date yesterday;
    yesterday = (struct date){9, 25, 2015};

}
