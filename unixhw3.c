#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
Not case sensitive for menu
Key 1 - 93
1 func populate 2D array, encrypt message
1 func populate 2D array, decrypt message
Pass parameters (msg and key) to e/d 
1 func validate (encrypt/decrypt/exit/key no)
Encrypt/Decrypt
a. Count and display number of capital letters , Small letters ,
digits and symbols in the message.
b. Count number of characters in the message.
c. Convert all small characters to capital letters and vice versa
the display the message.
d. Encrypt the original message
e. Concatenate the encrypted message with the original message

Exit
*/

int main(int argc, char *argv[])
{   
    bool valid = false;
    char msg [80];
    
    //setlinebuf(stdout);
    
    printf("Welcome to cryptography\n");
    fflush(stdout);
    printf("What would you like to do to a message? (encrypt, decrypt, exit)\n");
    fflush(stdout);
    printf("Enter your choice: ");
    fflush(stdout);
    
    scanf("%s", &msg);
    while((getchar()) != '\n');
    printf("You typed %s",msg);
    /*
    while(!valid)
    {
        printf("%s","lol hi");
        valid = true;
    }
    */
    //get msg 
    //interpret 
    //validation must return true 
    
    //char str [80];
    //printf("sup");
    //scanf("%s",str);
    exit(0);
}