#ifndef CLASSES_OBJ422540_H
#define CLASSES_OBJ422540_H

#include "common.h"

/* The base of the pool objects with vtables at 0x4224b0, 0x4224d4, 0x4224f8 and 0x42251c (named
 * after its own vtable, 0x422540, until its real name is known). Its destructor (_ZN9Obj422540D1Ev) tears
 * down two pools of nodes and is still C form. */
class Obj422540 {
public:
    virtual ~Obj422540();
    virtual void vfunc08() = 0;
};

#endif
