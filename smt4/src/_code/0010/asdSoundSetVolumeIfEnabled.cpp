#include "common.h"
#include "shard/W6_W6Match7_SoundInit.h"

extern "C" {

typedef struct AsdSoundStatus {
    /* 0x00 */ u8 unk00[0x15];
    /* 0x15 */ u8 enabled;
    /* 0x16 */ u8 unk16;
    /* 0x17 */ u8 volume;
} AsdSoundStatus;

extern AsdSoundStatus g_asdSoundStatus; /* 0x4e3154 */

/* Sets the sound volume byte, if sound is enabled. */
void asdSoundSetVolumeIfEnabled(u8 volume)
{
    if (g_asdSoundStatus.enabled != 0) {
        g_asdSoundStatus.volume = volume;
    }
}

} /* extern "C" */
