/* NON_MATCHING: the fade duration is forwarded to the stop call as retail; only the output-table base lands in r2 where retail loads it into r3 first. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
void basicSoundStopOrFadeOut(s32 handle, s32 fadeFrames);
s32 FUN_001221a0(s32 handle);

/* Output slot `index` (0 or 1), or NULL for any other index. */
static __inline AsdSndSlotC *soundOutputC(u32 index)
{
    if (index == 0 || index == 1) {
        return g_asdSound.outputC[index];
    }
    return NULL;
}

bool FUN_0010c5b0(u32 index, s32 frames)
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
                basicSoundStopOrFadeOut(slot->handle, frames);
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
