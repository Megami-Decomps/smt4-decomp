#ifndef OBJ5590D0_H
#define OBJ5590D0_H

#include "common.h"

/* The object whose vtable is at 0x5590d0 (named after it until its real name is known); the vtable
 * is stored by FUN_002e7168, FUN_002eb624 and FUN_002f6b9c. Slots 0 and 1 are the destructors. */
class Obj5590d0 {
public:
    virtual ~Obj5590d0();
    virtual s32 vfunc08();   /* _ZN9Obj5590d07vfunc08Ev */

private:
    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04[0x24];
    /* 0x28 */ s32 mode;
};

#endif
