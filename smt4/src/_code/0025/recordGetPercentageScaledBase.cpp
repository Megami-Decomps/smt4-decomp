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

u32 recordGetPercentageScaledBase(Unit *unit)
{
    if (unit == NULL)
        return 0;
    if (unit->base == 0)
        return 0;
    u16 level = unit->level;
    if (level == 0)
        return 0;
    if (level == 100)
        return unit->base;
    u32 result = unit->base * level / 100;
    if ((s32)result <= 0)
        result = 1;
    return result;
}

}
