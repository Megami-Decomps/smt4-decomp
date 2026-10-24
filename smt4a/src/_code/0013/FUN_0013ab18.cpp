/* NON_MATCHING: near (206 rows against 205): same state machine, bit masks and calls; retail keeps the 0x100008B/..8C/..8D id constants in r9/sl/fp and lays the not-started (delay/start) block before the started-channel state chain, sharing the `flags |= 2` tail, and holds the channel pointer in r4 where ours uses r5 */
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

extern SoundChannel DAT_0061951c[2];   /* 0x61951c */
extern SoundShared g_resourceSharedFlag;
extern const char DAT_0053621c[8];

s32 FUN_0013ebe8(u32 handle, u32 id, u32 volume, u32 param);
s32 FUN_00140924(u32 handle, u32 fadeTime);
s32 FUN_001414d4(u32 handle, s32 direction, u32 fadeTime);
const char *FUN_001418b8(u32 id);
u32 asdSoundHandleListFind(u32 handle);
s32 jyoucyuGetTableEntry(u32 index);
s32 rt_memcmp(const void *a, const void *b, u32 size);
u32 soundVolumeSettingGet(void);

/* Per-frame update of the two sound channels: starts queued sounds, steps their fade state machine
 * (wait, fade out, fade in, stop) and keeps the shared channel handle in sync. */
void FUN_0013ab18(void)
{
    if (jyoucyuGetTableEntry(1) == 0) {
        for (s32 i = 0; i < 2; i++) {
            SoundChannel *channel = &DAT_0061951c[i];
            SoundChannel *other = 0;
            if (i == 0) {
                other = &DAT_0061951c[1];
            } else if (i == 1) {
                other = &DAT_0061951c[0];
            }

            u32 flags = channel->flags;
            if ((flags & CHANNEL_ACTIVE) != 0) {
                if ((flags & CHANNEL_STARTED) != 0) {
                    u32 playing = asdSoundHandleListFind(channel->handle);
                    flags = channel->flags;
                    if ((flags & CHANNEL_FADE_WAIT) != 0) {
                        if ((playing & 0x20) == 0) {
                            channel->flags = flags & ~CHANNEL_FADE_WAIT;
                        }
                    } else if ((flags & CHANNEL_FADE_OUT) != 0) {
                        if (FUN_00140924(channel->handle, channel->fadeTime) != 0) {
                            flags = channel->flags;
                            channel->flags = flags & ~(CHANNEL_STARTED | CHANNEL_FADE_OUT);
                            channel->soundId = 0;
                            channel->param = 0;
                            channel->fadeTime = 0;
                            channel->delay = 0;
                            if ((flags & CHANNEL_HAS_QUEUE) != 0) {
                                u32 queuedId = channel->queuedId;
                                u32 queuedParam = channel->queuedParam;
                                flags = (flags & ~(CHANNEL_STARTED | CHANNEL_FADE_OUT)) | (CHANNEL_ACTIVE | CHANNEL_FADE_WAIT);
                                channel->flags = flags;
                                channel->queuedId = 0;
                                channel->soundId = queuedId;
                                channel->param = queuedParam;
                                channel->queuedParam = 0;
                                channel->flags = flags & ~CHANNEL_HAS_QUEUE;
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
                        if (FUN_001414d4(channel->handle, 0, channel->fadeTime) != 0) {
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
                        if (FUN_001414d4(channel->handle, 1, channel->param) != 0) {
                            flags = channel->flags & ~CHANNEL_STOP;
                            channel->flags = flags;
                            if ((flags & CHANNEL_AFTER_STOP_IN) != 0) {
                                channel->flags = (flags & ~(CHANNEL_AFTER_STOP_IN | CHANNEL_DELAYED)) | CHANNEL_FADE_IN;
                            } else if ((flags & CHANNEL_DELAYED) != 0) {
                                channel->flags = (flags & ~CHANNEL_DELAYED) | CHANNEL_FADE_OUT;
                            }
                        }
                    }
                } else {
                    s32 waiting = 0;
                    if ((flags & CHANNEL_DELAYED) != 0) {
                        if (channel->delay < 0x10) {
                            channel->delay++;
                            waiting = 1;
                        } else {
                            channel->flags = flags & ~CHANNEL_DELAYED;
                            channel->delay = 0;
                        }
                    }
                    if (!waiting) {
                        u32 volume = g_resourceSharedFlag.flag;
                        const char *name = FUN_001418b8(channel->soundId);
                        u32 id = channel->soundId;
                        if (rt_memcmp(name, DAT_0053621c, 8) == 0 &&
                            id != 0x100008B && id != 0x100008C && id != 0x100008D &&
                            id != 0x1000090 && id != 0x1000091 &&
                            id != 0x1000097 && id != 0x1000098 &&
                            id != 0x1000099 && id != 0x10000A2 &&
                            id != 0x1000093 && id != 0x1000089 &&
                            id != 0x100008A && id != 0x100008E && id != 0x1000095) {
                            volume = soundVolumeSettingGet();
                        }
                        FUN_0013ebe8(channel->handle, channel->soundId, volume, channel->param);
                        channel->flags = channel->flags | CHANNEL_STARTED;
                    }
                }
            } else if ((flags & CHANNEL_HAS_QUEUE) != 0 && (flags & 0x3C) == 0 && (flags & CHANNEL_STARTED) == 0) {
                flags |= CHANNEL_ACTIVE;
                channel->flags = flags;
                if (channel->queuedParam != 0) {
                    flags |= CHANNEL_FADE_WAIT;
                    channel->flags = flags;
                }
                u32 queuedId = channel->queuedId;
                u32 queuedParam = channel->queuedParam;
                channel->queuedId = 0;
                channel->soundId = queuedId;
                channel->param = queuedParam;
                channel->queuedParam = 0;
                channel->flags = flags & ~CHANNEL_HAS_QUEUE;
            }
        }
    }
}

} /* extern "C" */
