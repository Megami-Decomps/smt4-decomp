#include "shard/W6_W6Match1_BgmRequestChannel.h"

extern "C" {
extern BgmChannelSelection DAT_00588fac;
extern BgmRequestChannel DAT_0061951c;
extern BgmRequestChannel DAT_0061953c;
int jyoucyuGetTableEntry(u32 index);

void FUN_003de02c(u32 frames)
{
    if (jyoucyuGetTableEntry(1) != 0) {
        return;
    }
    BgmRequestChannel* channel = NULL;
    if (DAT_00588fac.selected == 0) {
        channel = &DAT_0061951c;
    } else if (DAT_00588fac.selected == 1) {
        channel = &DAT_0061953c;
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
