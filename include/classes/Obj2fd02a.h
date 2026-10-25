#ifndef CLASSES_OBJ2FD02A_H
#define CLASSES_OBJ2FD02A_H

#include "common.h"
#include <stddef.h>

/* A thread bookkeeping record (named after its destructor at 0x2fd02a, which finalizes the thread, until
 * its real name is known): a state word and an active flag, built by the owner's static initialiser. */
class Obj2fd02a {
public:
    Obj2fd02a() : state(0), active(1) {}
    ~Obj2fd02a();

    /* 0x00 */ u32 state;
    /* 0x04 */ u8 active;
};

typedef char Obj2fd02aLayoutCheck[
    sizeof(Obj2fd02a) == 8 && offsetof(Obj2fd02a, active) == 4 ? 1 : -1];

#endif
