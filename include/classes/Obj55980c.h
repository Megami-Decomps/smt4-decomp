#ifndef CLASSES_OBJ55980C_H
#define CLASSES_OBJ55980C_H

#include "classes/Obj55b104.h"

/* The shared-reference class whose vtable is at 0x55980c (named after it until its real name is
 * known): Obj5593b8 with its own vtable. It declares no destructor, so its deleting destructor
 * (_ZN9Obj55980cD0Ev) only runs the Obj5593b8 one. Its constructor is
 * _ZN9Obj55980cC1Ev. */
class Obj55980c : public Obj5593b8 {
public:
    Obj55980c();
};

#endif
