/* NON_MATCHING: the latch is the 64-bit battle mask (branch layout now matches); retail copies the state pointer to ip and reaches the entries through add #8128 where the build uses a register offset, and the script-byte store addresses [slot, #9] differently. */
#include "battle/btlAction.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "shard/W4_Match6_BtlScript.h"
#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/btlReflect.h"
#include "battle/ActionStateChannels.h"
#include "battle/BtlGlobals.h"
namespace {
union PartyPhaseState {
    BtlMainState main;
    BtlMainState script;
    struct {
        /* 0x0000 */ u8 unk0000[0x84];
        /* 0x0084 */ s32 scriptUnit;
    } phase;
};
struct PartyPhaseContext {
    PartyPhaseState* state;
};
struct ScriptActorRecord {
    /* 0x000 */ u8 unk000[9];
    /* 0x009 */ u8 state;
    /* 0x00A */ u8 unk00A[0xF1C - 0xA];
};
}

extern "C" {
extern void* g_btlUiBlock;
s32 nodeListCountActiveById(ReflectContext*, s32);
s32 FUN_003ae838(void*, s32);
s32 btlUiAreEntriesIdle(void*);
s32 btlNodeListAnyReady();
void FUN_00229754(void*, BtlUnit*);

/* Wait for the UI, then latch the all-four group state before advancing the action. */
u32 btlAiWaitUiAndUpdatePartyGroup4Latch(void* work, BtlUnit* action)
{
    PartyPhaseContext* context = static_cast<PartyPhaseContext*>(work);
    if (nodeListCountActiveById(g_btlActionReflect, reinterpret_cast<s32>(action)) > 0) {
        return 0;
    }
    for (s32 i = 0; i < 4; ++i) {
        if (!FUN_003ae838(g_btlUiBlock, i)) {
            return 0;
        }
    }
    if (!btlUiAreEntriesIdle(g_btlUiBlock)) {
        return 0;
    }
    if (!(action->flags & (BTL_UNIT_FLAG_BUSY_A | BTL_UNIT_FLAG_BUSY_B)) &&
        btlNodeListAnyReady()) {
        return 0;
    }

    PartyPhaseState* state = context->state;
    BtlMainState* main = &state->main;
    s32 count = 0;
    for (s32 i = 0; i < 4; ++i) {
        const BtlEntry& entry = main->entries[i];
        if ((entry.flags & BTL_ENTRY_FLAG_ACTIVE) &&
            !(entry.flags & BTL_ENTRY_FLAG_BLOCKED) && (entry.groupMask & 0x10)) {
            ++count;
        }
    }
    if (count != 4) {
        state->script.battleMask &= ~(u64)0x10000000;
    } else if (!(state->script.battleMask & 0x10000000)) {
        state->script.battleMask |= 0x10000000;
        reinterpret_cast<ActionStateChannels *>(g_btlAction.slots)->entries[context->state->main.actionState.index].pending = 0x1F;
        return 1;
    }
    FUN_00229754(context, action);
    return 1;
}
} // extern "C"
