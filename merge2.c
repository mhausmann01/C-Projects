// This program asks the user to enter the length and elements of 2 arrays and then prints the unique elements in a new array.
// Author: Morgan Hausmann

#include <stdio.h>

void merge(int a1[], int size_a1, int a2[], int size_a2, int unique[], int * size_u );

int main() {

	int size_a1, i, size_a2 = 0;

	printf("Enter the length of array 1: ");
	scanf("%d", &size_a1); // size_a1 is the length of the first array, this line scans in the length

	int a1[size_a1]; // initializes first array

	printf("Enter the elements of the array: ");
		for(i = 0; i < size_a1; i++)
		scanf("%d", &a1[i]); // i represents the elements of the first array, this line scans in the elements

	for(i = 0; i < size_a1; i++)
	printf("%d", a1[i]); // this prints out the first array

	printf("\n"); // new line

	printf("Enter the length of array 2: ");
	scanf("%d", &size_a2); // size_a2 is the length of the 2nd array, this line scans in the length

	int a2[size_a2]; // initializes second array

	printf("Enter the elements of the array: ");
		for(i = 0; i < size_a2; i++)   
		scanf("%d", &a2[i]);  // i represents the elements of the second array. this line scans in the elements.

	for(i = 0; i < size_a2; i++)
	printf("%d", a2[i]); // this line prints out the second array

	printf("\n"); // new line

	int  size_u = size_a1 + size_a2;	

	int unique[size_u]; // array for the merge	
	
	merge(a1, size_a1, a2, size_a2, unique, &size_u); // Calls the merge function
	
	int j = 0;

	for(j = 0; j < size_u; j++)
	printf("%d", unique[j]); // print out the merged array

	printf("\n");

return 0;
}
void merge(int a1[], int size_a1, int a2[], int size_a2, int unique[], int * size_u ){

	int i, k = 0;	

	for(i = 0; i < size_a1; i++)  // combines array 1
	unique[i] = a1[i];  
	
	int s, found = 0;
	
	for(i = size_a1; k < size_a2; k++) { //adds array 2

		for(s = 0; s < size_a1; s++)
			if(a2[k]==a1[s]) // checks for unique elements
				found = 1;
		if(!found) 
		unique[i++] = a2[k];
}

	*size_u = i; // Uses pointers to assign new value
}
