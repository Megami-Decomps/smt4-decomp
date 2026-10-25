#include "battle/BattleUnitSlot.h"
#include "shard/W4_W4Match2_BtlUnits.h"

struct BattleScriptContext {
    /* 0x00 */ u8 unk00[0x84];
    /* 0x84 */ s32 slotIndex;
};
typedef char BattleScriptContextSlotOffsetCheck[
    offsetof(BattleScriptContext, slotIndex) == 0x84 ? 1 : -1];

/* A script selects one of four action slots; each slot has its own header. */
struct BattleActionSlot {
    u32 flags;
    BattleActionUnit unit;
};
struct BattleActionState {
    u32 unk00;
    BattleActionSlot *slots;
};
typedef char BattleActionSlotLayoutCheck[
    sizeof(BattleActionSlot) == 0xF1C && offsetof(BattleActionSlot, unit) == 4 ? 1 : -1];
typedef char BattleActionStateSlotOffsetCheck[
    sizeof(BattleActionState) == 8 && offsetof(BattleActionState, slots) == 4 ? 1 : -1];


extern "C" BattleActionState g_btlAction;

// Resolve a script context's selected battle-unit slot.
extern "C" BattleActionUnit *btlUnitGet(BtlState *const *reference)
{
    const BattleScriptContext *context = reinterpret_cast<const BattleScriptContext *>(*reference);
    if (context == NULL)
        return NULL;
    s32 index = context->slotIndex;
    if (index < 0)
        return NULL;
    if (index >= 4)
        return NULL;
    BattleActionSlot &slot = g_btlAction.slots[index];
    return &slot.unit;
}
