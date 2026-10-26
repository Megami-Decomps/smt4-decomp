/* NON_MATCHING: only the apply-path target calculation uses r1/r0/r5 instead of retail r0/r1/ip (112/112 rows). */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/BattleUnitSlot.h"
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

struct BtlUnit;

// The legacy entry-state header does not expose the action table's earlier slot.

extern "C" {
extern u32 g_btlScriptUnit;
u32 FUN_002463e8(u32 status);
u32 FUN_00246134(s32 entryId, u32 resistance, s32 mode, s32 option);
u32 FUN_00246080(s16 priority, s16 mode, BtlUnit* source,
                 BtlActionRecord* target, s32 kind);
u32 FUN_00246d38(s16 priority, BtlUnit* source, BtlActionRecord* target, u32 mask);
u32 FUN_00246e24(s16 priority, BtlUnit* source, BtlActionRecord* target,
                 u32 mask, s32 updateGroup);
u32 FUN_002505c0(s16 priority, BtlUnit* source, u32 message,
                 s32 value, s32 option, s32 extra, s32 flags);

// Apply or remove the selected status on each active front-line party member.
u32 btlScriptSetPartyStatus()
{
    u32 status = scrGetArg(0);
    s32 apply = scrGetArg(1);
    s32 checkResistance = scrGetArg(2);
    BtlUnit* source = reinterpret_cast<BtlUnit *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)));
    BtlMainState* state = btlGetMainState();
    BtlMainState* table = reinterpret_cast<BtlMainState*>(state);
    u32 mask = 1u << status;

    for (s32 slot = 0; slot < 4; ++slot) {
        BtlEntry* entry = &state->entries[slot];
        if (!(entry->flags & BTL_ENTRY_FLAG_ACTIVE) ||
            (entry->flags & BTL_ENTRY_FLAG_BLOCKED) || entry->members.ids[0] < 0) {
            continue;
        }
        if (apply && checkResistance &&
            (FUN_00246134(entry->members.ids[0], FUN_002463e8(status), 2, -1) &
             0x10000)) {
            FUN_00246080(0, 0, source,
                         &table->actions[entry->members.ids[0]], 4);
            FUN_002505c0(0, source, 0x10001ea, 0, 1, 0, 0);
            continue;
        }
        if (!apply) {
            FUN_00246d38(0, source, &table->actions[entry->members.ids[0]], mask);
        } else {
            FUN_00246e24(0, source, &table->actions[entry->members.ids[0]], mask, 1);
            FUN_002505c0(0, source, 0x10001bd, 0, 0, 0, 0);
        }
    }
    return 1;
}
}
