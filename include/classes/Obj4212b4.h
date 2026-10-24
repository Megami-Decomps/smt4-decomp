#ifndef CLASSES_OBJ4212B4_H
#define CLASSES_OBJ4212B4_H

#include "classes/Obj421230.h"

/* What an Obj4212b4 is created from; the whole record is kept inside the object. */
struct Obj4212b4Request {
    /* 0x00 */ u32 unk00[4];
    /* 0x10 */ u8 unk10;
    /* 0x11 */ u8 unk11;
    /* 0x12 */ u8 unk12;
    /* 0x13 */ u8 unk13;
    /* 0x14 */ u32 unk14;
};

/* A scene object with no resource of its own (vtable at 0x4212b4; named after it until its real
 * name is known). */
class Obj4212b4 : public Obj421230 {
public:
    Obj4212b4(const Obj4212b4Request *request, AsdAllocatorObject *allocator);
    static Obj4212b4 *create(const Obj4212b4Request *request, AsdAllocatorObject *allocator);

    /* 0x148 */ u8 unk148;
    /* 0x149 */ u8 unk149;
    /* 0x14A */ u8 unk14a;
    /* 0x14B */ u8 unk14b;
    /* 0x14C */ u32 unk14c;
    /* 0x150 */ Obj4212b4Request request;
};

typedef char Obj4212b4SizeCheck[sizeof(Obj4212b4Request) == 24 && sizeof(Obj4212b4) == 0x168 ? 1 : -1];

#endif
