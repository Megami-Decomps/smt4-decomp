#include "common.h"

extern "C" {

struct Inner0014204c;

typedef struct Wrapper0014204c {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ Inner0014204c *inner;
} Wrapper0014204c;

u8 nw_snd_SoundArchive_detail_ReadSoundArchivePlayerInfo(Inner0014204c *inner, u32 *out);

/* Passes the wrapper's inner on to nw_snd_SoundArchive_detail_ReadSoundArchivePlayerInfo, the function that follows it. */
u8 nw_snd_SoundArchive_ReadSoundArchivePlayerInfo(Wrapper0014204c *wrapper, u32 *out)
{
    return nw_snd_SoundArchive_detail_ReadSoundArchivePlayerInfo(wrapper->inner, out);
}

} /* extern "C" */
