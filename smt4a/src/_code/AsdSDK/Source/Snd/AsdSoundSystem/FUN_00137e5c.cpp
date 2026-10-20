#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern u8 DAT_0063e37c;  /* nw::snd::SoundArchivePlayer */
extern AsdSndStatusApoc g_asdSoundStatus;

s32 FUN_00148f28(u8 *player);
void FUN_00143d00(void);
void FUN_00147c10(u8 *player);

void FUN_00137e5c(void)
{
    if (FUN_00148f28(&DAT_0063e37c) != 0) {
        FUN_00143d00();
        FUN_00147c10(&DAT_0063e37c);
    }
    if (g_asdSoundStatus.ready != 0) {
        g_asdSoundStatus.unk1a = 1;
    }
}

} /* extern "C" */
