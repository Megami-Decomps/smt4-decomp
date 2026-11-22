#ifndef CLASSES_OBJ557BD8_H
#define CLASSES_OBJ557BD8_H

#include "common.h"
#include <stddef.h>
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "battle/TargetMarkerEntry.h"

extern "C" int asdOperatorDelete(void *block);

/* The battle target selection's information panel (vtable at 0x557bd8), 0xF4 bytes. */
class Obj557bd8 {
public:
    Obj557bd8();
    virtual ~Obj557bd8();

    static void *operator new(u32 bytes, void *owner) throw() { return asdOperatorNew(bytes, owner); }
    static void operator delete(void *block) { asdOperatorDelete(block); }

    /* 0x00: vtable pointer */
    /* 0x04 */ char name[0x20];        /* the demon's name */
    /* 0x24 */ u8 registered;          /* the demon, or one it links to, is registered */
    /* 0x25 */ u8 unk25[3];
    /* 0x28 */ s32 level;              /* the level shown, scaled by the progress grade and capped at 999 */
    /* 0x2C */ char raceName[0x20];
    /* 0x4C */ u8 resistances[8];      /* the kind (bits 10 and up) of each resistance value */
    /* 0x54 */ u8 options[6];          /* per-target display flags the battle passes in */
    /* 0x5A */ u8 unk5A[2];
    /* 0x5C */ f32 position[3];        /* the target's world position */
    /* 0x68 */ ScreenPointF screen;    /* that position projected to the top screen */
    /* 0x70 */ f32 frameSize[2][2];    /* [0][0]: the right-hand panel's edge, [1][0]: the left-hand panel's margin */
    /* 0x80 */ f32 iconPos[3][2];      /* [0]: the level digits, [1]: the race name (centred) */
    /* 0x98 */ f32 barWidth;
    /* 0x9C */ u32 colorA;
    /* 0xA0 */ u32 colorB;
    /* 0xA4 */ u8 side;                /* 1: the panel sits right of the target, 0: left of it */
    /* 0xA5 */ u8 unkA5[0xF];
    /* 0xB4 */ f32 offset;             /* the panel's horizontal distance from the target */
    /* 0xB8 */ u8 unkB8[0x34];
    /* 0xEC */ u8 unseen;              /* an unregistered demon whose record hides its data */
    /* 0xED */ u8 unkED[3];
    /* 0xF0 */ u32 levelDigits;        /* digits the level is drawn with: 2, or 3 from level 100 */
};

typedef char Obj557bd8OffsetCheck[offsetof(Obj557bd8, barWidth) == 0x98 && offsetof(Obj557bd8, resistances) == 0x4C &&
    offsetof(Obj557bd8, position) == 0x5C && offsetof(Obj557bd8, screen) == 0x68 && offsetof(Obj557bd8, side) == 0xA4 &&
    offsetof(Obj557bd8, offset) == 0xB4 && offsetof(Obj557bd8, unseen) == 0xEC ? 1 : -1];
typedef char Obj557bd8SizeCheck[sizeof(Obj557bd8) == 0xF4 ? 1 : -1];

#endif
