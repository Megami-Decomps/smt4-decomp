#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {

extern AsdSoundSystem g_asdSound;
extern AsdSndStatus g_asdSoundStatus;
extern s32 FUN_00111b94(void *player);
extern void FUN_0010dfb8(void);
extern void FUN_00110a04(void *player);

/* Refreshes archive playback status when the sound archive is available. */
void asdSoundRefreshPlayerState(void)
{
    if (FUN_00111b94(g_asdSound.player) != 0) {
        FUN_0010dfb8();
        FUN_00110a04(g_asdSound.player);
    }
    if (g_asdSoundStatus.unk15 != 0) {
        g_asdSoundStatus.pad16 = 1;
    }
}

} /* extern "C" */