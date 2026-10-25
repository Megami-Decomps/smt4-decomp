#include "battle/BtlMainAccess.h"
#include "common.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
extern u32 g_btlScriptUnit;
s32 scrGetArg(u32 index);
void *btlUnitGet(u32 index);
void FUN_004fb798(s32, void *, s32, u32, s32, s32, s32, s32, u32, s32, s32, s32, s32, s32, s32);
void FUN_004fb43c(s32, void *, u32, s32, s32, s32, s32);

// Queue HP/MP recovery from script percentages, respecting the one-point status limit.
u32 btlScriptRecoverHpMpPercent()
{
    s32 hpPercent = scrGetArg(0);
    s32 mpPercent = scrGetArg(1);
    s32 showEffect = scrGetArg(2);
    void *unit = btlUnitGet(g_btlScriptUnit);
    u32 effectFlags = 0;
    if (showEffect > 0) {
        effectFlags = 0x3be0;
    }
    BtlCombatantEntryA *entry = btlGetMainState()->entries;
    s32 hp = (entry->maxHp * hpPercent) / 100;
    if ((entry->statusFlags & 8) != 0 && hp > 1) {
        hp = 1;
    } else if (hp == 0) {
        hp = -1;
    }
    s32 mp = (entry->maxMp * mpPercent) / 100;
    if ((entry->statusFlags & 8) != 0 && mp > 1) {
        mp = 1;
    } else if (mp == 0) {
        mp = -1;
    }
    FUN_004fb798(0, unit, 0, btlGetMainState()->unk1ED4, 0, hp, mp, -1,
                 effectFlags, 0, 0, 9, 0, 0, 1);
    FUN_004fb43c(0, unit, 0x1000263, 0, 0, 0, 0);
    return 1;
}
}
