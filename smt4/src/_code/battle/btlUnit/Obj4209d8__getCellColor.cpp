/* NON_MATCHING: retail loads the three status palette bytes before the depth multiplies; this build interleaves them.
 * w94-s2 matched it with three single-use `const u8 palette*` snapshots of the globals, which only steer the
 * scheduling (not kept). */
#include "classes/Obj4209d8.h"
#include "battle/BtlEntry.h"
#include "battle/BtlEntryLookup.h"

extern "C" {
u32 mathTriangleWaveBlend(u32 first, u32 second, u32 duration, u32 phase, u32 mode);
extern Obj4209d8ColorDefaults g_btlColorDefaults;
} /* extern "C" */

/* Computes the pulsing low-health or status tint for the combatant in this cell. */
u32 Obj4209d8::getCellColor(s32 index) const
{
    Obj4209d8Cell *cell = &owner->cells[index];
    BtlEntry *combatant = btlMainFindEntryByListedId((BtlMainState *)owner, cell->unitId);
    if ((cell->flags & 8) != 0) {
        s32 percent = combatant->data.hp * 100 / combatant->data.maxHp;
        if (percent < 20) {
            return mathTriangleWaveBlend(0, 255, 30, owner->colorPhase, 0) << 24;
        }
        u32 value = mathTriangleWaveBlend(0, 128, 30, owner->colorPhase, 0);
        return value << 24 | value << 16 | value << 8;
    }
    if (combatant != NULL && (combatant->flags & 0x2000000) != 0 && (combatant->data.statusFlags & 0x10) != 0) {
        const f32 depth = g_btlColorDefaults.statusDepth;
        u8 red = (u8)((f32)g_btlColorDefaults.statusRed * depth);
        u8 green = (u8)((f32)g_btlColorDefaults.statusGreen * depth);
        u8 blue = (u8)((f32)g_btlColorDefaults.statusBlue * depth);
        red = mathTriangleWaveBlend(red, g_btlColorDefaults.statusRed, g_btlColorDefaults.statusDuration, cell->colorPhase, 0);
        green = mathTriangleWaveBlend(green, g_btlColorDefaults.statusGreen, g_btlColorDefaults.statusDuration, cell->colorPhase, 0);
        blue = mathTriangleWaveBlend(blue, g_btlColorDefaults.statusBlue, g_btlColorDefaults.statusDuration, cell->colorPhase, 0);
        u32 rgb = ((u32)red << 24) | ((u32)green << 16) | ((u32)blue << 8);
        return rgb | g_btlColorDefaults.statusAlpha;
    }
    return 0;
}
