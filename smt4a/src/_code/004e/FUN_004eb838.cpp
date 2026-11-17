/* NON_MATCHING: script-state stores are not tail-shared; table indexing and saved registers differ. */
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
    g_btlAction.slots[(*owner)->unitRecord.currentSlot].unit.command = command;
}

void FUN_004eb838(BtlMainStateA **owner, BtlUnitA *unit)
{
    if (!isEntryUsable(g_btlEvent)) {
        s32 selection = unit->entry->indexView.selectionIndex;
        if (unit->data->actionKind != 11) {
            if (FUN_004d7a70(g_btlEvent, 3, selection, 0) != 0) {
                setScriptState(owner, 0x1a);
                return;
            }
        } else if (FUN_004d7a70(g_btlEvent, 7, selection, 0) != 0) {
            setScriptState(owner, 0x1a);
            return;
        }
    }
    if (unit->data->actionKind == 13) {
        setScriptState(owner, 9);
        return;
    }
    setScriptState(owner, 11);
}
}
