#ifndef CLASSES_OBJ420780_H
#define CLASSES_OBJ420780_H

#include "common.h"
#include <stddef.h>
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "battle/TargetMarkerEntry.h"


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
    /* 0x04 */ char name[0x20];        /* the demon's name */
    /* 0x24 */ u8 registered;          /* the demon, or one it links to, is registered */
    /* 0x25 */ u8 unk25[3];
    /* 0x28 */ s32 level;
    /* 0x2C */ char raceName[0x20];
    /* 0x4C */ u8 resistances[8];      /* the kind (bits 10 and up) of each resistance value */
    /* 0x54 */ u8 options[6];          /* per-target display flags the battle passes in */
    /* 0x5A */ u8 unk5A[2];
    /* 0x5C */ f32 position[3];        /* the target's world position */
    /* 0x68 */ ScreenPointF screen;    /* that position projected to the top screen */
    /* 0x70 */ Obj420780Point anchors[5]; /* [0].x: the right-hand panel's edge, [1].x: the left-hand panel's margin */
    /* 0x98 */ Obj420780Point slots[8];
    /* 0xD8 */ f32 scale;              /* the panel's width */
    /* 0xDC */ u32 color;
    /* 0xE0 */ u32 shadowColor;
    /* 0xE4 */ u8 side;                /* 1: the panel sits right of the target, 0: left of it */
    /* 0xE5 */ u8 unkE5[0xF];
    /* 0xF4 */ f32 offset;             /* the panel's horizontal distance from the target */
    /* 0xF8 */ u8 unkF8[0x34];
};

typedef char Obj420780SizeCheck[sizeof(Obj420780) == 0x12C && offsetof(Obj420780, resistances) == 0x4C &&
    offsetof(Obj420780, position) == 0x5C && offsetof(Obj420780, anchors) == 0x70 && offsetof(Obj420780, scale) == 0xD8 &&
    offsetof(Obj420780, side) == 0xE4 && offsetof(Obj420780, offset) == 0xF4 ? 1 : -1];

#endif
