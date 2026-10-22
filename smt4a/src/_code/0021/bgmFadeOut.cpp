#include "shard/W6_W6Match1_BgmRequestChannel.h"

extern "C" {
extern BgmChannelSelection g_resourceSharedFlag;
extern BgmRequestChannel DAT_0061951c;
extern BgmRequestChannel DAT_0061953c;
int jyoucyuGetTableEntry(u32 index);
}

/* Cancel a pending transition or start the channel's normal fade-out. */
static __inline void bgmFadeChannel(BgmRequestChannel *channel, u32 parameter)
{
    if (channel->flags & 2) {
        if (channel->flags & 0x20) {
            channel->flags = (channel->flags & ~0x20) | 0x40;
            channel->play.param = parameter;
            g_resourceSharedFlag.selected = channel->play.unk00;
        } else if (!(channel->flags & 0x400)) {
            channel->fadeFrames = 30;
            channel->flags |= 8;
        }
    }
}

/* Request a fade-out on both active BGM channels. */
extern "C" void bgmFadeOut(u32 parameter)
{
    if (jyoucyuGetTableEntry(1) == 0) {
        bgmFadeChannel(&DAT_0061951c, parameter);
        bgmFadeChannel(&DAT_0061953c, parameter);
    }
}
