/* NON_MATCHING: compiler merges signed bounds into an unsigned check and changes return-block/address-add scheduling. */
#include "common.h"

struct BattleScriptContext {
    /* 0x00 */ u8 unk00[0x84];
    /* 0x84 */ s32 slotIndex;
};

struct BattleActionSlot {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unit[0xf18];
};

struct BattleActionState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ BattleActionSlot* slots;
};

extern "C" BattleActionState g_btlAction;

// Resolve a script context's selected battle-unit slot.
extern "C" int btlUnitGet(int* contextHandle)
{
    BattleScriptContext* context = (BattleScriptContext*)*contextHandle;
    if (context != NULL) {
        s32 index = context->slotIndex;
        if (index >= 0 && index < 4)
            return (int)&g_btlAction.slots[index].unit;
    }
    return 0;
}
