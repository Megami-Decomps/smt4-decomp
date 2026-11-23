#ifndef CLASSES_OBJ55C840_H
#define CLASSES_OBJ55C840_H

#include "classes/Obj55c81c.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

/* An Obj55c81c controller (vtable at 0x55c840; named after it until its real name is known).
 * Allocated as 0xbc bytes. */
class Obj55c840 : public Obj55c81c {
public:
    Obj55c840();
    virtual ~Obj55c840();
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }

    /* 0x95 */ u8 active;
    /* 0x96 */ u8 unk96[2];
    /* 0x98 */ u32 words[6];
    /* 0xB0 */ u8 unkB0[0xc];
};

typedef char Obj55c840SizeCheck[sizeof(Obj55c840) == 0xbc ? 1 : -1];

#endif
