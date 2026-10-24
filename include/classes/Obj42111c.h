#ifndef CLASSES_OBJ42111C_H
#define CLASSES_OBJ42111C_H

#include "classes/Obj421460.h"

/* An Obj421460 with four more words and a packed tail (vtable at 0x42111c; named after it until
 * its real name is known). */
class Obj42111c : public Obj421460 {
public:
    Obj42111c(u32 owner);

    /* 0x60 */ u32 unk60;
    /* 0x64 */ u32 unk64;
    /* 0x68 */ u32 unk68;
    /* 0x6C */ u32 unk6c;
    /* 0x70 */ Obj421460Packed packed70;
};

typedef char Obj42111cSizeCheck[sizeof(Obj42111c) == 0x74 ? 1 : -1];

#endif
