/* NON_MATCHING: armcc preserves additional registers and computes slot pointers differently. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
extern AsdSndSlotC *DAT_004e3178; /* the two slots currently selected for output */
extern AsdSndSlotC *DAT_004e317c;

void FUN_002bda30(s32 handle, s32 unk);

/* Selects slots `first` and `second` of the one-sound kind: each one's running sound is stopped and
 * the slot is reset. An out-of-range index (or -1) selects none. */
void asdSoundSlotCSelect(u32 first, u32 second)
{
    AsdSndSlotC *slot;

    if (first != 0xffffffff && first <= 1) {
        slot = &g_asdSound.slotsC[first];
        if (slot->handle != 0) {
            FUN_002bda30(slot->handle, 0);
        }
        slot->unk08 = 0;
        slot->volume = ASD_SND_VOLUME_DEFAULT;
        slot->flag = 0;
        DAT_004e3178 = slot;
    } else {
        DAT_004e3178 = NULL;
    }

    if (second != 0xffffffff && second < 2) {
        slot = &g_asdSound.slotsC[second];
        if (slot->handle != 0) {
            FUN_002bda30(slot->handle, 0);
        }
        slot->unk08 = 0;
        slot->volume = ASD_SND_VOLUME_DEFAULT;
        slot->flag = 0;
        DAT_004e317c = slot;
        return;
    }
    DAT_004e317c = NULL;
}

} /* extern "C" */
