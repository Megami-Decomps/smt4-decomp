/* NON_MATCHING: status-index predicate register, clear/apply block layout and merged message call differ. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/BattleMessageMasks.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {
extern BattleMessageFlagMasks g_btlMessageFlagMasks;
extern u32 g_btlScriptUnit;
u32 scrGetArg(u32 index);
void *btlUnitGet(u32 id);
u32 FUN_004bf9a0(u32 status);
u32 FUN_004c8340(s32 source, s32 target, u32 status, s32 mode, s32 flags);
void FUN_004fda78(s32 mode, s32 flags, void *source, BattleRosterRecordA *target,
                  s32 response, s32 extra);
void FUN_004fdb18(s32 mode, void *source, BattleRosterRecordA *target, u32 statuses, s32 flags);
void FUN_004fcffc(s32 mode, void *source, BattleRosterRecordA *target, u32 statuses);
void FUN_004fb43c(s32 mode, void *source, u32 message, s32 first,
                  s32 second, s32 third, s32 fourth);

u32 FUN_0039e338()
{
    u32 status = scrGetArg(0);
    s32 enable = scrGetArg(1);
    s32 checkResponse = scrGetArg(2);
    void *source = btlUnitGet(g_btlScriptUnit);
    BtlMainStateA *state = btlGetMainState();
    u32 mask = 1u << status;
    for (s32 index = 0; index < 4; ++index) {
        BtlCombatantEntryA *entry = &state->entries[index];
        if ((entry->flags & g_btlMessageFlagMasks.required) &&
            !(entry->flags & g_btlMessageFlagMasks.excluded) && entry->unitIndex >= 0) {
            if (enable) {
                if (checkResponse &&
                    (FUN_004c8340(-1, entry->unitIndex, FUN_004bf9a0(status), 2, -1) & 0x10000)) {
                    FUN_004fda78(0, 0, source, &state->roster[entry->unitIndex], 4, 0);
                    FUN_004fb43c(0, source, 0x100028C, 0, 1, 0, 0);
                    continue;
                }
                FUN_004fdb18(0, source, &state->roster[entry->unitIndex], mask, 1);
                FUN_004fb43c(0, source, status == 4 ? 0x1000275 : 0x100025F, 0, 0, 0, 0);
            } else {
                FUN_004fcffc(0, source, &state->roster[entry->unitIndex], mask);
            }
        }
    }
    return 1;
}
}
