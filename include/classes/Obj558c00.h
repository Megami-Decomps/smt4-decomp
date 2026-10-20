#ifndef OBJ558C00_H
#define OBJ558C00_H

#include "common.h"

/* A range of data: its start is `base + offset`. */
struct Obj558c00Range {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s32 base;
    /* 0x10 */ u32 size;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ s32 offset;
};

/* The object whose vtable is at 0x558c00 (named after it until its real name is known); the vtable
 * is stored by FUN_002f31cc and FUN_002ecd54. Slots 0 and 1 are the destructors. */
class Obj558c00 {
public:
    virtual ~Obj558c00();
    virtual void vfunc08();
    virtual s32 vfunc0c(Obj558c00Range *range);   /* _ZN9Obj558c007vfunc0cEP14Obj558c00Range: hands the range to FUN_0010a014 */
    virtual void vfunc10();
    virtual s32 vfunc14(Obj558c00Range *range);   /* _ZN9Obj558c007vfunc14EP14Obj558c00Range: hands the range to FUN_00109ff8 */
};

#endif
