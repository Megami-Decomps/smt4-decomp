#ifndef CLASSES_OBJ420780_H
#define CLASSES_OBJ420780_H

#include "common.h"

extern "C" void *asdOperatorNew(u32 bytes, void *owner);

/* The battle target selection's information panel (vtable at 0x420780), 0x12C bytes. */
class Obj420780 {
public:
    Obj420780();
    virtual ~Obj420780();

    static void *operator new(u32 bytes, void *owner) throw() { return asdOperatorNew(bytes, owner); }

    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04[0x128];
};

typedef char Obj420780SizeCheck[sizeof(Obj420780) == 0x12C ? 1 : -1];

#endif
