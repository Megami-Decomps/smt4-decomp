/* NON_MATCHING: channel-base retention and fade-transition register lifetimes differ. */
#include "shard/W6_W6Match1_BgmRequestChannel.h"

extern "C" {
extern BgmRequestChannel DAT_004c53c4[2];
extern BgmChannelSelection g_titleConfigModeFlag;
const void *jyoucyuGetTableEntry(u32);
void soundChannelRequest(u32, s32, s32);
}

static __inline void bgmResumeChannel(BgmRequestChannel *channel)
{
    if (channel->flags & 2) {
        if (channel->flags & 0x20) {
            channel->flags = (channel->flags & ~0x20) | 0x40;
            channel->play.param = 60;
            g_titleConfigModeFlag.selected = channel->play.unk00;
        } else if (!(channel->flags & 0x400)) {
            channel->fadeFrames = 30;
            channel->flags |= 8;
        }
    }
}

extern "C" {
/* Resume paused BGM channels when possible, otherwise request the desired track. */
void FUN_00287328(u32 track)
{
    if (jyoucyuGetTableEntry(1) == NULL) {
        if (jyoucyuGetTableEntry(1) == NULL &&
            (((DAT_004c53c4[0].flags & 2) && (DAT_004c53c4[0].flags & 0x20)) ||
             ((DAT_004c53c4[1].flags & 2) && (DAT_004c53c4[1].flags & 0x20)))) {
            if (jyoucyuGetTableEntry(1) == NULL) {
                bgmResumeChannel(&DAT_004c53c4[0]);
                bgmResumeChannel(&DAT_004c53c4[1]);
            }
        } else {
            if (jyoucyuGetTableEntry(1) == NULL) {
                soundChannelRequest(track, 0, 60);
            }
        }
    }
}
}
