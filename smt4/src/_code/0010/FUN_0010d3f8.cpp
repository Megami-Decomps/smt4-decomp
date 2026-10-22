/* NON_MATCHING: Sound-base reuse and stack/saved-register allocation differ from retail. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
extern "C" {
extern AsdSoundSystem g_asdSound;
void asdSoundSlotCSelect(u32, u32);

u32 FUN_0010d3f8(u32 index)
{
    if (index >= ASD_SND_SLOT_C_COUNT) {
        return 0;
    }
    AsdSndSlotC* slot = &g_asdSound.slotsC[index];
    // The first reserved byte records whether this slot is active.
    if (slot->pad0e[0] != 0) {
        return 0;
    }
    slot->pad0e[0] = 1;
    slot->volume = ASD_SND_VOLUME_DEFAULT;
    u32 selected[2];
    selected[0] = selected[1] = 0xFFFFFFFF;
    u32 count = 0;
    if (g_asdSound.slotsC[0].pad0e[0] != 0) {
        selected[count++] = 0;
    }
    if (g_asdSound.slotsC[1].pad0e[0] != 0) {
        selected[count] = 1;
    }
    asdSoundSlotCSelect(selected[0], selected[1]);
    return 1;
}
}
