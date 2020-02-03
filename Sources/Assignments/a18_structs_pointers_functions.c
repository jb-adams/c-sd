/* Challenge: Structure Pointers and Functions
 *
 * write a C program that creates a structure pointer and passes it to a 
 * function
 *  create a structure named item with the following members
 *      itemName - pointer
 *      quantity - int
 *      price - float
 *      amount - float (stores quantity * price)
 * 
 * create a function named readItem that takes a structure pointer of type item
 * as a parameter
 *  this function should read in (from the user) a product name, price and
 *  quantity
 *  the contents read in should be stored in the passed in structure to the
 *  function
 * 
 * create a function named print item that takes as a parameter a structure
 * pointer of type item
 *  function prints the contents of the parameter
 * 
 * the main function should declare an item and a pointer to the item
 *  you will need to allocate memory for the itemName pointer
 *  the item pointer should be passed into both the read and print item
 *  functions
 */

#define NAMESIZE 50

#include <stdio.h>
#include <stdlib.h>

struct item {
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct item *pItem);
void printItem(struct item *pItem);

int main() {
    struct item *pItem;
    readItem(pItem);
    printItem(pItem);
    free(pItem->itemName);
    return 0;
}

void readItem(struct item *pItem) {

    pItem->itemName = (char *)malloc(NAMESIZE * sizeof(char));

    printf("Enter item name: ");
    scanf("%s", pItem->itemName);
    printf("Enter quantity: ");
    scanf("%d", &pItem->quantity);
    printf("Enter price: ");
    scanf(" ");
    scanf("%f", &pItem->price);
    pItem->amount = (float)pItem->quantity * pItem->price;
}

void printItem(struct item *pItem) {
    printf(
        "\nYour Item\n" \
        "Name: %s\n" \
        "Quantity: %d\n" \
        "Price: %.2f\n" \
        "Amount: %.2f\n",  
        pItem->itemName, pItem->quantity, pItem->price, pItem->amount
    );
}
