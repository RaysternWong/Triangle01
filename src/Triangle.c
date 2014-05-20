#include "Triangle.h"

char *getTriangleName(int side1, int side2, int side3) 
{
	if ( (side1 + side2 <=side3 ) || (side2 + side3 <=side1 ) || (side1 + side3 <=side2 )  )
		return "invalid";
		
	else if ((side 1 == 0) || (side 2 == 0) || (side 3 == 0) )
		return "invalid";
		
    else if  ( side 1 == side 2 == side 3)
	    return "equilateral";
		
	else if ( ( side 1 == side 2) || ( side 2 == side 3) || ( side 1 == side 3) )
	    return "isoscales";
	
	else 
	    return "scalene" ;
}