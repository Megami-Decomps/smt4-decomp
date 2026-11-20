/* NON_MATCHING: the output pointers are AsdSoundSystem::outputC (retail's g_asdSndSlotSelection word is g_asdSound+0x1000, from which branch 1 derives g_asdSound with `sub r1, r5, #4096`); armcc here keeps g_asdSound in r8 and adds 0x1000 instead of pooling g_asdSound+0x1000, so it saves two more registers. Matching also needs g_asdSound sized over that word in symbols.txt. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSoundSystem g_asdSound;

void basicSoundStopOrFadeOut(s32 handle, s32 unk);

/* Selects slots `first` and `second` of the one-sound kind: each one's running sound is stopped and
 * the slot is reset. An out-of-range index (or -1) selects none. */
void asdSoundSlotCSelect(u32 first, u32 second)
{
    AsdSndSlotC *slot;

    if (first != 0xffffffff && first < 2) {
        slot = &g_asdSound.slotsC[first];
        if (slot->handle != 0) {
            basicSoundStopOrFadeOut(slot->handle, 0);
        }
        slot->unk08 = 0;
        slot->volume = ASD_SND_VOLUME_DEFAULT;
        slot->flag = 0;
        g_asdSound.outputC[0] = slot;
    } else {
        g_asdSound.outputC[0] = NULL;
    }

    if (second != 0xffffffff && second < 2) {
        slot = &g_asdSound.slotsC[second];
        if (slot->handle != 0) {
            basicSoundStopOrFadeOut(slot->handle, 0);
        }
        slot->unk08 = 0;
        slot->volume = ASD_SND_VOLUME_DEFAULT;
        slot->flag = 0;
        g_asdSound.outputC[1] = slot;
        return;
    }
    g_asdSound.outputC[1] = NULL;
}

} /* extern "C" */
