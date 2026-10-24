#ifndef CLASSES_OBJ55AC48_H
#define CLASSES_OBJ55AC48_H

#include "common.h"

/* A pair of words copied together. */
struct Obj55ac48Pair {
    u32 first;
    u32 second;
};

/* Abstract record base (vtable 0x55ac48, two unimplemented slots): a kind byte and the record's value words. */
class Obj55ac48 {
public:
    Obj55ac48() : type(0) {}
    virtual void vfunc08() = 0;
    virtual void vfunc0c() = 0;
    /* 0x04 */ u8 type;
    /* 0x08 */ Obj55ac48Pair pair08;
    /* 0x10 */ u32 field10;
    /* 0x14 */ u32 field14;
    /* 0x18 */ u16 field18;
    /* 0x1C */ u32 field1C;
};

typedef char Obj55ac48SizeCheck[sizeof(Obj55ac48) == 0x20 ? 1 : -1];

#endif
