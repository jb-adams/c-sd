/* Structures and Functions
 *
 * structures as arguments to functions
 * OR
 * pointers to structures as function arguments (better)
 * 
 * returning a structure from a function
 * do this by returning a pointer
 */

#define FUNDLEN 100

#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct Family {
    char name[20];
    int age;
    char father[20];
    char mother[20];
};

struct funds {
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

bool siblings(struct Family member1, struct Family member2);
bool siblingsPtr(struct Family *pMember1, struct Family *pMember2);
double sum(struct funds moolah);

int main() {
    struct funds stan = {
        "Garlic-Melon Bank",
        4032.27,
        "Lucky's Savings and Loan",
        8543.94
    };
    printf("Stan has a total of $%.2f\n", sum(stan));

}

bool siblings(struct Family member1, struct Family member2) {
    if (strcmp(member1.mother, member2.mother) == 0) {
        return true;
    } else {
        return false;
    }
}

bool siblingsPtr(struct Family *pMember1, struct Family *pMember2) {
    if (strcmp(pMember1->mother, pMember2->mother) == 0) {
        return true;
    } else {
        return false;
    }
}

double sum(struct funds moolah) {
    return(moolah.bankfund + moolah.savefund);
}