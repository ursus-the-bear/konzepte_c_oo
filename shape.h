//
//  shape.h
//  oo
//
//  Shape Class
//
//  Created by ursus on 08.11.15.
//  Copyright © 2015 ursus. All rights reserved.
//
#ifndef shape_h
#define shape_h



// Generic Class for shape
typedef struct _Shape {
    struct ShapeFunctionTable *functionTable;
    void *privateData;
} Shape_t;

// Shouldn't I use a typedef here?
struct ShapeFunctionTable {
    void (*Init) (Shape_t * obj);
    void (*Draw) (Shape_t * obj);
};

#endif /* shape_h */
