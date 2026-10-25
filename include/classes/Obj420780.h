#ifndef CLASSES_OBJ420780_H
#define CLASSES_OBJ420780_H

#include "common.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"


struct Obj420780Point {
    f32 x, y;
};

/* The battle target selection's information panel (vtable at 0x420780), 0x12C bytes. */
class Obj420780 {
public:
    Obj420780();
    virtual ~Obj420780();

    static void *operator new(u32 bytes, void *owner) throw() { return asdOperatorNew(bytes, owner); }

    /* 0x00: vtable pointer */
    /* 0x04 */ char title[0x20];
    /* 0x24 */ u8 unk24;
    /* 0x25 */ u8 unk25[3];
    /* 0x28 */ s32 unk28;
    /* 0x2C */ char text[0x20];
    /* 0x4C */ u8 order[6];
    /* 0x52 */ u8 pair[2];
    /* 0x54 */ u8 unk54[6];
    /* 0x5A */ u8 unk5A[0x16];
    /* 0x70 */ Obj420780Point anchors[5];
    /* 0x98 */ Obj420780Point slots[8];
    /* 0xD8 */ f32 scale;
    /* 0xDC */ u32 color;
    /* 0xE0 */ u32 shadowColor;
    /* 0xE4 */ u8 unkE4[0x48];
};

typedef char Obj420780SizeCheck[sizeof(Obj420780) == 0x12C ? 1 : -1];

#endif
