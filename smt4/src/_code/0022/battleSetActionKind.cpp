/* NON_MATCHING: retail pool order is {g_btlAction, 967}, loads index before flags and keeps the source pointer in r1; local-pointer/if-else forms tried. */
#include "common.h"
extern "C" {
struct ActionSource { u8 unk00[0x7C]; u32 flags; u32 unk80; u32 index; };
struct BattleActionEntry { u8 unk00[9]; u8 kind; u8 unk0A[0xF12]; };
struct BattleActionGlobals { u32 unk00; BattleActionEntry *entries; };
extern BattleActionGlobals g_btlAction;
/* Select battle action kind ten or eleven according to the source flag. */
void battleSetActionKind(ActionSource **source)
{
    ActionSource *entry = *source;
    BattleActionEntry *action = &g_btlAction.entries[entry->index];
    if (entry->flags & 1) {
        action->kind = 10;
    } else {
        action->kind = 11;
    }
}
}
