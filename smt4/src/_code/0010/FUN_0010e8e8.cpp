/* NON_MATCHING: same instructions; the sound-global base lives in r0 here but r1 in retail (add order of the 0x784 and 0x1184 views). */
#include "AsdSDK/Source/Snd/AsdSoundShutdown.h"

/* The sound manager at 0x784 in the sound system: its output volume (0xA38) and the sub-object at 0x97C. */
struct SoundManagerView {
    /* 0x000 */ u8 unk000[0x97C];
    /* 0x97C */ u8 volumeTarget[0xBC];
    /* 0xA38 */ f32 outputVolume;
};

/* The state block at 0x1184 in the sound system; its 3D flag sits at 0x48. */
struct SoundStateView {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ s8 enabled;
};

extern "C" {

extern AsdSoundSystem g_asdSound;
void FUN_00121020(void *target, f32 volume);

/* Applies the volume to the sound manager when the 3D sound state is enabled. */
void FUN_0010e8e8(f32 volume)
{
    u8 *sound = reinterpret_cast<u8 *>(&g_asdSound);
    SoundStateView *state = reinterpret_cast<SoundStateView *>(sound + 0x1184);
    SoundManagerView *manager = reinterpret_cast<SoundManagerView *>(sound + 0x784);
    if (state->enabled != 0) {
        manager->outputVolume = volume;
        FUN_00121020(manager->volumeTarget, volume);
    }
}

} /* extern "C" */
