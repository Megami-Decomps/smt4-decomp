/* NON_MATCHING: written as the Apocalypse twin (IDENTICAL); only the apply call's action address differs: retail
 * loads the actions base into r1 and builds the address before the stacked-argument ldm, the build uses r2 after it. */
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/BattleUnitSlot.h"
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

struct BtlUnit;

extern "C" {
extern u32 g_btlScriptUnit;
u32 FUN_002463e8(u32 status);
u32 btlSkillHitFlags(s32 entryId, u32 resistance, s32 mode, s32 option);
u32 FUN_00246080(s16 priority, s16 mode, BtlUnit* source,
                 BtlActionRecord* target, s32 kind);
u32 FUN_00246d38(s16 priority, BtlUnit* source, BtlActionRecord* target, u32 mask);
u32 FUN_00246e24(s16 priority, BtlUnit* source, BtlActionRecord* target,
                 u32 mask, s32 updateGroup);
u32 btlQueueKeyedScalarReflectAction(s16 priority, BtlUnit* source, u32 message,
                 s32 value, s32 option, s32 extra, s32 flags);

// Apply or remove the selected status on each active front-line party member.
u32 btlScriptSetPartyStatus()
{
    u32 status = scrGetArg(0);
    s32 apply = scrGetArg(1);
    s32 checkResistance = scrGetArg(2);
    BtlUnit* source = reinterpret_cast<BtlUnit *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)));
    BtlMainState* state = btlGetMainState();
    for (s32 slot = 0; slot < 4; ++slot) {
        BtlEntry* entry = &state->entries[slot];
        if ((entry->flags & BTL_ENTRY_FLAG_ACTIVE) &&
            !(entry->flags & BTL_ENTRY_FLAG_BLOCKED) && entry->ids[0] >= 0) {
            if (!apply) {
                FUN_00246d38(0, source, &state->actions[entry->ids[0]], 1u << status);
            } else {
                if (checkResistance &&
                    (btlSkillHitFlags(entry->ids[0], FUN_002463e8(status), 2, -1) & 0x10000)) {
                    FUN_00246080(0, 0, source, &state->actions[entry->ids[0]], 4);
                    btlQueueKeyedScalarReflectAction(0, source, 0x10001ea, 0, 1, 0, 0);
                    continue;
                }
                FUN_00246e24(0, source, &state->actions[entry->ids[0]], 1u << status, 1);
                btlQueueKeyedScalarReflectAction(0, source, 0x10001bd, 0, 0, 0, 0);
            }
        }
    }
    return 1;
}
}
