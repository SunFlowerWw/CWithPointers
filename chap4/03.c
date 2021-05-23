/*
** Classify the type of a triangle given the lengths of its sides.
*/
#include <stdlib.h>
#include <stdio.h>
int
main()
{
	float a;
	float b;
	float c;
	float temp;
	/*
	** Prompt for and read the data.
	*/
	printf( "Enter the lengths of the three sides of the triangle: " );
	scanf( "%f %f %f", &a, &b, &c );
	/*
	** Rearrange the values so that a is the longest and c is the shortest.
	*/
	if( a < b ){
	temp = a;
	a = b;
	b = temp;
	}
	if( a < c ){
	temp = a;
	a = c;
	c = temp;
	}
	if( b < c ){
	temp = b;
	b = c;
	c = temp;
	}
/*/*
** Now see what kind of triangle it is. Note that if any of the sides
** is <= 0 (and we really only have to check the shortest one for this),
** or if the two shorter sides together are shorter than the longest
** side, it isn’t a triangle at all.
*/
	if( c <= 0 || b + c < a )
		printf( "Not a triangle.\n" );
	else if( a == b && b == c )
		printf( "Equilateral.\n" );                                                                                                     
	else if( a == b || b == c )
		printf( "Isosceles.\n" );
	else
	printf( "Scalene.\n" );

	return EXIT_SUCCESS;
}



