#ifndef CLASSES_OBJ55A87C_H
#define CLASSES_OBJ55A87C_H

#include "common.h"

/* The 0x20-byte payload a record carries at +8; its constructor and reader live elsewhere. */
class Obj55a87cPayload {
public:
    Obj55a87cPayload();
    Obj55a87cPayload(const Obj55a87cPayload &other);
    u32 unk00[8];
};

/* Abstract record base (vtable 0x55ad20, two unimplemented slots): two header bytes and the payload. */
class Obj55ad20 {
public:
    Obj55ad20() : kind(0) {}
    virtual void vfunc08() = 0;
    virtual void vfunc0c() = 0;
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 flags;
    /* 0x08 */ Obj55a87cPayload payload;
};

/* A streamed record (vtable 0x55a87c) that adds nothing to the base. */
class Obj55a87c : public Obj55ad20 {
public:
    Obj55a87c();
    virtual void vfunc08();
    virtual void vfunc0c();
};

typedef char Obj55a87cSizeCheck[sizeof(Obj55a87c) == 0x28 ? 1 : -1];

#endif
