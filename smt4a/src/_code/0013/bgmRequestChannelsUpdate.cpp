/* NON_MATCHING: 192 lines (146 by shape). The not-started block's place, the id chain and the queued-sound take-over are retail's. Retail holds the channel pointer in r4 and the index in r5 (swapped here), keeps the fade-out branch's `flags | 5` in a register for the take-over where this build reloads it, and cross-jumps the shared-handle toggles into one store pair. */
typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

extern "C" {

#define CHANNEL_ACTIVE      0x001
#define CHANNEL_STARTED     0x002
#define CHANNEL_FADE_WAIT   0x004
#define CHANNEL_FADE_OUT    0x008
#define CHANNEL_FADE_IN     0x010
#define CHANNEL_FADED       0x020
#define CHANNEL_STOP        0x040
#define CHANNEL_HAS_QUEUE   0x100
#define CHANNEL_AFTER_STOP_IN  0x200
#define CHANNEL_NO_SHARE    0x400
#define CHANNEL_DELAYED     0x800

/* One of the two sound channels (stride 0x20; observed fields only). */
struct SoundChannel {
    u32 handle;        /* 0x00 */
    u32 param;         /* 0x04 */
    u32 fadeTime;      /* 0x08 */
    u32 soundId;       /* 0x0C */
    u32 queuedId;      /* 0x10 */
    s32 delay;         /* 0x14 */
    u32 queuedParam;   /* 0x18 */
    u32 flags;         /* 0x1C */
};

struct SoundShared {
    u8 flag;           /* 0x588FAC */
    u8 pad[3];
    u32 current;       /* 0x588FB0: handle of the shared channel */
};

extern SoundChannel g_bgmRequestChannels[2];   /* 0x61951c */
extern SoundShared g_resourceSharedFlag;
extern const char DAT_0053621c[8];

s32 asdSoundRegisteredRestart(u32 handle, u32 id, u32 volume, u32 param);
u32 asdSoundRegisteredStop(s32 handle, s32 fadeTime);
s32 asdSoundRegisteredSetPause(u32 handle, s32 direction, u32 fadeTime);
const char *soundPlayIfArchiveAvailable(u32 id);
u32 asdSoundHandleListFind(u32 handle);
s32 jyoucyuGetTableEntry(u32 index);
s32 rt_memcmp(const void *a, const void *b, u32 size);
u32 soundVolumeSettingGet(void);

/* Makes the channel's queued sound its current one. */
static __inline void channelTakeQueued(SoundChannel *channel)
{
    u32 queuedId = channel->queuedId;
    u32 queuedParam = channel->queuedParam;
    channel->queuedId = 0;
    channel->soundId = queuedId;
    channel->param = queuedParam;
    channel->queuedParam = 0;
    channel->flags &= ~CHANNEL_HAS_QUEUE;
}

/* Per-frame update of the two sound channels: starts queued sounds, steps their fade state machine
 * (wait, fade out, fade in, stop) and keeps the shared channel handle in sync. */
void bgmRequestChannelsUpdate(void)
{
    if (jyoucyuGetTableEntry(1) == 0) {
        for (s32 i = 0; i < 2; i++) {
            SoundChannel *channel = &g_bgmRequestChannels[i];
            SoundChannel *other = 0;
            if (i == 0) {
                other = &g_bgmRequestChannels[1];
            } else if (i == 1) {
                other = &g_bgmRequestChannels[0];
            }

            u32 flags = channel->flags;
            if ((flags & CHANNEL_ACTIVE) != 0) {
                if ((flags & CHANNEL_STARTED) == 0) {
                    s32 waiting = 0;
                    if ((flags & CHANNEL_DELAYED) != 0) {
                        if (channel->delay <= 0xF) {
                            channel->delay++;
                            waiting = 1;
                        } else {
                            channel->flags = flags & ~CHANNEL_DELAYED;
                            channel->delay = 0;
                        }
                    }
                    if (!waiting) {
                        const char *name = soundPlayIfArchiveAvailable(channel->soundId);
                        u32 volume = g_resourceSharedFlag.flag;
                        if (rt_memcmp(name, DAT_0053621c, 8) == 0 &&
                            channel->soundId != 0x100008B && channel->soundId != 0x100008C && channel->soundId != 0x100008D &&
                            channel->soundId != 0x1000090 && channel->soundId != 0x1000091 &&
                            channel->soundId != 0x1000097 && channel->soundId != 0x1000098 &&
                            channel->soundId != 0x1000099 && channel->soundId != 0x10000A2 &&
                            channel->soundId != 0x1000093 && channel->soundId != 0x1000089 &&
                            channel->soundId != 0x100008A && channel->soundId != 0x100008E && channel->soundId != 0x1000095) {
                            volume = soundVolumeSettingGet();
                        }
                        asdSoundRegisteredRestart(channel->handle, channel->soundId, volume, channel->param);
                        channel->flags = channel->flags | CHANNEL_STARTED;
                    }
                } else {
                    u32 playing = asdSoundHandleListFind(channel->handle);
                    flags = channel->flags;
                    if ((flags & CHANNEL_FADE_WAIT) != 0) {
                        if ((playing & 0x20) == 0) {
                            channel->flags = flags & ~CHANNEL_FADE_WAIT;
                        }
                    } else if ((flags & CHANNEL_FADE_OUT) != 0) {
                        if (asdSoundRegisteredStop(channel->handle, channel->fadeTime) != 0) {
                            flags = channel->flags;
                            channel->flags = flags & ~(CHANNEL_STARTED | CHANNEL_FADE_OUT);
                            channel->soundId = 0;
                            channel->param = 0;
                            channel->fadeTime = 0;
                            channel->delay = 0;
                            if ((flags & CHANNEL_HAS_QUEUE) != 0) {
                                channel->flags = (flags & ~(CHANNEL_STARTED | CHANNEL_FADE_OUT)) | (CHANNEL_ACTIVE | CHANNEL_FADE_WAIT);
                                channelTakeQueued(channel);
                            } else {
                                channel->flags = 0;
                                if (channel->handle == g_resourceSharedFlag.current && (other->flags & CHANNEL_NO_SHARE) == 0) {
                                    if (g_resourceSharedFlag.current != 0) {
                                        g_resourceSharedFlag.current = 0;
                                    } else {
                                        g_resourceSharedFlag.current = 1;
                                    }
                                }
                            }
                        }
                    } else if ((flags & CHANNEL_FADE_IN) != 0) {
                        if (asdSoundRegisteredSetPause(channel->handle, 0, channel->fadeTime) != 0) {
                            channel->flags = (channel->flags & ~CHANNEL_FADE_IN) | CHANNEL_FADED;
                            if (channel->handle == g_resourceSharedFlag.current && (other->flags & CHANNEL_NO_SHARE) == 0) {
                                if (g_resourceSharedFlag.current == 0) {
                                    g_resourceSharedFlag.current = 1;
                                } else {
                                    g_resourceSharedFlag.current = 0;
                                }
                            }
                        }
                    } else if ((flags & CHANNEL_STOP) != 0) {
                        if (asdSoundRegisteredSetPause(channel->handle, 1, channel->param) != 0) {
                            flags = channel->flags & ~CHANNEL_STOP;
                            channel->flags = flags;
                            if ((flags & CHANNEL_AFTER_STOP_IN) != 0) {
                                channel->flags = (flags & ~(CHANNEL_AFTER_STOP_IN | CHANNEL_DELAYED)) | CHANNEL_FADE_IN;
                            } else if ((flags & CHANNEL_DELAYED) != 0) {
                                channel->flags = (flags & ~CHANNEL_DELAYED) | CHANNEL_FADE_OUT;
                            }
                        }
                    }
                }
            } else if ((flags & CHANNEL_HAS_QUEUE) != 0 && (flags & 0x3C) == 0 && (flags & CHANNEL_STARTED) == 0) {
                channel->flags = flags | CHANNEL_ACTIVE;
                if (channel->queuedParam != 0) {
                    channel->flags |= CHANNEL_FADE_WAIT;
                }
                channelTakeQueued(channel);
            }
        }
    }
}

} /* extern "C" */
