#ifndef OBJ55B348_H
#define OBJ55B348_H

#include "common.h"

/* The object whose vtable is at 0x55b348 (named after it until its real name is known); the vtable
 * is stored by FUN_00123100. Slots 0 and 1 are the destructors. */
class Obj55b348 {
public:
    virtual ~Obj55b348();
    virtual void vfunc08();   /* _ZN9Obj55b3487vfunc08Ev */

private:
    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04[0x40];
    /* 0x44 */ u32 value;
};

#endif
