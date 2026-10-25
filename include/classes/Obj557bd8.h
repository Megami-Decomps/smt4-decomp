#ifndef CLASSES_OBJ557BD8_H
#define CLASSES_OBJ557BD8_H

#include "common.h"
#include <stddef.h>
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" int asdOperatorDelete(void *block);

/* The battle target selection's information panel (vtable at 0x557bd8), 0xF4 bytes. */
class Obj557bd8 {
public:
    Obj557bd8();
    virtual ~Obj557bd8();

    static void *operator new(u32 bytes, void *owner) throw() { return asdOperatorNew(bytes, owner); }
    static void operator delete(void *block) { asdOperatorDelete(block); }

    /* 0x00: vtable pointer */
    /* 0x04 */ char labelText[0x20];
    /* 0x24 */ u8 labelVisible;
    /* 0x25 */ u8 unk25[3];
    /* 0x28 */ u32 labelMode;
    /* 0x2C */ char detailText[0x20];
    /* 0x4C */ u8 slotOrder[6];
    /* 0x52 */ u8 slotState[8];
    /* 0x5A */ u8 unk5A[0x16];
    /* 0x70 */ f32 frameSize[2][2];
    /* 0x80 */ f32 iconPos[3][2];
    /* 0x98 */ f32 barWidth;
    /* 0x9C */ u32 colorA;
    /* 0xA0 */ u32 colorB;
    /* 0xA4 */ u8 unkA4[0x48];
    /* 0xEC */ u8 detailVisible;
    /* 0xED */ u8 unkED[3];
    /* 0xF0 */ u32 detailMode;
};

typedef char Obj557bd8OffsetCheck[offsetof(Obj557bd8, barWidth) == 0x98 ? 1 : -1];
typedef char Obj557bd8SizeCheck[sizeof(Obj557bd8) == 0xF4 ? 1 : -1];

#endif
