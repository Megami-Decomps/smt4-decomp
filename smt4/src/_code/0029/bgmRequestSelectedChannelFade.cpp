#include "shard/W6_W6Match1_BgmRequestChannel.h"

extern "C" {
extern BgmChannelSelection g_titleConfigModeFlag;
extern BgmRequestChannel g_bgmRequestChannels;  /* channel 0 */
extern BgmRequestChannel g_bgmRequestChannel1;  /* channel 1: its own global (retail loads both addresses) */
int jyoucyuGetTableEntry(u32 index);

/* Fades the current BGM channel out over `frames` frames when it is playing with no fade or
 * transition running (unless the jyoucyu table's entry 1 is set). */
void bgmRequestSelectedChannelFade(u32 frames)
{
    if (jyoucyuGetTableEntry(1) != 0) {
        return;
    }
    BgmRequestChannel *channel = NULL;
    if (g_titleConfigModeFlag.selected == 0) {
        channel = &g_bgmRequestChannels;
    } else if (g_titleConfigModeFlag.selected == 1) {
        channel = &g_bgmRequestChannel1;
    }
    u32 flags = channel->flags;
    /* 0x3c: any fade or transition (bits 2-5) */
    if ((flags & BGM_CHANNEL_PLAYING) != 0 && (flags & 0x3c) == 0) {
        /* 0x40: a cancelled transition, faded with bit 0x200 instead of 0x10 */
        if ((flags & 0x40) != 0) {
            flags |= 0x200;
        } else {
            flags |= 0x10;
        }
        channel->fadeFrames = frames;
        channel->flags = flags;
    }
}

} /* extern "C" */
