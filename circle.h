//
//  circle.h
//  oo
//
//  Circle Class
//
//  Created by ursus on 08.11.15.
//  Copyright © 2015 ursus. All rights reserved.
//
#ifndef circle_h
#define circle_h

#include <stdio.h>
#include "shape.h"

// Class Circle
typedef struct _CirclePrivateData {
    int x;
    int y;
    int radius;
} CirclePrivateData_t;

// functions
void CircleDraw (Shape_t * obj);
void CircleSet (Shape_t * obj, int x, int y, int radius);
void CircleInit (Shape_t * obj);
Shape_t * CircleCreate ();

// create and assign the functions to the function table
static struct CircleFunctionTable {
    void (*Init)(Shape_t * obj);
    void (*Draw)(Shape_t * obj);
    void (*Set)(Shape_t * obj, int x, int y, int radius);
} circleFunctions = {
    CircleInit,
    CircleDraw,
    CircleSet
};

#endif /* circle_h */
