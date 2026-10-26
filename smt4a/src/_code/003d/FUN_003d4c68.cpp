/* NON_MATCHING: channel-base retention and fade-transition register lifetimes differ. */
#include "shard/W6_W6Match1_BgmRequestChannel.h"
#include "kernel/jyoucyuGetTableEntry.h"

extern "C" {
extern BgmRequestChannel DAT_0061951c[2];
extern BgmChannelSelection g_resourceSharedFlag;
void soundChannelRequest(u32, s32, s32);
}

static __inline void bgmResumeChannel(BgmRequestChannel *channel, s32 fadeParam)
{
    if (channel->flags & 2) {
        if (channel->flags & 0x20) {
            channel->flags = (channel->flags & ~0x20) | 0x40;
            channel->play.param = fadeParam;
            g_resourceSharedFlag.selected = channel->play.unk00;
        } else if (!(channel->flags & 0x400)) {
            channel->fadeFrames = 30;
            channel->flags |= 8;
        }
    }
}

static __inline void bgmResumeChannels(s32 fadeParam)
{
    if (jyoucyuGetTableEntry(1) == NULL) {
        bgmResumeChannel(&DAT_0061951c[0], fadeParam);
        bgmResumeChannel(&DAT_0061951c[1], fadeParam);
    }
}

static __inline void bgmRequestTrack(u32 track, s32 channel, s32 fade)
{
    if (jyoucyuGetTableEntry(1) == NULL) {
        soundChannelRequest(track, channel, fade);
    }
}

static __inline bool bgmChannelResumePending(const BgmRequestChannel *channel)
{
    return (channel->flags & 2) && (channel->flags & 0x20);
}

extern "C" {
/* Resume paused BGM channels when possible, otherwise request the desired track. */
void FUN_003d4c68(u32 track)
{
    if (jyoucyuGetTableEntry(1) == NULL) {
        if (jyoucyuGetTableEntry(1) == NULL &&
            (bgmChannelResumePending(&DAT_0061951c[0]) || bgmChannelResumePending(&DAT_0061951c[1]))) {
            bgmResumeChannels(60);
        } else {
            bgmRequestTrack(track, 0, 60);
        }
    }
}
}
