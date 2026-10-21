/* NON_MATCHING: compiler exchanges r1 and r2 for the slot pointer and boolean accumulator. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

namespace {
struct SoundSelection {
    /* 0x000 */ u8 unk000[0x204];
    /* 0x204 */ AsdSndSlotB *currentSlotB;
};
}

extern "C" {
extern SoundSelection DAT_004e2f68;

/* Whether sound `index` of the selected second-kind slot is playing. */
u32 asdSoundSlotBIsPlaying(u32 index)
{
    u32 playing = 0;
    AsdSndSlotB *slot = DAT_004e2f68.currentSlotB;

    if (index < 8 && slot != NULL && slot->handles[index] != 0) {
        playing = 1;
    }
    return playing;
}

} /* extern "C" */
