/* NON_MATCHING: retail derives g_asdSound from DAT_004e2f68 (`sub r1, r5, #4096`) and loads one fewer literal, i.e. g_asdSound (0x1000 bytes) and DAT_004e2f68 were defined in the same file; only the base-register/literal handling differs. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
/* The tail of the sound system block (0x1000 on): the two slots currently selected for output. */
struct SoundOutputTail {
    u8 unk000[0x210];
    AsdSndSlotC *outputC0;
    AsdSndSlotC *outputC1;
};
extern SoundOutputTail DAT_004e2f68;

void FUN_002bda30(s32 handle, s32 unk);

/* Selects slots `first` and `second` of the one-sound kind: each one's running sound is stopped and
 * the slot is reset. An out-of-range index (or -1) selects none. */
void asdSoundSlotCSelect(u32 first, u32 second)
{
    AsdSndSlotC *slot;

    if (first != 0xffffffff && first < 2) {
        slot = &g_asdSound.slotsC[first];
        if (slot->handle != 0) {
            FUN_002bda30(slot->handle, 0);
        }
        slot->unk08 = 0;
        slot->volume = ASD_SND_VOLUME_DEFAULT;
        slot->flag = 0;
        DAT_004e2f68.outputC0 = slot;
    } else {
        DAT_004e2f68.outputC0 = NULL;
    }

    if (second != 0xffffffff && second < 2) {
        slot = &g_asdSound.slotsC[second];
        if (slot->handle != 0) {
            FUN_002bda30(slot->handle, 0);
        }
        slot->unk08 = 0;
        slot->volume = ASD_SND_VOLUME_DEFAULT;
        slot->flag = 0;
        DAT_004e2f68.outputC1 = slot;
        return;
    }
    DAT_004e2f68.outputC1 = NULL;
}

} /* extern "C" */
