#ifndef CLASSES_OBJ420DEC_H
#define CLASSES_OBJ420DEC_H

#include "classes/Obj420f4c.h"

/* A pair of heap records with a block of state words in front (vtable at 0x420dec; named after it
 * until its real name is known). */
class Obj420dec {
public:
    Obj420dec();
    virtual ~Obj420dec();

    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1c;
    /* 0x20 */ u32 words[20];
    /* 0x70 */ u8 unk70[0x48];
    /* 0xB8 */ Obj420f4c first;
    /* 0xF4 */ Obj420f4c second;
};

typedef char Obj420decSizeCheck[sizeof(Obj420dec) == 0x130 ? 1 : -1];

#endif
