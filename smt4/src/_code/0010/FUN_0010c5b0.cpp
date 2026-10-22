/* NON_MATCHING: canonical output selection replaces indexed global access and removes the redundant index check. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
void FUN_002bda30(s32 handle);
s32 FUN_001221a0(s32 handle);

bool FUN_0010c5b0(u32 index)
{
    if (index >= 2) {
        return false;
    }
    AsdSndSlotC *slot = index == 0 ? g_asdSound.outputC0 : g_asdSound.outputC1;
    if (!slot || !(slot->flag & 6)) {
        return false;
    }
    if (!(slot->flag & 0x10)) {
        if (slot->handle) {
            FUN_002bda30(slot->handle);
        }
        slot->flag |= 0x10;
    }
    if (slot->handle && FUN_001221a0(slot->handle) > 0) {
        return false;
    }
    slot->flag = 1;
    slot->unk08 = 0;
    return true;
}
}
