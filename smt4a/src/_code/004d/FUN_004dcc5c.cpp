/* NON_MATCHING: retail keeps restoration parameters on the stack; mask loads and argument stores differ. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "battle/btlDebug.h"
extern "C" {
extern BtlActionGlobals g_btlAction;
void FUN_004fdcd8(s32 delay, u32 group, s32 first, s32 last, s32 kind, s32 mode, s32 duration, s32 flags);
void FUN_004fb798(s32 kind, u32 group, s32 mode, BattleRosterRecordA *record, s32 flags, s32 hp, s32 mp, u32 mask, s32 extra, s32 firstDelay, s32 lastDelay, s32 duration, s32 enabled, s32 variant, s32 finish);

void FUN_004dcc5c(BtlMainStateA *const *owner, u32 group)
{
    s32 restored = 0;
    for (s32 i = 0; i < 4; ++i) {
        BtlCombatantEntryA *entry = &(*owner)->entries[i];
        u64 flags = entry->flags;
        if ((flags & g_btlAction.targetableMask) &&
            !(flags & g_btlAction.interaction.excludedMask) && entry->unitIndex >= 0) {
            s32 hp = (entry->maxHp * 50) / 100;
            if (hp == 0)
                hp = -1;
            s32 mp = (entry->maxMp * 50) / 100;
            if (mp == 0)
                mp = -1;
            if (hp > 0 && (entry->statusFlags & 8))
                hp = 1;
            if (mp > 0 && (entry->statusFlags & 8))
                mp = 1;
            s32 delay = restored * 5;
            FUN_004fdcd8(delay, group, entry->unitIndex, entry->unitIndex, 8, 0, 5, 0);
            FUN_004fb798(5, group, 0, &(*owner)->roster[entry->unitIndex], 0, hp, mp, 0xFFFFFFFF, 0, delay, delay, 9, 1, 0, 1);
            ++restored;
        }
    }
    FUN_004fbeac(0, group, 0, 30, 0);
}
}
