#ifndef CLASSES_OBJ42CD08_H
#define CLASSES_OBJ42CD08_H

#include "common.h"

/* A two-word event record that starts cleared; its out-of-line destructor (_ZN9Obj42cd08D1Ev) does nothing. */
class Obj42cd08 {
public:
    Obj42cd08() { first = 0; second = 0; }
    ~Obj42cd08();

    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
};

typedef char Obj42cd08LayoutCheck[sizeof(Obj42cd08) == 8 ? 1 : -1];

#endif
