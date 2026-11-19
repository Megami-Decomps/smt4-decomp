#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
extern "C" {
extern AsdSoundSystem g_asdSound;
void asdSoundSlotCSelect(u32, u32);

/* Starts one-sound slot `index` at the default volume and selects the active slots for output;
 * returns 0 when the index is out of range or the slot is already playing. */
u32 asdSoundSlotCStart(u32 index)
{
    AsdSoundSystem* sound = &g_asdSound;
    u32 count = 0;
    if (index >= ASD_SND_SLOT_C_COUNT) {
        return 0;
    }
    AsdSndSlotC* slot = &sound->slotsC[index];
    if (slot->active != 0) {
        return 0;
    }
    slot->active = 1;
    slot->volume = ASD_SND_VOLUME_DEFAULT;
    u32 selected[2];
    selected[0] = selected[1] = 0xFFFFFFFF;
    if (sound->slotsC[0].active != 0) {
        selected[count++] = 0;
    }
    if (sound->slotsC[1].active != 0) {
        selected[count] = 1;
    }
    asdSoundSlotCSelect(selected[0], selected[1]);
    return 1;
}
}
