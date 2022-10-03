#include <malloc.h>
#include "circle.h"
#include <stdbool.h>


void fiveCircles(circle c[]) {
/*post: returns an array with five circles - solution to 6.b*/

//Her laver jeg et for-loop, som skal hjælpe med at lave de fem cirkler. Den kører 5 runder. 
	for (int i = 0; i < 5; i++) {

		c[i].r = i;
		c[i].p.x = i;
		c[i].p.y = i;
	}

}

bool circleIsValid(const circle * c) {//Har ændret funktionen fra int til bool. <stdbool.h> er #included
/*post: answer to exercise 6.c*/
//Her kører jeg et if statement, som tjekker om radius i en given cirkel er større end 0. 
if (c -> r > 0) 
{
	return true;
} 
	return false;
}


void translate(circle* c, const point* p) {
/*ansver to exercise 6.d*/
// Her ændrer jeg punkterne x og y i en cirkel.
	c -> p.x = c -> p.x + p -> x;
	c -> p.y = c -> p.y + p -> y;

}



