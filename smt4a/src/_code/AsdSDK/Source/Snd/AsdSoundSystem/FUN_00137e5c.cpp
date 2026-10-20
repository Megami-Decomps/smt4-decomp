#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
/* The sound system block; the nw::snd::SoundArchivePlayer sits at 0x194. */
typedef struct AsdSoundSystemBlock {
    /* 0x000 */ u8 unk000[0x194];
    /* 0x194 */ u8 player[1];
} AsdSoundSystemBlock;

extern AsdSoundSystemBlock g_asdSoundSystem;
extern AsdSndStatusApoc g_asdSoundStatus;

s32 FUN_00148f28(u8 *player);
void FUN_00143d00(void);
void FUN_00147c10(u8 *player);

void FUN_00137e5c(void)
{
    if (FUN_00148f28(g_asdSoundSystem.player) != 0) {
        FUN_00143d00();
        FUN_00147c10(g_asdSoundSystem.player);
    }
    if (g_asdSoundStatus.ready != 0) {
        g_asdSoundStatus.unk1a = 1;
    }
}

} /* extern "C" */
