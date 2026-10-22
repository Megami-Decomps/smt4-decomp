/* NON_MATCHING: script-state stores are not tail-shared; table indexing and saved registers differ. */
#include "battle/btlUnit.h"
#include "battle/btlEvent.h"
#include "battle/btlAction.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

struct ScriptStateOwnerView {
    u8 unk00[0xa4];
    s32 index;
};
struct ScriptUnitStateView {
    u32 unk0000[2];
    u8 unk0008;
    u8 state;
    u8 unk000a[0x124a];
};
typedef char ScriptStateViewsCheck[offsetof(ScriptStateOwnerView, index) == 0xa4 &&
    offsetof(ScriptUnitStateView, state) == 9 && sizeof(ScriptUnitStateView) == 0x1254 &&
    offsetof(BtlActionGlobals, data) == 4 ? 1 : -1];

extern "C" {
extern BtlEvent *g_btlEvent;
extern BtlActionGlobals g_btlAction;
bool isEntryUsable(BtlEvent *event);
void *FUN_004d7a70(BtlEvent *event, s32 kind, s32 selectionIndex, u32 flags);

void FUN_004eb838(ScriptStateOwnerView **owner, BtlUnitA *unit)
{
    if (!isEntryUsable(g_btlEvent)) {
        s32 selection = ((BtlCombatantEntryA *)unit->params)->indexView.selectionIndex;
        if ((s16)unit->data->unk1BE != 11) {
            if (FUN_004d7a70(g_btlEvent, 3, selection, 0) != 0) {
                ((ScriptUnitStateView *)g_btlAction.data)[(*owner)->index].state = 0x1a;
                return;
            }
        } else if (FUN_004d7a70(g_btlEvent, 7, selection, 0) != 0) {
            ((ScriptUnitStateView *)g_btlAction.data)[(*owner)->index].state = 0x1a;
            return;
        }
    }
    if ((s16)unit->data->unk1BE == 13) {
        ((ScriptUnitStateView *)g_btlAction.data)[(*owner)->index].state = 9;
        return;
    }
    ((ScriptUnitStateView *)g_btlAction.data)[(*owner)->index].state = 11;
}
}
