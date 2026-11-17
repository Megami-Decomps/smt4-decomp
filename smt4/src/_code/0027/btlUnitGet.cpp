#include "battle/BattleUnitSlot.h"
#include "battle/BtlGlobals.h"

struct BattleScriptContext {
    /* 0x00 */ u8 unk00[0x84];
    /* 0x84 */ s32 slotIndex;
};
typedef char BattleScriptContextSlotOffsetCheck[
    offsetof(BattleScriptContext, slotIndex) == 0x84 ? 1 : -1];


// Resolve a script context's selected battle-unit slot.
extern "C" BtlUnit *btlUnitGet(BtlMainState *const *reference)
{
    const BattleScriptContext *context = reinterpret_cast<const BattleScriptContext *>(*reference);
    if (context == NULL)
        return NULL;
    s32 index = context->slotIndex;
    if (index < 0)
        return NULL;
    if (index >= 4)
        return NULL;
    BtlActionSlot &slot = g_btlAction.slots[index];
    return &slot.unit;
}
