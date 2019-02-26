// This program prints the number of underscores and capital letters in the indentifier written by the user
// Author is: Morgan Hausmann

#include <stdio.h>

void count(int *num_, int *num_upper);

int main() {

int num_ = 0, num_upper = 0;

printf("Enter an identifier: ");

count(&num_, &num_upper); // Calls count function for the indentifier just written.

printf("There are %d underscores and %d upper-case letters. \n", num_, num_upper);

return 0;

}



void count(int *num_, int *num_upper){

char ch; // Will allow getchar() to be assigned
int a = 0, b = 0;
while((ch = getchar()) != '\n'){ // Scans each character of the identifier until it reaches a neww line

if(ch  >=  65 && ch <= 90){ // Indentifies if the charecter is a upper case letter in the ASCII chart
a++; // Incremnts the variable standing for uppercase letters
}

if(ch == 95){ // Idenifies if the charecter is an underscore on the ASCII chart
b++; // Increments the variable standing for underscores
}
}

*num_ = b; // Uses pointer to assign the underscore value represented by b to the address of num_ in the main
*num_upper = a; // uses pointer to assign the capital letter valure represented by a to the address of num_upper in the main.
}
