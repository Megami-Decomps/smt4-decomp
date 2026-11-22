#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/BattleMessageMasks.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "battle/BtlGlobals.h"

extern "C" {
extern BattleMessageFlagMasks g_btlMessageFlagMasks;
extern u32 g_btlScriptUnit;
u32 scrGetArg(u32 index);
u32 FUN_004bf9a0(u32 status);
u32 btlGetAffinity(s32 source, s32 target, u32 status, s32 mode, s32 flags);
void FUN_004fda78(s32 mode, s32 flags, void *source, BattleRosterRecordA *target,
                  s32 response, s32 extra);
void FUN_004fdb18(s32 mode, void *source, BattleRosterRecordA *target, u32 statuses, s32 flags);
void FUN_004fcffc(s32 mode, void *source, BattleRosterRecordA *target, u32 statuses);
void btlQueueActionMessage(s32 mode, void *source, u32 message, s32 first,
                  s32 second, s32 third, s32 fourth);

u32 btlScriptSetPartyStatus()
{
    u32 status = scrGetArg(0);
    s32 enable = scrGetArg(1);
    s32 checkResponse = scrGetArg(2);
    void *source = btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit));
    BtlMainStateA *state = btlGetMainState();
    u32 mask = 1u << status;
    for (s32 index = 0; index < 4; ++index) {
        BtlCombatantEntryA *entry = &state->entries[index];
        if ((entry->flags & g_btlMessageFlagMasks.required) &&
            !(entry->flags & g_btlMessageFlagMasks.excluded) && entry->ids[0] >= 0) {
            if (!enable) {
                FUN_004fcffc(0, source, &state->roster[entry->ids[0]], mask);
            } else {
                if (checkResponse &&
                    (btlGetAffinity(-1, entry->ids[0], FUN_004bf9a0(status), 2, -1) & 0x10000)) {
                    FUN_004fda78(0, 0, source, &state->roster[entry->ids[0]], 4, 0);
                    btlQueueActionMessage(0, source, 0x100028C, 0, 1, 0, 0);
                    continue;
                }
                FUN_004fdb18(0, source, &state->roster[entry->ids[0]], mask, 1);
                if (status == 4) {
                    btlQueueActionMessage(0, source, 0x1000275, 0, 0, 0, 0);
                } else {
                    btlQueueActionMessage(0, source, 0x100025F, 0, 0, 0, 0);
                }
            }
        }
    }
    return 1;
}
}
