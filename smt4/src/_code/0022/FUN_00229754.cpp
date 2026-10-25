/* NON_MATCHING: channel byte addressing, event-condition block layout and action-call argument scheduling differ. */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/btlAction.h"
#include "battle/ActionKindSelection.h"
#include "battle/ActionStateChannels.h"

struct BattleActionOwnerView { BtlMainState *battle; };
struct BattleEventController;
extern "C" {
extern BtlActionGlobals g_btlAction;
extern BattleEventController *g_btlEvent;
s32 FUN_0027e3b8(BattleEventController *);
u32 btlEventSelectTrigger(BattleEventController *, u32, s32, u32);
s32 FUN_00338584(BtlMainState *);
BtlEntry *btlFindFirstActiveUnit(BtlMainState *);
void FUN_0023c154(BtlMainState *, s32, s32, s32, ActionKindSelection *);
}

static void setPendingAction(BtlMainState *battle, s8 kind)
{
    static_cast<ActionStateChannel *>(g_btlAction.data)[battle->actionState.index].pending = kind;
}

/* Prefer a pending battle event; otherwise queue an emergency action and advance the channel. */
extern "C" void FUN_00229754(BattleActionOwnerView *owner, ActionKindSelection *selection)
{
    BtlMainState *battle = owner->battle;
    if (battle->actionState.mode == 8) {
        setPendingAction(battle, 0x23);
        return;
    }
    if ((selection->flags & 0x10000) ? battle->eventCount > 0 :
        ((reinterpret_cast<BtlEntry *>(selection->entry)->flags & 1) &&
         !(reinterpret_cast<BtlEntry *>(selection->entry)->flags & 0x40))) {
        if (!FUN_0027e3b8(g_btlEvent) && btlEventSelectTrigger(g_btlEvent, 4, selection->entry->unitIndex, 0)) {
            setPendingAction(owner->battle, 0x21);
            return;
        }
    }
    if (FUN_00338584(owner->battle)) {
        BtlEntry *active = btlFindFirstActiveUnit(owner->battle);
        FUN_0023c154(owner->battle, 1, owner->battle->actions->participant.combatantIndex,
                     active->selectionIndex, selection);
    }
    setPendingAction(owner->battle, 0x23);
}
