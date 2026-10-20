/* NON_MATCHING: register allocation only in the final base*level multiply (retail: base in r1, constant in r2) */
/* Returns base * level / 100 (at least 1) for the unit, where base is the low 10 bits of its flags word. */
#include "common.h"

extern "C" {

typedef struct Unit {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ u32 base : 10;   /* low 10 bits of the packed word */
    /*      */ u32 unk54Hi : 22;
    /* 0x58 */ u8 unk58[6];
    /* 0x5E */ u16 level;
} Unit;

u32 FUN_00253f94(Unit *unit)
{
    u32 level;
    s32 scaled;

    if (unit == NULL) {
        return 0;
    }
    level = (unit->base != 0) ? unit->level : 0;
    if (level == 0) {
        return level;
    }
    if (level == 100) {
        return unit->base;
    }
    scaled = (s32)(((u64)(unit->base * level) * 0x028F5C29) >> 32);
    if (scaled <= 0) {
        scaled = 1;
    }
    return scaled;
}

}
