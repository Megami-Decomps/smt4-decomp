#ifndef CLASSES_OBJ558D20_H
#define CLASSES_OBJ558D20_H

#include "common.h"

/* Base of the Obj55a94c family (vtable at 0x558d20; named after it until its real name is known). */
class Obj558d20 {
public:
    Obj558d20(u32 mode);
    virtual ~Obj558d20();

    /* 0x04 */ u8 unk04[0x1c];
    /* 0x20 */ u16 id;    /* key this object is registered under */
    /* 0x22 */ u8 unk22[0x1e];
    /* 0x40 */ u32 unk40;
};

typedef char Obj558d20SizeCheck[sizeof(Obj558d20) == 0x44 ? 1 : -1];

#endif
