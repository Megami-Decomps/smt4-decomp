/* NON_MATCHING: Retail mov r5, #1 differs from recovered mov r2, #0. */
#include "battle/BtlMainAccess.h"
#include "battle/btlReflect.h"
#include "common.h"

// Private views of the battle records used by this function.
struct BattleMainState;
struct BattleEvent;

struct ListedBattleEntryView {
    u32 flags; // 0x00
};

struct ReflectSourceView {
    u8 unk00[0x50]; // 0x00
    u32 flags;     // 0x50
    u8 unk54[0x0E]; // 0x54
    s16 listedId;  // 0x62
};

extern "C" {
ListedBattleEntryView* btlMainFindEntryByListedId(BattleMainState* state, s32 listedId);
s32 FUN_0027e3e8(BattleEvent* event, ReflectSourceView* source, u32 mode);

extern BattleEvent* g_btlEvent;

// Mark the listed entry and enqueue a reflection action when the event permits it.
u32 FUN_00250680(s32 actionId, u32 argument, ReflectSourceView* source)
{
    if ((source->flags & 1) != 0 && (source->flags & 0x80) != 0) {
        ListedBattleEntryView* entry =
            btlMainFindEntryByListedId(reinterpret_cast<BattleMainState *>(btlGetMainState()), source->listedId);
        entry->flags |= 0x240;

        if (FUN_0027e3e8(g_btlEvent, source, 1) == 0 ||
            (entry->flags & 0x10) == 0) {
            ReflectAction *action =
                btlQueueReflectAction(g_btlActionReflect, (s16)actionId, 0, argument);
            action->kind = 0x24;
            action->wordValues.unk18 = (u32)entry;
            action->value = 1;
        }
    }
    return 1;
}
}
