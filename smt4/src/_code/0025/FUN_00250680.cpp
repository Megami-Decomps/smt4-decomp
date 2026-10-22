/* NON_MATCHING: Retail mov r5, #1 differs from recovered mov r2, #0. */
#include "common.h"

// Private views of the battle records used by this function.
struct BattleMainState;
struct BattleEvent;
struct ActionReflectState;

struct ListedBattleEntryView {
    u32 flags; // 0x00
};

struct ReflectSourceView {
    u8 unk00[0x50]; // 0x00
    u32 flags;     // 0x50
    u8 unk54[0x0E]; // 0x54
    s16 listedId;  // 0x62
};

struct ReflectActionView {
    u8 unk00[4];                  // 0x00
    u8 unk04;                     // 0x04
    u8 unk05[0x13];               // 0x05
    ListedBattleEntryView* entry; // 0x18
    u8 unk1C[0x0C];               // 0x1C
    u32 unk28;                    // 0x28
};

extern "C" {
BattleMainState* btlGetMainState(void);
ListedBattleEntryView* btlMainFindEntryByListedId(BattleMainState* state, s32 listedId);
s32 FUN_0027e3e8(BattleEvent* event, ReflectSourceView* source, u32 mode);
ReflectActionView* btlQueueReflectAction(ActionReflectState* state, s32 actionId, s32 mode, u32 argument);

extern BattleEvent* g_btlEvent;
extern ActionReflectState* g_btlActionReflect;

// Mark the listed entry and enqueue a reflection action when the event permits it.
u32 FUN_00250680(s32 actionId, u32 argument, ReflectSourceView* source)
{
    if ((source->flags & 1) != 0 && (source->flags & 0x80) != 0) {
        ListedBattleEntryView* entry =
            btlMainFindEntryByListedId(btlGetMainState(), source->listedId);
        entry->flags |= 0x240;

        if (FUN_0027e3e8(g_btlEvent, source, 1) == 0 ||
            (entry->flags & 0x10) == 0) {
            ReflectActionView* action =
                btlQueueReflectAction(g_btlActionReflect, (s16)actionId, 0, argument);
            action->unk04 = 0x24;
            action->entry = entry;
            action->unk28 = 1;
        }
    }
    return 1;
}
}
