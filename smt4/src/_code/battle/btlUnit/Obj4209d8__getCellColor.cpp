/* NON_MATCHING: recovered combatant lookup and channel interpolation still differ in VFP and integer register scheduling. */
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
extern u8 DAT_00439ce0, DAT_00439ce1, DAT_00439ce2, DAT_00439ce3;
extern u32 DAT_00439cf0;
extern f32 s______00439cf4;
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
        u32 red = (u32)((f32)DAT_00439ce0 * s______00439cf4);
        u32 green = (u32)((f32)DAT_00439ce1 * s______00439cf4);
        u32 blue = (u32)((f32)DAT_00439ce2 * s______00439cf4);
        red = FUN_0026e6a0(red & 255, DAT_00439ce0, DAT_00439cf0, cell->colorPhase, 0);
        green = FUN_0026e6a0(green & 255, DAT_00439ce1, DAT_00439cf0, cell->colorPhase, 0);
        blue = FUN_0026e6a0(blue & 255, DAT_00439ce2, DAT_00439cf0, cell->colorPhase, 0);
        return red << 24 | (green & 255) << 16 | (blue & 255) << 8 | DAT_00439ce3;
    }
    return 0;
}
