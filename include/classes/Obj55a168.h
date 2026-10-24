#ifndef CLASSES_OBJ55A168_H
#define CLASSES_OBJ55A168_H

#include "common.h"

/* A streamed record (vtable at 0x55a168): a flag byte that starts cleared, then values the stream reader fills. */
class Obj55a168 {
public:
    Obj55a168() : flag(0) {}
    virtual void vfunc08();
    /* 0x04 */ u8 flag;
    /* 0x08 */ u64 unk08;
    /* 0x10 */ u64 unk10;
};

typedef char Obj55a168SizeCheck[sizeof(Obj55a168) == 0x18 ? 1 : -1];

#endif
