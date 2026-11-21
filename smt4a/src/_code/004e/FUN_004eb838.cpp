/* NON_MATCHING: g_btlEvent and g_btlAction take each other's registers, the kind-7 call shares the found test instead of keeping its own, and retail hoists the slot loads above the kind-13 test. */
#include "battle/btlUnit.h"
#include "battle/btlEvent.h"
#include "battle/btlAction.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlGlobals.h"


extern "C" {
extern BtlEvent *g_btlEvent;
bool isEntryUsable(BtlEvent *event);
void *FUN_004d7a70(BtlEvent *event, s32 kind, s32 selectionIndex, u32 flags);

static __inline void setScriptState(BtlMainStateA **owner, u8 command)
{
    BtlActionSlotA &slot = g_btlAction.slots[(*owner)->unitRecord.currentSlot];
    slot.unit.command = command;
}

void FUN_004eb838(BtlMainStateA **owner, BtlUnitA *unit)
{
    if (!isEntryUsable(g_btlEvent)) {
        void *target;
        if (unit->data->actionKind == 11)
            target = FUN_004d7a70(g_btlEvent, 7, unit->entry->selectionIndex, 0);
        else
            target = FUN_004d7a70(g_btlEvent, 3, unit->entry->selectionIndex, 0);
        if (target != NULL) {
            setScriptState(owner, 0x1a);
            return;
        }
    }
    if (unit->data->actionKind == 13)
        setScriptState(owner, 9);
    else
        setScriptState(owner, 11);
}
}
