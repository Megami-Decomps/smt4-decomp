/* NON_MATCHING: retail 61 vs built 58 rows; event mask loads and short-circuit action-queue branches differ. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/btlReflect.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
BtlMainStateA *btlGetMainState(void);
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *, s32);
void *FUN_003f0254(BtlMainStateA *, BtlActionRecord *);
void *FUN_003f06b4(BtlMainStateA *, BtlActionRecord *);
ReflectAction *FUN_004102d8(ReflectContext *, s32, u32, u32);
s32 FUN_004d7a60(void *, BtlActionRecord *, u32);

u32 FUN_004fbc30(s16 actorId, u32 parameter, BtlActionRecord *command)
{
    // The debug masks extend beyond the shared event-global prefix.
    struct EventDebugGlobalsView {
        void *owner;
        u8 unk004[0x37C];
        u64 required;
        u64 primary;
        u64 secondary;
    };
    extern EventDebugGlobalsView g_btlEvent;
    if ((command->status & 1) && (command->status & 0x80)) {
        BtlMainStateA *state = btlGetMainState();
        BtlCombatantEntryA *entry = FUN_003f0e20(state, command->apocalypse.memberId);
        entry->flags |= g_btlEvent.primary | g_btlEvent.secondary;
        if (FUN_004d7a60(g_btlEvent.owner, command, 1) == 0 ||
            (FUN_003f06b4(state, command) != NULL && FUN_003f0254(state, command) == NULL) ||
            (entry->flags & g_btlEvent.required) == 0) {
            ReflectAction *action = FUN_004102d8(g_btlActionReflect, actorId, 0, parameter);
            action->kind = 0x2E;
            action->wordValues.unk18 = reinterpret_cast<u32>(entry);
            action->value = 1;
        }
    }
    return 1;
}
}
