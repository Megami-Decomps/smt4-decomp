/* NON_MATCHING: readable rebuild from asm of the two-channel sound request update; armcc here orders the per-channel state tests and the cue exception chain differently, and keeps the partner channel pointer and the title config base in different registers. */
#include "common.h"

#define CHANNEL_ACTIVE 0x1
#define CHANNEL_STARTED 0x2
#define CHANNEL_LOADING 0x4
#define CHANNEL_STOPPING 0x8
#define CHANNEL_FADING_OUT 0x10
#define CHANNEL_FADED_OUT 0x20
#define CHANNEL_RESUMING 0x40
#define CHANNEL_QUEUED 0x100
#define CHANNEL_CROSSFADE 0x200
#define CHANNEL_DELAYED 0x800
#define CHANNEL_KEEP_CURRENT 0x400

/* One sound channel (0x20 bytes). */
struct SoundChannel {
    /* 0x00 */ u32 id;
    /* 0x04 */ u32 position;
    /* 0x08 */ u32 fadeFrames;
    /* 0x0C */ u32 cue;
    /* 0x10 */ u32 queuedCue;
    /* 0x14 */ u32 delay;
    /* 0x18 */ u32 queuedPosition;
    /* 0x1C */ u32 flags;
};

/* The title config byte and the channel currently owning the music. */
struct TitleConfig {
    u8 modeFlag;
    u8 pad[3];
    s32 current;
};

extern "C" {
extern SoundChannel DAT_004c53c4[2];
extern TitleConfig g_titleConfigModeFlag;
extern const char DAT_004076bd[];

s32 jyoucyuGetTableEntry(s32 index);
u32 asdSoundGetOutputSlotFlag(u32 id);
s32 FUN_0010c5b0(u32 id, u32 frames);
s32 asdSoundSetOutputPause(u32 id, s32 direction, u32 frames);
const char *FUN_0010bf44(u32 cue);
s32 rt_memcmp(const void *a, const void *b, u32 count);
u32 soundVolumeSettingGet(void);
void FUN_0010ddcc(u32 id, u32 cue, u32 volume, u32 position);

/* Whether a cue plays at the player's volume setting (the listed cues use the title config). */
static bool cueUsesTitleVolume(u32 cue)
{
    u32 index = cue - 0x1000000;
    return !(cue == 0x100007B || cue == 0x100007C || index == 0x7D || index == 0x81 || index == 0x82 ||
             index == 0x83 || index == 0x8A || index == 0x8B || index == 0x8C || index == 0xA4);
}

/* Flips which channel owns the music when the finished channel was the current one. */
static void releaseCurrent(SoundChannel *channel, SoundChannel *partner)
{
    if (channel->id == (u32)g_titleConfigModeFlag.current && !(partner->flags & CHANNEL_KEEP_CURRENT))
        g_titleConfigModeFlag.current = g_titleConfigModeFlag.current != 0 ? 0 : 1;
}

/* Steps both sound channels: starts queued cues, finishes fades, stops and resumes. */
void FUN_0010633c(void)
{
    if (jyoucyuGetTableEntry(1) != 0)
        return;
    for (s32 i = 0; i < 2; i++) {
        SoundChannel *channel = &DAT_004c53c4[i];
        SoundChannel *partner = &DAT_004c53c4[1 - i];
        u32 flags = channel->flags;
        if (flags & CHANNEL_ACTIVE) {
            if (flags & CHANNEL_STARTED) {
                u32 state = asdSoundGetOutputSlotFlag(channel->id);
                flags = channel->flags;
                if (flags & CHANNEL_LOADING) {
                    if (!(state & 0x20))
                        channel->flags = flags & ~CHANNEL_LOADING;
                } else if (flags & CHANNEL_STOPPING) {
                    if (FUN_0010c5b0(channel->id, channel->fadeFrames) != 0) {
                        flags = channel->flags & ~(CHANNEL_STARTED | CHANNEL_STOPPING);
                        channel->flags = flags;
                        channel->cue = 0;
                        channel->position = 0;
                        channel->fadeFrames = 0;
                        channel->delay = 0;
                        if (flags & CHANNEL_QUEUED) {
                            flags |= CHANNEL_ACTIVE | CHANNEL_LOADING;
                            channel->flags = flags;
                            channel->cue = channel->queuedCue;
                            channel->queuedCue = 0;
                            channel->position = channel->queuedPosition;
                            channel->queuedPosition = 0;
                            channel->flags = flags & ~CHANNEL_QUEUED;
                        } else {
                            channel->flags = 0;
                            releaseCurrent(channel, partner);
                        }
                    }
                } else if (flags & CHANNEL_FADING_OUT) {
                    if (asdSoundSetOutputPause(channel->id, 0, channel->fadeFrames) != 0) {
                        channel->flags = (flags & ~CHANNEL_FADING_OUT) | CHANNEL_FADED_OUT;
                        releaseCurrent(channel, partner);
                    }
                } else if (flags & CHANNEL_RESUMING) {
                    if (asdSoundSetOutputPause(channel->id, 1, channel->position) != 0) {
                        flags &= ~CHANNEL_RESUMING;
                        channel->flags = flags;
                        if (flags & CHANNEL_CROSSFADE)
                            channel->flags = (flags & ~(CHANNEL_CROSSFADE | CHANNEL_DELAYED)) | CHANNEL_FADING_OUT;
                        else if (flags & CHANNEL_DELAYED)
                            channel->flags = (flags & ~CHANNEL_DELAYED) | CHANNEL_STOPPING;
                    }
                }
            } else {
                if (flags & CHANNEL_DELAYED) {
                    if ((s32)channel->delay <= 15) {
                        channel->delay++;
                        continue;
                    }
                    channel->flags = flags & ~CHANNEL_DELAYED;
                    channel->delay = 0;
                }
                const char *name = FUN_0010bf44(channel->cue);
                u32 volume = g_titleConfigModeFlag.modeFlag;
                if (rt_memcmp(name, DAT_004076bd, 8) == 0 && cueUsesTitleVolume(channel->cue))
                    volume = soundVolumeSettingGet();
                FUN_0010ddcc(channel->id, channel->cue, volume, channel->position);
                channel->flags = channel->flags | CHANNEL_STARTED;
            }
        } else if ((flags & CHANNEL_QUEUED) && !(flags & 0x3C) && !(flags & CHANNEL_STARTED)) {
            u32 queuedPosition = channel->queuedPosition;
            flags |= CHANNEL_ACTIVE;
            channel->flags = flags;
            if (queuedPosition != 0) {
                flags |= CHANNEL_LOADING;
                channel->flags = flags;
            }
            u32 queuedCue = channel->queuedCue;
            channel->queuedCue = 0;
            channel->position = queuedPosition;
            channel->cue = queuedCue;
            channel->queuedPosition = 0;
            channel->flags = flags & ~CHANNEL_QUEUED;
        }
    }
}

} /* extern "C" */
