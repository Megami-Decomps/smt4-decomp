#include "battle/btlEffect.h"

extern "C" {

s32 FUN_0019a37c(BtlEffectSlot *slot, u32 a, u32 b);
u32 wstrlen(u32 value);

extern BtlEffectGlobals g_btlEffect;

/* The id of the first slot FUN_0019a37c accepts, or -1. */
u32 btlEffectFindSlotId(BtlEffectOwnerA *owner)
{
    BtlEffectSlot *slot;
    u32 value;
    s32 offset;
    s32 i;

    if (owner->slots != NULL) {
        for (i = 0; i < BTL_EFFECT_SLOTS; i++) {
            offset = i * BTL_EFFECT_SLOT_SIZE + BTL_EFFECT_SLOT_TABLE;
            slot = (BtlEffectSlot *)(owner->slots + offset);
            if (slot != NULL) {
                value = wstrlen(g_btlEffect.unk0C);
                if (FUN_0019a37c(slot, g_btlEffect.unk0C, value) == 0) {
                    return slot->id;
                }
            }
        }
    }
    return 0xFFFFFFFF;
}

} /* extern "C" */
