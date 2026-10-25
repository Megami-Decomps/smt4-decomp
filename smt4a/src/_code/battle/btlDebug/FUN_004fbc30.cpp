/* NON_MATCHING: native event-mask global and four-word argument ABI are recovered; OR/AND load grouping and the allocated action's constant-value lifetime still differ. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/btlReflect.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
BtlMainStateA *btlGetMainState(void);
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *, s32);
void *FUN_003f0254(BtlMainStateA *, BtlActionRecord *);
void *FUN_003f06b4(BtlMainStateA *, BtlActionRecord *);

s32 FUN_004d7a60(void *, BtlActionRecord *, u32);

u32 FUN_004fbc30(s32 actorId, u32 parameter, BtlActionRecord *command, s32)
{
    struct EventDebugGlobalsView { void *owner; };
    struct EventDebugMasksView {
        u8 unk00[0x10];
        u64 required;
        u64 primary;
        u64 secondary;
    };
    extern EventDebugGlobalsView g_btlEvent;
    extern EventDebugMasksView DAT_00573c08;
    if ((command->status & 1) && (command->status & 0x80)) {
        BtlMainStateA *state = btlGetMainState();
        BtlCombatantEntryA *entry = FUN_003f0e20(state, command->apocalypse.memberId);
        entry->flags |= DAT_00573c08.secondary | DAT_00573c08.primary;
        if (FUN_004d7a60(g_btlEvent.owner, command, 1) == 0 ||
            (FUN_003f06b4(state, command) != NULL && FUN_003f0254(state, command) == NULL) ||
            (DAT_00573c08.required & entry->flags) == 0) {
            ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, static_cast<s16>(actorId), 0, parameter);
            action->kind = 0x2E;
            action->wordValues.unk18 = reinterpret_cast<u32>(entry);
            action->value = 1;
        }
    }
    return 1;
}
}
