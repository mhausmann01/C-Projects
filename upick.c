#include <stdio.h>

/*Name: Morgan Hausmann. This program allows the user to select one or more products, input the weights of each product, calculate the total amount due, and calculate any change.*/

int main(void){

	int fruit_selection = 1;
	double weight = 0;
	double total = 0;
	double cash = 0;
	double change = 0;

	printf("Please select from the following menu: 1. Sugarbells - $1.99 per lb, 2. Honeybells - $2.39 per lb, 3. Red Grapefruit $1.69 per lb,                     4. Navel Oranges - $1.49 per lb, 5. Pomelo - $1.89 per lb. Enter 0 to stop selection.\n");

	/* This function allows the user to select the fruit type and if the fruit type is not 0, to enter the weight */
	while (fruit_selection != 0){
		printf("Please enter your product selection: \n ");
		scanf("%d", &fruit_selection);
			
			if (fruit_selection !=0){ 
				printf("Please enter weight (lb): \n");
				scanf("%lf", &weight); /* lf is the modifier for double */
				}
	/* This function calulates the total for the user based on what fruit they choose */

	switch (fruit_selection) {

		case 1:  total = total + 1.99 * weight;
			 break;

		case 2: total = total + 2.39 * weight;
			break;
	
		case 3: total = total + 1.69 * weight;
			break;

		case 4: total = total + 1.49 * weight;
			break;

		case 5: total = total + 1.89 * weight;
			break;

		}	
	}
	
	/* These statements will tell the user the total and then calculate the change after the user enters the cash. */
	printf("Amount due: %.2lf \n", total);
	printf("Enter cash recieved: \n");
	scanf("%lf", &cash);

	change = cash - total;

	printf("Your change: %.2lf \n", change);




return 0;



}
