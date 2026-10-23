/* NON_MATCHING: combatant/action loops use immediate bounds, fewer saved registers and folded flag stores; 105 vs 104 instructions. */
#include "shard/W4_Match6_BtlEntry.h"
#include "shard/W5_W5Match2_CountPairs.h"
#include "battle/btlAction.h"
#include "battle/btlReflect.h"
#include "battle/btlUI.h"

namespace {
struct CompletionState {
    u32 state;
    u8 unk04[8];
    u32 flags;
    u32 next;
};
}
extern "C" {
extern ReflectContext *g_btlActionReflect;
extern BtlMainState *g_btlMain;
extern CountPairTable *DAT_00435d18;
extern BtlUi *g_btlUiBlock;
s32 nodeListCountActiveById(ReflectContext *queue, const CompletionState *id);
s32 recordAreAllCountsNonpositive(const CountPairTable *counts);
u32 stateBlockCall(BtlUi *ui);
s32 FUN_00256940(BtlMainState *main, BtlMainState *battle, s32 mode);

// Wait for reflection, count records and the UI, then publish the completed battle action.
u32 FUN_00240678(CompletionState *completion, BtlMainState *battle)
{
    if (battle->encounterControl.blocked && nodeListCountActiveById(g_btlActionReflect, completion) > 0)
        return 0;
    if (!recordAreAllCountsNonpositive(DAT_00435d18))
        return 0;
    if ((battle->battleFlags & 8) && !stateBlockCall(g_btlUiBlock))
        return 0;
    if (battle->encounter.flags & 0x04000000) {
        for (s32 index = 4; index < 54; ++index) {
            BtlEntry *entry = &battle->entries[index];
            u32 flags = entry->flags;
            if ((flags & BTL_ENTRY_FLAG_ACTIVE) && !(flags & BTL_ENTRY_FLAG_BLOCKED) && (flags & BTL_ENTRY_FLAG_PRESENT))
                entry->flags |= 0x00800000;
        }
        for (s32 index = 4; index < 54; ++index) {
            BtlActionRecord *action = &battle->actions.records[index];
            u32 flags = action->status;
            if ((flags & 1) && !(flags & 0x80) && (flags & 0x400))
                action->status = flags | 0x40000;
        }
    }
    completion->flags |= 4;
    if (FUN_00256940(g_btlMain, battle, 1)) {
        s32 result = -1;
        s16 kind = battle->resolution.kind;
        if (kind == 0)
            result = 1;
        else if (kind == 1)
            result = 2;
        else if (kind == 2)
            result = 3;
        else if (kind == 3)
            result = 4;
        g_btlMain->talk.unitIndex = result;
    }
    completion->state = 0x10;
    completion->next = 1;
    return 0;
}
}
