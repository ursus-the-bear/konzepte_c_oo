//
//  rectangle.c
//  oo
//
//  Class Rectangle
//
//  Created by ursus on 08.11.15.
//  Copyright © 2015 ursus. All rights reserved.
//
#include <stdlib.h>
#include "shape.h"
#include "rectangle.h"

// Draw the rect
void RectangleDraw (Shape_t * obj) {
    
    RectanglePrivateData_t * pData = (RectanglePrivateData_t *)obj->privateData;
    
    printf ("Drawing a rectangle: top %d left %d bottom %d right %d\n", pData->top, pData->left, pData->bottom, pData->right);
}

// Set the coordinates of the rect
void RectangleSet (Shape_t * obj, int top, int left, int bottom, int right) {
    
    RectanglePrivateData_t * pData = (RectanglePrivateData_t *)obj->privateData;
    
    pData->top = top;
    pData->left = left;
    pData->bottom = bottom;
    pData->right = right;
    
    printf ("Set the rectangle to: top %d left %d bottom %d right %d\n", top, left, bottom, right);
}

// init
void RectangleInit (Shape_t * obj) {

    RectangleSet (obj, 1, 1, 100, 100);
}

// create a new rectangle i.e. constructor
Shape_t * RectangleCreate () {
    
    // setup your function table to point to rectangle functions
    Shape_t *obj = malloc (sizeof *obj);
    obj->functionTable = (struct ShapeFunctionTable *) &rectangleFunctions;
    
    // setup your private data to point to the data
    RectanglePrivateData_t * pData = malloc (sizeof *pData);
    obj->privateData = &pData;
    
    // initialise your rectangle
    obj->functionTable->Init (obj->privateData);
    
    return obj;
}

