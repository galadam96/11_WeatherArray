/*Date:2023.
Purpose: 2D array weather program for finding the total rainfall for each year, 
the average yearly rainfall 
and the average rainfall for each month */

#include <stdio.h>


int main() {

	//initalize monthy rain values
	float pastRainFall[5][12] = {
		{ 10, 12, 7, 5, 3, 1, 4, 8, 9, 12, 14, 20},
		{ 12.2, 11.3, 4.5, 4.3, 3.2, 2.3, 4.5, 8.5, 5.6, 8.3, 10.3, 11.3},
		{ 13.3, 18.4, 6.1, 4.3, 4.2, 2.3, 2.5, 8.5, 5.6, 8.3, 10.1, 13.6},
		{ 9.8, 10.6, 4.4, 8.1, 8.1, 1.9, 3.7, 8.5, 5.6, 10.3, 14.5, 21.3},
		{ 7.6, 13.3, 3.1, 3.1, 5.2, 6.3, 4.5, 3.5, 1.6, 8.3, 10.3, 18.7},
		
		};

	int year = 2010;
	float totalRainforYear = 0;
	
	// Prints the initial values itself

	printf("YEAR\tJAN\tFEB\tMAR\tAPR\tMAY\tJUN\tJUL\tAUG\tSEP\tOCT\tNOV\tDEC  (cm)\n"); // Prints HEADER 

	for (int i = 0; i < 5; i++) {

		printf("\n%i \t", year);
		year++;

		for (int j = 0; j < 12; j++) {
			printf("%.1f \t",pastRainFall[i][j]); //prints the 2D array
		}
		
	}

	
	// Calculating total yearly rainfalls
	printf("\n\n\n");
	printf("TOTAL YEARLY RAINFALLS\n\n");
	printf("YEAR  RAINFALL (cm)\n"); // Prints HEADER 
	year = 2010; //setting back the year counter
	for (int i = 0; i < 5; i++) {
		printf("\n% i \t", year);
		year++;
		for (int j = 0; j < 12; j++) {
			totalRainforYear = totalRainforYear + pastRainFall[i][j];
		}
		printf("%.1f\n", totalRainforYear);
		totalRainforYear = 0; // set it to 0 after every row
	}


	/*
	//How to add arrays together 1D
	printf("\n\n");
	int csd[2] = { 1, 2 };
	int dsd[2] = { 3, 4 };
	int sumo[2] = { csd[0] + dsd[0], csd[1] + dsd[1] };
	for (int i = 0; i < 2; i++) {
		printf("%i ", sumo[i]);
	}
	*/

	/* 
	//How to add arrays together 2D
	printf("\n\n");
	int asd[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};
	int bsd[2][3] = {
		{7, 8, 9}, 
		{10, 11, 12} 
	};
	int sum[2][3];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			sum[i][j] = asd[i][j] + bsd[i][j];
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%i ", sum[i][j]);
		}
		printf("\n");
	}
	*/

	/*
	//How to add columns together in an array
	printf("\n\n");
	int toAdd[2][3] = {
		{ 7, 8, 9 },
		{ 10, 11, 12 }
	};

	int total = 0;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
		{
			total = total + toAdd[i][j];
		}
		printf("%i ", total);
		total = 0;
	}
	*/


	return 0;
}