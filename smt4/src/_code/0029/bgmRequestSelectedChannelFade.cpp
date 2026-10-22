#include "shard/W6_W6Match1_BgmRequestChannel.h"

extern "C" {
extern BgmChannelSelection g_titleConfigModeFlag;
extern BgmRequestChannel DAT_004c53c4;
extern BgmRequestChannel DAT_004c53e4;
int jyoucyuGetTableEntry(u32 index);

void bgmRequestSelectedChannelFade(u32 frames)
{
    if (jyoucyuGetTableEntry(1) != 0) {
        return;
    }
    BgmRequestChannel* channel = NULL;
    if (g_titleConfigModeFlag.selected == 0) {
        channel = &DAT_004c53c4;
    } else if (g_titleConfigModeFlag.selected == 1) {
        channel = &DAT_004c53e4;
    }
    u32 flags = channel->flags;
    if ((flags & 2) != 0 && (flags & 0x3c) == 0) {
        if ((flags & 0x40) != 0) {
            flags |= 0x200;
        } else {
            flags |= 0x10;
        }
        channel->fadeFrames = frames;
        channel->flags = flags;
    }
}
}
