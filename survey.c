// This program store 20 responses entered by the user and displays the number of occurences of each result
// Author: Morgan Hausmann

#include <stdio.h>

#define N1 20  // This defines the number of responses
#define N2 5 // This defines the number frequency of responses between 1 and 5

void calculate(int responses[], int n1, int frequency[], int n2);

int main() {

	int responses[N1];
	int i = 0;	
	int frequency[N2] = {0};
	
		printf("Enter %d responses: ", N1);
		for(i = 0; i < N1; i++)
		scanf("%d", &responses[i]); // Allows the user to enter reponses and stores them in the array


		calculate(responses, N1, frequency, N2);

printf("Rating \t Frequency \n");

for(i = 0; i < N2; i++)	
printf("%d  \t \t %d \n", i + 1, frequency[i]); // Tests and prints out responses

printf("\n");

//for(i = 0; i < N2; i++)
//printf("%d", frequency[i]); // Tests and prints out frequency

return 0;

}

void calculate(int responses[], int n1, int frequency[], int n2){

int i = 0;

for(i = 0; i < N1; i++){ // This looop increments frequency

if(responses[i] == 1){
frequency[0]++;}

if(responses[i] == 2){
frequency[1]++;}

if(responses[i] == 3){
frequency[2]++;}

if(responses[i] == 4){
frequency[3]++;}

if(responses[i] == 5){
frequency[4]++;}

}


return;

}
