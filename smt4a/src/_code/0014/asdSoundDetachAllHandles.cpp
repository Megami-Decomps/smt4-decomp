#include "common.h"

extern "C" {

struct SoundHandleTable {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ void *handles[16];
};
struct SoundGlobals {
    /* 0x000 */ u8 unk000[0x318];
    /* 0x318 */ SoundHandleTable *table;
};
extern SoundGlobals g_asdSoundHandleState;
void nw_snd_internal_BasicSound_Stop(void *sound, s32 fadeFrames); // declcheck: local (the shared declaration does not compile here or changes this unit)
void nw_snd_SoundHandle_DetachSound(void **handle);
void asdSoundDetachAllHandles(void)
{
    SoundHandleTable *table = g_asdSoundHandleState.table;
    if (table != NULL) {
        for (u8 index = 0; index < 16; ++index) {
            if (table->handles[index] != NULL) {
                nw_snd_internal_BasicSound_Stop(table->handles[index], 0);
                nw_snd_SoundHandle_DetachSound(&table->handles[index]);
            }
        }
    }
}

} /* extern "C" */
