#include <stdio.h>
#include <string.h>
#include "myBank.h"

/**
 * @brief Our main method, which runs the main.c file.
 * 
 * Authors @gidon285 @ShmuelLa
 */
int main(void) {                                               // This is the main method, we declare two global variables an integer and a char.
    int validate;                                              // The validate integer is used to check our scanf function, if the input from the user was succssefully
    int acc_num;                                               // then checking if the scanf was successfull - account number is valid and open                                              
    char ui = 'M';                                             // received, then the value will be 1, else it will be 0 and we act accordingly. The char 'M' is chosen
    menu();                                                    // arbitrarily to be set as the input memory holder, so we can read it properly. 
    while (ui != 'E')                                          // the menu() function is to save space for printing the Transaction menu.
    {
        validate = scanf(" %c" , &ui);                         // Checking if the scanf was succssefull, if statement for matching the input with the menu.
        if (ui == 'O') {                                       // calling the openAccount() function that represents the O operator.
            openAccount();
            menu();
        }
        if (ui == 'B') {                                       // Declaring acc_num to be used in the scanf function late, printing according to instructions,
            printf("Please enter account number: ");           // calling the balance() method that  stands for the B operator.
            if (scanf("%d", &acc_num) == 1) {
                balance(acc_num);
            }
            else {
                printf("Failed to read the account number\n"); // if the scanf wasn't valid - meaning the input wasn't an valid account number, printing an error.
            }
            menu();                                            // Re-printing the menu.
        }
        if (ui == 'D') {                                       // Checking if our ui char match the D opperator to identify the depositTrans() function, using  
            printf("Please enter account number: ");           // printing accordingly, if the scanf failed, printing an error.
            if (scanf("%d", &acc_num) == 1) {
                depositTrans(acc_num);
            }
            else {
                printf("Failed to read the account number\n");
            }
            menu();
        }
        if (ui == 'W') {                                      // Using the ui char variable to identify the withdraw() function from the user input,
            printf("Please enter account number: ");
            if (scanf("%d", &acc_num) == 1) {
                withdraw(acc_num);
            }
            else {
                printf("Failed to read the account number\n");
            }
            menu();
        }
        if (ui == 'C') {                                      // applying the same logic here, checking the Transaction type with ui variable, and validating      
            printf("Please enter account number: ");
            if (scanf("%d", &acc_num) == 1) {
                close(acc_num);
            }
            else {
                printf("Failed to read the account number\n");
            }
            menu();
        }
        if (ui == 'I') {                                     // Simple test to ensure that the desired Transaction is the interest type, by matching with I as  
            interest();                                      // instructed.
            menu();
        }
        if (ui == 'P') {                                     // Printing all open accounts, checking if use input is 'P' for Print Transaction.
            printaccs();
            menu();
        }
        else if ((ui!='O'&&ui!='B'&&ui!='P'&&ui!='I'&&ui!='C'&&ui!='W'&&ui!='D'&&ui!='E')||(validate==0)) {
            printf("Invalid transaction type\n");            // Last but not least checking if the user input of which Transaction to performe is valid,
            menu();                                          // by an else if statement that includes all of the allowed operators, if input is invalid we 
        }                                                    // print an error , the menu and looping back to the start for continuation.
    }
}