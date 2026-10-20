#include "battle/btlEffect.h"

extern "C" {

s32 FUN_002b4414(BtlEffectSlot *slot, u32 a, u32 b);
u32 FUN_002c30c4(u32 value);

extern BtlEffectGlobals g_btlEffect;

/* The id of the first slot FUN_002b4414 accepts, or -1. */
u32 btlEffectFindSlotId(BtlEffectOwner *owner)
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
                value = FUN_002c30c4(g_btlEffect.unk0C);
                if (FUN_002b4414(slot, g_btlEffect.unk0C, value) == 0) {
                    return slot->id;
                }
            }
        }
    }
    return 0xFFFFFFFF;
}

} /* extern "C" */
