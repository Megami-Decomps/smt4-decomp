#ifndef CLASSES_OBJ42D340_H
#define CLASSES_OBJ42D340_H

#include "common.h"

/* A kernel handle word that starts closed (0); the destructor (_ZN9Obj42d340D1Ev) closes it if set. */
class Obj42d340 {
public:
    Obj42d340() : handle(0) {}
    ~Obj42d340();

    /* 0x00 */ u32 handle;
};

typedef char Obj42d340LayoutCheck[sizeof(Obj42d340) == 4 ? 1 : -1];

#endif
