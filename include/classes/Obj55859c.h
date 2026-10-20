#ifndef OBJ55859C_H
#define OBJ55859C_H

#include "common.h"

/* The object whose vtable is at 0x55859c (named after it until its real name is known); the vtable
 * is stored by FUN_002ea00c (its destructor) and FUN_002eca44. */
class Obj55859c {
public:
    virtual ~Obj55859c();
    void freeResource();

private:
    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04[0x0C];
    /* 0x10 */ u8 state;
    /* 0x11 */ u8 unk11[0x33];
    /* 0x44 */ u32 resource;   /* released by the destructor */
};

#endif
