/* NON_MATCHING: channel-selection branches and sound-state writeback registers differ. */
#include "shard/W6_W6Match1_BgmRequestChannel.h"
#include "kernel/jyoucyuGetTableEntry.h"

extern "C" {
extern BgmChannelSelection g_resourceSharedFlag;
extern BgmRequestChannel DAT_0061951c[2];
}

/* Queue a faded switch when needed; otherwise request the track directly. */
static __inline void bgmChannelRequest(BgmRequestChannel *channel, s32 id, u32 parameter, u32 frames)
{
    u32 flags = channel->flags;
    if ((flags & 0x22) != 0) {
        channel->fadeFrames = frames;
        channel->track.nextId = id;
        channel->track.nextParam = parameter;
        channel->flags = (flags & ~0x30) | 0x508;
    } else {
        channel->play.param = parameter;
        channel->track.currentId = id;
        channel->flags = flags | 0x405;
    }
}

/* Play on the selected channel if the other is busy, or reuse the idle channel. */
extern "C" void bgmPlay(s32 id, u32 parameter, u32 frames)
{
    BgmRequestChannel *selected = NULL;
    BgmRequestChannel *other;
    if (jyoucyuGetTableEntry(1) != 0) {
        return;
    }
    if (g_resourceSharedFlag.selected == 0) {
        selected = &DAT_0061951c[0];
        other = &DAT_0061951c[1];
    } else if (g_resourceSharedFlag.selected == 1) {
        selected = &DAT_0061951c[1];
        other = &DAT_0061951c[0];
    } else {
        other = &DAT_0061951c[1];
    }
    if (other->track.nextId != 0) {
        bgmChannelRequest(selected, id, parameter, frames);
    } else if (other->track.currentId != id) {
        bgmChannelRequest(other, id, parameter, frames);
    }
}
