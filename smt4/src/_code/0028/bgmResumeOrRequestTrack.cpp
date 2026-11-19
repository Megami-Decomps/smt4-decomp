/* NON_MATCHING: channel-base retention and fade-transition register lifetimes differ. */
#include "shard/W6_W6Match1_BgmRequestChannel.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {
extern BgmRequestChannel g_bgmRequestChannels[2];
extern BgmChannelSelection g_titleConfigModeFlag;
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
void bgmResumeOrRequestTrack(u32 track)
{
    if (jyoucyuGetTableEntry(1) == NULL) {
        if (jyoucyuGetTableEntry(1) == NULL &&
            (((g_bgmRequestChannels[0].flags & 2) && (g_bgmRequestChannels[0].flags & 0x20)) ||
             ((g_bgmRequestChannels[1].flags & 2) && (g_bgmRequestChannels[1].flags & 0x20)))) {
            if (jyoucyuGetTableEntry(1) == NULL) {
                bgmResumeChannel(&g_bgmRequestChannels[0]);
                bgmResumeChannel(&g_bgmRequestChannels[1]);
            }
        } else {
            if (jyoucyuGetTableEntry(1) == NULL) {
                soundChannelRequest(track, 0, 60);
            }
        }
    }
}
}
