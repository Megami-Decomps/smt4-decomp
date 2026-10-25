/* NON_MATCHING: the lookup loop is compacted and its fallback is emitted as a tail call instead of a saved result. */
#include "battle/btlEffect.h"

// Apocalypse's slot table starts after a larger resource header than the shared IV view.
struct EffectSlotTableA {
    u8 unk000[0x108];
    BtlEffectSlot entries[4]; // 0x108
};
extern "C" {
void *btlGetMainState();
s32 btlScriptUnitHasFlags();
u32 libc_strlen(const char *text);
s32 libc_strncmp(const char *left, const char *right, u32 length);
s32 FUN_004f59b0(BtlEffectOwnerA *owner);
extern BtlEffectGlobals g_btlEffect;

// Find the first effect slot whose name starts with the active effect prefix.
s32 FUN_004f9d44(BtlEffectOwnerA *owner)
{
    btlGetMainState();
    if (btlScriptUnitHasFlags())
        return -1;
    EffectSlotTableA *table = (EffectSlotTableA *)owner->slots;
    if (table) {
        for (s32 i = 0; i < 4; ++i) {
            BtlEffectSlot *slot = &table->entries[i];
            const char *name = (const char *)slot->unk00;
            if (name && libc_strncmp(name, g_btlEffect.prefix, libc_strlen(g_btlEffect.prefix)) == 0)
                return slot->unk10;
        }
    }
    return FUN_004f59b0(owner);
}
}
