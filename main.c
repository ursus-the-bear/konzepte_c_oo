//
//  main.c
//  oo
//
//  Created by ursus on 03.11.15.
//  Copyright © 2015 ursus. All rights reserved.
//

#include <stdio.h>
#include "shape.h"
#include "rectangle.h"
#include "circle.h"

// main
int main(int argc, const char * argv[]) {
    
    Shape_t * circle;
    circle = CircleCreate();
    
    Shape_t * rectangle;
    rectangle = RectangleCreate();

    // call one of the rectangles private functions
    ((struct RectangleFunctionTable *)rectangle)->Set (rectangle, 10, 10, 500, 500);
    
}
