// This program asks the user to enter the length and elements of 2 arrays and then prints the unique elements in a new array.
// Author: Morgan Hausmann

#include <stdio.h>

int main() {

	int n, i, m, o, k = 0;

	printf("Enter the length of array 1: ");
	scanf("%d", &n); // n is the length of the first array, this line scans in the length

	int first_array[n]; // initializes first array

	printf("Enter the elements of the array: ");
		for(i = 0; i < n; i++)
		scanf("%d", &first_array[i]); // i represents the elements of the first array, this line scans in the elements

	for(i = 0; i < n; i++)
	printf("%d", first_array[i]); // this prints out the first array

	printf("\n"); // new line

	printf("Enter the length of array 2: ");
	scanf("%d", &m); // m is the length of the 2nd array, this line scans in the length

	int second_array[m]; // initializes second array

	printf("Enter the elements of the array: ");
		for(i = 0; i < m; i++)   
		scanf("%d", &second_array[i]);  // e represents the elements of the second array. this line scans in the elements.

	for(i = 0; i < m; i++)
	printf("%d", second_array[i]); // this line prints out the second array

	printf("\n"); // new line

	o = n + m;	

	int new_array[o]; // array for the merge	

	for(i = 0; i < n; i++)  // combines array 1
	new_array[i] = first_array[i];  
	
	int s, found = 0;
	
	for(i = n; k < m; k++) { //adds array 2

		for(s = 0; s < n; s++)
			if(second_array[k]==first_array[s]) // checks for unique elements
				found = 1;
		if(!found) 
		new_array[i++] = second_array[k];
					  
				    }	
	int j = 0;

	for(j = 0; j < i; j++)
	printf("%d", new_array[j]); // print out the merged array

	printf("\n");

return 0;
}
