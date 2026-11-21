/* NON_MATCHING: the event-condition layout and the slot-kind stores (battleSetActionKind's setter) match; retail keeps
 * the kind 0x23 in r8 for both of its stores (here rematerialised, with 967 built from it) and schedules the
 * FUN_0023c154 arguments in another order. */
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/btlAction.h"
#include "battle/ActionKindSelection.h"
#include "battle/ActionStateChannels.h"
#include "battle/BtlGlobals.h"

struct BattleActionOwnerView { BtlMainState *battle; };
struct BattleEventController;
extern "C" {
extern BattleEventController *g_btlEvent;
s32 isEntryUsable(BattleEventController *); // declcheck: local (the shared declaration in code/Code0027.h does not compile here: argument of type "BattleEventController *" is incompatible with parameter of type "int *")
u32 btlEventSelectTrigger(BattleEventController *, u32, s32, u32);
s32 FUN_00338584(BtlMainState *);
BtlEntry *btlFindFirstActiveUnit(BtlMainState *);
void FUN_0023c154(BtlMainState *, s32, s32, s32, ActionKindSelection *);
}

/* Sets the selected action thread's kind (the setter battleSetActionKind and FUN_00229b10 inline). */
static __inline void battleSetSelectedActionThreadKind(s32 index, u8 kind)
{
    ActionKindThread *thread = &reinterpret_cast<ActionKindThread *>(g_btlAction.slots)[index];
    thread->kind = kind;
}

/* Prefer a pending battle event; otherwise queue an emergency action and advance the channel. */
extern "C" void FUN_00229754(BattleActionOwnerView *owner, ActionKindSelection *selection)
{
    BtlMainState *battle = owner->battle;
    if (battle->actionState.mode == 8) {
        battleSetSelectedActionThreadKind(battle->actionState.index, 0x23);
        return;
    }
    if (!(selection->flags & 0x10000) ? ((reinterpret_cast<BtlEntry *>(selection->entry)->flags & 1) &&
                                         !(reinterpret_cast<BtlEntry *>(selection->entry)->flags & 0x40)) :
                                        battle->eventCount > 0) {
        if (!isEntryUsable(g_btlEvent) && btlEventSelectTrigger(g_btlEvent, 4, selection->entry->unitIndex, 0)) {
            battleSetSelectedActionThreadKind(owner->battle->actionState.index, 0x21);
            return;
        }
    }
    if (FUN_00338584(owner->battle)) {
        BtlEntry *active = btlFindFirstActiveUnit(owner->battle);
        FUN_0023c154(owner->battle, 1, owner->battle->actions->participant.combatantIndex,
                     active->selectionIndex, selection);
    }
    battleSetSelectedActionThreadKind(owner->battle->actionState.index, 0x23);
}
