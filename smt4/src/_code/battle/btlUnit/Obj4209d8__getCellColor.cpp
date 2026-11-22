/* NON_MATCHING: retail converts the three status channels strictly in order (the build starts with green)
 * and packs the colour left to right before or-ing in the alpha. */
#include "classes/Obj4209d8.h"

struct Obj4209d8Combatant {
    u32 flags;
    u8 unk04[0x1B0];
    s16 health;
    s16 maximumHealth;
    u8 unk1b8[0xE];
    u16 statusFlags;
};
extern "C" {
Obj4209d8Combatant *btlMainFindEntryByListedId(Obj4209d8Owner *owner, s32 id);
u32 FUN_0026e6a0(u32 first, u32 second, u32 duration, u32 phase, u32 mode);
extern Obj4209d8ColorDefaults g_btlColorDefaults;
}

u32 Obj4209d8::getCellColor(s32 index) const
{
    Obj4209d8Cell *cell = &owner->cells[index];
    Obj4209d8Combatant *combatant = btlMainFindEntryByListedId(owner, cell->unitId);
    if ((cell->flags & 8) != 0) {
        s32 percent = combatant->health * 100 / combatant->maximumHealth;
        if (percent < 20) {
            return FUN_0026e6a0(0, 255, 30, owner->colorPhase, 0) << 24;
        }
        u32 value = FUN_0026e6a0(0, 128, 30, owner->colorPhase, 0);
        return value << 24 | value << 16 | value << 8;
    }
    if (combatant != NULL && (combatant->flags & 0x2000000) != 0 && (combatant->statusFlags & 0x10) != 0) {
        u8 red = (u8)((f32)g_btlColorDefaults.statusRed * g_btlColorDefaults.statusDepth);
        u8 green = (u8)((f32)g_btlColorDefaults.statusGreen * g_btlColorDefaults.statusDepth);
        u8 blue = (u8)((f32)g_btlColorDefaults.statusBlue * g_btlColorDefaults.statusDepth);
        red = FUN_0026e6a0(red, g_btlColorDefaults.statusRed, g_btlColorDefaults.statusDuration, cell->colorPhase, 0);
        green = FUN_0026e6a0(green, g_btlColorDefaults.statusGreen, g_btlColorDefaults.statusDuration, cell->colorPhase, 0);
        blue = FUN_0026e6a0(blue, g_btlColorDefaults.statusBlue, g_btlColorDefaults.statusDuration, cell->colorPhase, 0);
        return red << 24 | green << 16 | blue << 8 | g_btlColorDefaults.statusAlpha;
    }
    return 0;
}
