/* NON_MATCHING: retail shares constant-return tails and retains a single base for both BGM channels. */
#include "shard/W6_W6Match1_BgmRequestChannel.h"

static __inline u32 bgmQueryChannelTrackState(const BgmRequestChannel *channel, s32 trackId)
{
    if (channel->flags != 0 && (channel->flags & 1)) {
        if (channel->track.currentId == trackId) {
            if (channel->flags & 0x30) return 3;
            if ((channel->flags & 2) && !(channel->flags & 8)) return 1;
        } else if (channel->track.nextId == trackId) {
            return 3;
        }
    }
    return 0;
}

extern "C" {
extern BgmRequestChannel DAT_0061951c[2];
s32 jyoucyuGetTableEntry(u32 entry);

// Report whether a track is playing or pending on either BGM channel.
u32 bgmGetStateById(s32 trackId)
{
    u32 state = 0;
    if (jyoucyuGetTableEntry(1) == 0) {
        state = bgmQueryChannelTrackState(&DAT_0061951c[0], trackId);
        if (state == 0) {
            state = bgmQueryChannelTrackState(&DAT_0061951c[1], trackId);
        }
    }
    return state;
}
}
