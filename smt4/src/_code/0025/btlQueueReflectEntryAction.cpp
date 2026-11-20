#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "battle/btlReflect.h"
#include "common.h"
#include "battle/BtlEntryLookup.h"

// Private views of the battle records used by this function.
struct BattleEvent;

struct ReflectSourceView {
    u8 unk00[0x50]; // 0x00
    u32 flags;     // 0x50
    u8 unk54[0x0E]; // 0x54
    s16 listedId;  // 0x62
};

extern "C" {
s32 FUN_0027e3e8(BattleEvent* event, ReflectSourceView* source, u32 mode);

extern BattleEvent* g_btlEvent;

// Queues a reflection action of kind 0x24 on the entry.
static __inline void queueEntryAction(s32 actionId, u32 argument, BtlEntry* entry, s32 value)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actionId, 0, argument);
    action->kind = 0x24;
    action->wordValues.unk18 = (u32)entry;
    action->value = value;
}

// Mark the listed entry and enqueue a reflection action when the event permits it.
u32 btlQueueReflectEntryAction(s32 actionId, u32 argument, ReflectSourceView* source)
{
    if ((source->flags & 1) != 0 && (source->flags & 0x80) != 0) {
        BtlEntry* entry =
            btlMainFindEntryByListedId(btlGetMainState(), source->listedId);
        entry->flags |= 0x240;

        if (FUN_0027e3e8(g_btlEvent, source, 1) == 0 ||
            (entry->flags & 0x10) == 0) {
            queueEntryAction(actionId, argument, entry, 1);
        }
    }
    return 1;
}
}
