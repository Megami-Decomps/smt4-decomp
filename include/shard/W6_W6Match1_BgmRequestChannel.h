#ifndef SHARD_W6_W6MATCH1_BGM_REQUEST_CHANNEL_H
#define SHARD_W6_W6MATCH1_BGM_REQUEST_CHANNEL_H

#include "common.h"
#include <stddef.h>

/* Which of the two BGM request channels is the current one. */
struct BgmChannelSelection {
    u32 unk00;
    s32 selected;   /* index of the current channel: 0 or 1 */
};

/* BgmRequestChannel.flags bits whose meaning is known. */
enum {
    BGM_CHANNEL_PLAYING = 0x2,
    BGM_CHANNEL_FADE_OUT = 0x8   /* fading out over fadeFrames */
};

struct BgmRequestChannel {
    union {
        u8 unk00[8];
        struct {
            u32 index; // 0x00: this channel's index, which becomes BgmChannelSelection.selected
            u32 param; // 0x04
        } play;
    };
    u32 fadeFrames;
    union {
        u8 unk0c[0x10];
        struct {
            s32 currentId; // 0x0c
            s32 nextId; // 0x10
            u32 unk14;
            u32 nextParam; // 0x18
        } track;
    };
    u32 flags;
};
typedef char BgmRequestChannelLayoutCheck[
    offsetof(BgmRequestChannel, play.param) == 0x04 &&
    offsetof(BgmRequestChannel, track.nextParam) == 0x18 &&
    offsetof(BgmRequestChannel, flags) == 0x1c ? 1 : -1];

extern "C" {
void bgmStop(s32 id, u32 fadeFrames, s32 force);
}

/* bgmHasPendingResume's test: the channel plays and has a pending transition (0x20). */
static __inline bool bgmChannelIsPendingResume(const BgmRequestChannel *channel)
{
    return (channel->flags & BGM_CHANNEL_PLAYING) != 0 && (channel->flags & 0x20) != 0;
}

/* bgmFadeOut's per-channel step: cancels a playing channel's pending transition (0x20: it becomes
 * 0x40 and this channel the current one in `selection`) or starts its normal 30-frame fade-out
 * unless it is flagged 0x400. */
static __inline void bgmFadeChannel(BgmRequestChannel *channel, u32 parameter, BgmChannelSelection *selection)
{
    if (channel->flags & BGM_CHANNEL_PLAYING) {
        if (channel->flags & 0x20) {
            channel->flags = (channel->flags & ~0x20) | 0x40;
            channel->play.param = parameter;
            selection->selected = channel->play.index;
        } else if (!(channel->flags & 0x400)) {
            channel->fadeFrames = 30;
            channel->flags |= BGM_CHANNEL_FADE_OUT;
        }
    }
}

#ifdef __cplusplus
extern "C" {
#endif

u16 rosterGetLeaderId(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void buttonHelpWorkSetPreset(u8 value);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void nodeTreeReleaseItem(u8 *item);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void contentFormatEntryName(u32 context, s32 category, s32 id, char *destination);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

int FUN_0028e9d0(unsigned arg0);

#ifdef __cplusplus
}
#endif

#endif
