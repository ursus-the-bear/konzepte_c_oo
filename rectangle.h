//
//  rectangle.h
//  oo
//
//  Class Rectangle
//
//  Created by ursus on 08.11.15.
//  Copyright © 2015 ursus. All rights reserved.
//
#ifndef rectangle_h
#define rectangle_h

#include <stdio.h>
#include "shape.h"

// private data
typedef struct _RectanglePrivateData {
    int top;
    int left;
    int bottom;
    int right;
} RectanglePrivateData_t;

// functions
void RectangleDraw (Shape_t * obj);
void RectangleSet (Shape_t * obj, int top, int left, int bottom, int right);
void RectangleInit (Shape_t * obj);
Shape_t * RectangleCreate ();

// create the function table and assign the functions
struct RectangleFunctionTable {
    void (*Init)(Shape_t * obj);
    void (*Draw)(Shape_t * obj);
    void (*Set) (Shape_t * obj, int top, int left, int bottom, int right);
} rectangleFunctions = {
    RectangleInit,
    RectangleDraw,
    RectangleSet
};

#endif /* rectangle_h */
