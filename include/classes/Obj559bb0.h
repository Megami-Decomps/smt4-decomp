#ifndef CLASSES_OBJ559BB0_H
#define CLASSES_OBJ559BB0_H

#include "common.h"

/* A streamed record (vtable at 0x559bb0): a flag byte that starts cleared, then values the stream reader fills. */
class Obj559bb0 {
public:
    Obj559bb0() : flag(0) {}
    virtual void vfunc08();
    /* 0x04 */ u8 flag;
    /* 0x08 */ u64 unk08;
    /* 0x10 */ u64 unk10;
};

typedef char Obj559bb0SizeCheck[sizeof(Obj559bb0) == 0x18 ? 1 : -1];

#endif
