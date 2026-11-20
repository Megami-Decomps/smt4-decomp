#include "shard/W6_W6Match1_BgmRequestChannel.h"

extern "C" {
extern BgmChannelSelection g_resourceSharedFlag;
extern BgmRequestChannel g_bgmRequestChannels;  /* channel 0 */
extern BgmRequestChannel g_bgmRequestChannel1;  /* channel 1: its own global (retail loads both addresses) */
int jyoucyuGetTableEntry(u32 index);
}

/* Cancels a playing channel's pending transition (0x20, it becomes 0x40 and this channel the
 * current one) or starts its normal 30-frame fade-out unless it is flagged 0x400. */
static __inline void bgmFadeChannel(BgmRequestChannel *channel, u32 parameter)
{
    if (channel->flags & BGM_CHANNEL_PLAYING) {
        if (channel->flags & 0x20) {
            channel->flags = (channel->flags & ~0x20) | 0x40;
            channel->play.param = parameter;
            g_resourceSharedFlag.selected = channel->play.index;
        } else if (!(channel->flags & 0x400)) {
            channel->fadeFrames = 30;
            channel->flags |= BGM_CHANNEL_FADE_OUT;
        }
    }
}

/* Requests a fade-out on both BGM channels (unless the jyoucyu table's entry 1 is set). */
extern "C" void bgmFadeOut(u32 parameter)
{
    if (jyoucyuGetTableEntry(1) == 0) {
        bgmFadeChannel(&g_bgmRequestChannels, parameter);
        bgmFadeChannel(&g_bgmRequestChannel1, parameter);
    }
}
