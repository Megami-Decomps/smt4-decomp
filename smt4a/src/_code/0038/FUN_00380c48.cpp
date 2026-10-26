/* NON_MATCHING: r0/r1 are exchanged for percentage operands, status bits and the reciprocal used by signed division; all other instructions match. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlUnit.h"
#include "battle/BattleMessageMasks.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "battle/BattleUnit.h"

extern "C" {
extern u32 g_btlScriptUnit;
extern BattleMessageFlagMasks g_btlMessageFlagMasks;
s32 scrGetArg(u32 index);
void FUN_004fb798(s32 mode, BtlUnitA *unit, u32 effect, BattleRosterRecordA *target, s32 first,
    s32 hp, s32 mp, u32 color, u32 flags, s32 start, s32 end, s32 kind, s32 third, s32 fourth, s32 enabled);
void FUN_004fb43c(s32 delay, BtlUnitA *unit, u32 effect, s32 first, s32 second, s32 third, s32 fourth);

u32 FUN_00380c48(void)
{
    s32 hpPercent = scrGetArg(0);
    s32 mpPercent = scrGetArg(1);
    s32 show = scrGetArg(2);
    BtlUnitA *unit = reinterpret_cast<BtlUnitA *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
    u32 flags = 0;
    if (show > 0)
        flags = 0x3BE0;
    s32 affected = 0;
    for (s32 index = 0; index < 4; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if ((entry->flags & g_btlMessageFlagMasks.required) &&
            !(entry->flags & g_btlMessageFlagMasks.excluded) && entry->unitIndex >= 0) {
            s32 hp = (s32)((u32)entry->maxHp * hpPercent) / 100;
            if ((entry->statusFlags & 8) && hp > 1)
                hp = 1;
            else if (hp == 0)
                hp = -1;
            s32 mp = (s32)((u32)entry->maxMp * mpPercent) / 100;
            if ((entry->statusFlags & 8) && mp > 1)
                mp = 1;
            else if (mp == 0)
                mp = -1;
            BattleRosterRecordA *target = &btlGetMainState()->roster[entry->unitIndex];
            s32 delay = affected * 5;
            FUN_004fb798(0, unit, 0, target, 0, hp, mp, ~0u, flags, delay, delay, 9, 0, 0, 1);
            FUN_004fb43c(delay, unit, 0x1000263, 0, 0, 0, 0);
            ++affected;
        }
    }
    return 1;
}
}
