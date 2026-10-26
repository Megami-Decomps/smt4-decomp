#ifndef CLASSES_OBJ55C7B0_H
#define CLASSES_OBJ55C7B0_H
#include "classes/Obj55c81c.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

/* An Obj55c81c controller (vtable at 0x55c7b0; named after it until its real name is known) that
 * starts with frames at -1 and no pending state. Allocated as 0xa4 bytes. */
class Obj55c7b0 : public Obj55c81c {
public:
    Obj55c7b0();
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }

    /* 0x98 */ u8 unk98[0xc];
};

typedef char Obj55c7b0SizeCheck[sizeof(Obj55c7b0) == 0xa4 ? 1 : -1];

#endif
