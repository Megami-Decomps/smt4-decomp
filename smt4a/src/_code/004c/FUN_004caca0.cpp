/* NON_MATCHING: register allocation only (hoisted state constants 5/6 swap registers; unit address temp uses r0/r1 the other way round) */
/* Puts every ready, unlocked unit of a unit group into state 5/6 (6 if unk A0 is set). */
#include "common.h"

extern "C" {

typedef struct Unit {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u32 state;
    /* 0x4C */ u32 unk4C;
    /* 0x50 */ u32 flags;
    /* 0x54 */ u32 unk54;
    /* 0x58 */ u32 flags2;
    /* 0x5C */ u32 unk5C;
    /* 0x60 */ u16 flags3;
    /* 0x62 */ u8 unk62[0x3E];
    /* 0xA0 */ u8 unkA0;
    /* 0xA1 */ u8 unkA1[0x12F];
} Unit; /* 0x1D0 */

typedef struct UnitManager {
    /* 0x0000 */ u8 unk0000[0x1ED4];
    /* 0x1ED4 */ Unit *units;
} UnitManager;

void FUN_004caca0(UnitManager *mgr, s32 group, s32 setBit3, s32 keepFlag)
{
    s32 first = 0;
    s32 count = 0;
    s32 i;

    if (group == 0) {
        count = 4;
    } else if (group == 1) {
        first = 4;
        count = 0x32;
    } else if (group == 2) {
        first = 0x36;
        count = 1;
    } else if (group == 3) {
        first = 0x43;
        count = 0x2a;
    }
    for (i = first; i < first + count; i++) {
        Unit *unit = &mgr->units[i];
        u32 flags = unit->flags;

        if ((flags & 1) != 0 && (flags & 0x80) != 0 && (flags & 2) == 0) {
            if (unit->unkA0 != 0) {
                unit->state = 6;
            } else {
                unit->state = 5;
            }
            u32 flags2 = (unit->flags2 & ~6) | 1;
            unit->flags2 = flags2;
            if (setBit3 != 0) {
                flags2 |= 8;
            }
            unit->unk4C = 0;
            if (setBit3 != 0) {
                unit->flags2 = flags2;
            }
            if (keepFlag == 0) {
                unit->flags3 |= 0x200;
            }
        }
    }
}

}
