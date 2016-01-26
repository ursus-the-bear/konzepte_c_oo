//
//  circle.c
//  oo
//
//  Circle Class
//
//  Created by ursus on 08.11.15.
//  Copyright © 2015 ursus. All rights reserved.
//
#include <stdlib.h>
#include "shape.h"
#include "circle.h"

// draw the circle
void CircleDraw (Shape_t * obj) {
 
    CirclePrivateData_t * pData = (CirclePrivateData_t *)obj->privateData;
    
    printf ("Drawing a circle: x %d y %d radius %d\n", pData->x, pData->y, pData->radius);
};

// set the coordinates
void CircleSet (Shape_t * obj, int x, int y, int radius) {
    
    CirclePrivateData_t * pData = (CirclePrivateData_t *)obj->privateData;
    
    pData->x = x;
    pData->y = y;
    pData->radius = radius;
    
    printf ("Set the circle to: x %d y %d radius %d\n", x, y, radius);
};

// initialise
void CircleInit (Shape_t * obj) {
    
    CircleSet(obj, 100, 100, 50);
};


// create a new circle i.e. constructor
Shape_t * CircleCreate () {
    
    Shape_t *obj = malloc(sizeof (*obj));
    obj->functionTable = (struct ShapeFunctionTable *) &circleFunctions;

    CirclePrivateData_t * pData = malloc(sizeof * pData);
    obj->privateData = &pData;

    // setup your circle
    obj->functionTable->Init (obj);

    return obj;
}