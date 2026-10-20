#include "shard/Shard0045.h"

extern "C" {

typedef struct SoundOwner {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 sound;
} SoundOwner;

extern void nw_snd_SoundHandle_DetachSound(u32 sound);

void soundOwnerDetach(SoundOwner *obj)
{
    nw_snd_SoundHandle_DetachSound(obj->sound);
}

} /* extern "C" */
