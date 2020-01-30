/*
 * Purpose: enums assignment
 * Author: Jeremy Adams
 * Date: 2019
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum company xerox = XEROX;
    enum company google = GOOGLE;
    enum company ebay = EBAY;

    printf("%d\n%d\n%d\n", xerox, google, ebay);
}