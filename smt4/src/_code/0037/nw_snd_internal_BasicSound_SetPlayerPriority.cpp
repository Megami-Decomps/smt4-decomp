#include "common.h"

extern "C" {

int nw_snd_SoundPlayer_detail_SortPriorityList(int player, void *sound);

struct BasicSound;
typedef struct BasicSoundVtbl {
    /* 0x00 */ void *unk00[9];
    /* 0x24 */ void (*onPriorityChanged)(struct BasicSound *sound);
} BasicSoundVtbl;

typedef struct BasicSound {
    /* 0x00 */ BasicSoundVtbl *vtbl;
    /* 0x04 */ u8 unk04[0xC];
    /* 0x10 */ int player;
    /* 0x14 */ u8 unk14[0x84];
    /* 0x98 */ u8 playerPriority;
} BasicSound;

void nw_snd_internal_BasicSound_SetPlayerPriority(BasicSound *sound, u8 priority)
{
    sound->playerPriority = priority;
    if (sound->player != 0) {
        nw_snd_SoundPlayer_detail_SortPriorityList(sound->player, sound);
    }
    sound->vtbl->onPriorityChanged(sound);
}

} /* extern "C" */
