/* NON_MATCHING: retail keeps restoration parameters on the stack; mask loads and argument stores differ. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "battle/btlDebug.h"
#include "battle/BtlGlobals.h"
extern "C" {
void btlQueueMessageTableReflectAction(s32 delay, u32 group, s32 first, s32 last, s32 kind, s32 mode, s32 duration, s32 flags);
void btlRecoverHpMpByPercent(s32 kind, u32 group, s32 mode, BattleRosterRecordA *record, s32 flags, s32 hp, s32 mp, u32 mask, s32 extra, s32 firstDelay, s32 lastDelay, s32 duration, s32 enabled, s32 variant, s32 finish);

void FUN_004dcc5c(BtlMainStateA *const *owner, u32 group)
{
    s32 restored = 0;
    for (s32 i = 0; i < 4; ++i) {
        BtlCombatantEntryA *entry = &(*owner)->entries[i];
        u64 flags = entry->flags;
        if ((flags & g_btlAction.targetableMask) &&
            !(flags & g_btlAction.interaction.excludedMask) && entry->ids[0] >= 0) {
            s32 hp = (entry->data.maxHp * 50) / 100;
            if (hp == 0)
                hp = -1;
            s32 mp = (entry->data.maxMp * 50) / 100;
            if (mp == 0)
                mp = -1;
            if (hp > 0 && (entry->data.statusFlags & 8))
                hp = 1;
            if (mp > 0 && (entry->data.statusFlags & 8))
                mp = 1;
            s32 delay = restored * 5;
            btlQueueMessageTableReflectAction(delay, group, entry->ids[0], entry->ids[0], 8, 0, 5, 0);
            btlRecoverHpMpByPercent(5, group, 0, &(*owner)->roster[entry->ids[0]], 0, hp, mp, 0xFFFFFFFF, 0, delay, delay, 9, 1, 0, 1);
            ++restored;
        }
    }
    FUN_004fbeac(0, group, 0, 30, 0);
}
}
