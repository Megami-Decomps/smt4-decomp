/* NON_MATCHING: register allocation only: retail keeps the pool address in r3 and the scaled slot address in r2; the build uses r1 for both */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
void FUN_002bda30(s32 handle);
s32 FUN_001221a0(s32 handle);

/* Output slot `index` (0 or 1), or NULL for any other index. */
static __inline AsdSndSlotC *soundOutputC(u32 index)
{
    if (index == 0 || index == 1) {
        return (&g_asdSound.outputC0)[index];
    }
    return NULL;
}

bool FUN_0010c5b0(u32 index)
{
    bool result = false;
    AsdSndSlotC *slot = soundOutputC(index);

    if (slot && (slot->flag & 6)) {
        AsdSndSlotC *current = soundOutputC(index);
        if (!current) {
            return result;
        }
        if (!(current->flag & 0x10)) {
            if (slot->handle) {
                FUN_002bda30(slot->handle);
            }
            slot->flag |= 0x10;
        }
        if (!(slot->handle && FUN_001221a0(slot->handle) > 0)) {
            slot->flag = 1;
            slot->unk08 = 0;
            result = true;
        }
    }
    return result;
}
}
