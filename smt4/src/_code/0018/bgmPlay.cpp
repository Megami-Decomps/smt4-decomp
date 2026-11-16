/* NON_MATCHING: parameter registers are allocated differently (retail: id in r7, param in r5, frames in r6) and the channel selection branches are laid out differently. */
#include "shard/W6_W6Match1_BgmRequestChannel.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {

extern BgmChannelSelection g_titleConfigModeFlag;
extern BgmRequestChannel g_bgmRequestChannels[2];

/* Requests track `id` on a channel: queued behind a fade when one is running, else started directly. */
static __inline void bgmChannelRequest(BgmRequestChannel *channel, s32 id, u32 param, u32 frames)
{
    u32 flags = channel->flags;
    if (flags & 0x22) {
        channel->fadeFrames = frames;
        channel->track.nextId = id;
        channel->track.nextParam = param;
        channel->flags = (flags & ~0x30) | 0x508;
    } else {
        channel->play.param = param;
        channel->track.currentId = id;
        channel->flags = flags | 0x405;
    }
}

/* Plays BGM `id`: on the selected channel while the other one is busy, else on the other one unless it already plays `id`. */
void bgmPlay(s32 id, u32 param, u32 frames)
{
    BgmRequestChannel *selected = NULL;
    BgmRequestChannel *other;

    if (jyoucyuGetTableEntry(1) != 0) {
        return;
    }
    if (g_titleConfigModeFlag.selected == 0) {
        selected = &g_bgmRequestChannels[0];
        other = &g_bgmRequestChannels[1];
    } else if (g_titleConfigModeFlag.selected == 1) {
        selected = &g_bgmRequestChannels[1];
        other = &g_bgmRequestChannels[0];
    } else {
        other = &g_bgmRequestChannels[1];
    }
    if (other->track.nextId != 0) {
        bgmChannelRequest(selected, id, param, frames);
    } else if (other->track.currentId != id) {
        bgmChannelRequest(other, id, param, frames);
    }
}

} /* extern "C" */
