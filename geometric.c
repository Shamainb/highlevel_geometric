#include <stdio.h>
#include <math.h>

/**
 * main - entry point of the program
 * Return: 0
 */
int main ()
{
	char choice;
	    float radius, length, width, base, height, side; /* Declare variable to store user input and dimensions. */
	float area; /* Declare a variable to store the calcuted area. */

	/* Display the options to the user. */
	printf("[A] - Triangle\n");
	printf("[B] - Square\n");
	printf("[C] - Rectangle\n");
	printf("[D] - Circle\n");
	printf("Please select the geometric figure to perform operations on\n");
	printf("Enter your choice >: ");
	scanf("%c", &choice); /* Read and store the user's choice */

	switch(choice) /* Start a switch statement basedon user's choice */
	{
		case 'A':
			printf("Please enter the base >  "); /* Prompt user for base */
			scanf("%f", &base);
			printf("Please enter the height > ");
			scanf("%f", &height); /* Read and store base and height. */
			area=0.5*base*height; /* Calculate the area of the triangle */
			printf("Geometric figure on which operations have been made: Triangle\n"); /* Display the calculated area */
			printf("Base of triangle: %.2fm\n", base);
			printf("Height of triangle: %.2fm\n", height);
			printf("Area of triangle: %.2fm²\n", area);
			break;
		case 'B':
			printf("Please enter the side > ");
			scanf("%f", &side);
			area=side*side;
				printf("Geometric figure on which operations have been made: Square\n");
				printf("Side of the square: %.2fm\n", side);
				printf("Area of the square: %.2fm²\n", area);
			break;
		case 'C':
			printf("Please enter the length >");
			scanf("%f", &length);
			printf("Please enter the width >");
			scanf("%f", &width);
			area=length*width;
			printf("Geometric figure on which operations have been made: Rectangle\n");
			printf("Length of rectangle: %.2fm\n", length);
			printf("Width of rectangle: %.2fm\n", width);
			printf("Area of rectangle: %.2fm²\n", area);
			break;
		case 'D':
			printf("Please enter the radius >");
			scanf("%f", &radius);
			area=3.14*radius*radius;
			printf("Geometric figure on which operations have been made: Circle\n");
			printf("Radius of circle: %.2fm\n", radius);
			 printf("Area of circle: %.2fm²\n", area);
			break;
		default:
				printf("Invalid input. No calculations have been performed ");
				break;
	}

	return 0;
}
