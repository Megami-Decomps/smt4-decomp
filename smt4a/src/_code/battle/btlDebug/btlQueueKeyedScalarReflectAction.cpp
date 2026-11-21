/* NON_MATCHING: action queue matches retail; the combined primary|secondary mask OR and required-mask load grouping differ (a single-use mask local drops to 4 lines but is steering, so not written). */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/btlReflect.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlGlobals.h"

extern "C" {
void *FUN_003f0254(BtlMainStateA *, BtlActionRecord *);
void *FUN_003f06b4(BtlMainStateA *, BtlActionRecord *);
s32 FUN_004d7a60(void *, BtlActionRecord *, u32);

/* Queues a reflection action of kind 0x2E on the entry (twin of smt4 btlQueueReflectEntryAction, sibling btlReflectQueueSelectionMarks). */
static __inline void queueEntryAction(s32 actorId, u32 parameter, BtlCombatantEntryA *entry, s32 value)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actorId, 0, parameter);
    action->kind = 0x2E;
    action->wordValues.unk18 = (u32)entry;
    action->value = value;
}

u32 btlQueueKeyedScalarReflectAction(s32 actorId, u32 parameter, BtlActionRecord *command, s32)
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
        BtlCombatantEntryA *entry = btlMainFindEntryByListedId(state, command->apocalypse.memberId);
        entry->flags |= (DAT_00573c08.secondary | DAT_00573c08.primary);
        if (FUN_004d7a60(g_btlEvent.owner, command, 1) == 0 ||
            (FUN_003f06b4(state, command) != NULL && FUN_003f0254(state, command) == NULL) ||
            (DAT_00573c08.required & entry->flags) == 0) {
            queueEntryAction(actorId, parameter, entry, 1);
        }
    }
    return 1;
}
}
