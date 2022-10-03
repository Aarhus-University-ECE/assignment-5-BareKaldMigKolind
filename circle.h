#pragma once
#include <stdbool.h>
#include "circle.h"

typedef struct point {
	int x;
	int y;
} point;



/*add your definition of circle here. You need top call it "circle"*/

//Her definerer jeg min circle struct. Den har variablen r, for radiusen 
//og structen point i variablen p. Dermed kan point tilgås ved p.x og p.y
typedef struct circle {
	int r;
	point p; 
} circle;


void fiveCircles(circle c[]);
bool circleIsValid(const circle* c);
void translate(circle* c, const point* p);