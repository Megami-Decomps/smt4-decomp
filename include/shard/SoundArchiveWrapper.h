/* The wrapper object the sound archive query stubs receive: its archive reference sits at +4. */
#ifndef SHARD_SOUNDARCHIVEWRAPPER_H
#define SHARD_SOUNDARCHIVEWRAPPER_H

#include "nw/snd/SoundArchiveQuery.h"

typedef struct SoundArchiveWrapper {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ SoundArchiveRef *ref;
} SoundArchiveWrapper;

/* The optional reader attached to Apocalypse's archive wrapper. Slots 6 and 8 answer sound and player queries. */
class SoundArchiveExtension {
public:
    virtual ~SoundArchiveExtension();
    virtual void operation08();
    virtual void operation0C();
    virtual void operation10();
    virtual void operation14();
    virtual s32 readSoundInfo(u32 soundId, SoundParams *out);
    virtual void operation1C();
    virtual u8 readPlayerInfo(u32 playerId, ArchivePlayerParams *out);

    /* 0x04 */ u8 enabled;

    s32 readSoundInfoIfEnabled(u32 soundId, SoundParams *out)
    {
        return enabled ? readSoundInfo(soundId, out) : 0;
    }

    u8 readPlayerInfoIfEnabled(u32 playerId, ArchivePlayerParams *out)
    {
        return enabled ? readPlayerInfo(playerId, out) : 0;
    }
};

struct SoundArchiveWrapperA : SoundArchiveWrapper {
    /* 0x08 */ SoundArchiveExtension *extension;
};
typedef char SoundArchiveWrapperASizeCheck[sizeof(SoundArchiveWrapperA) == 0xC ? 1 : -1];

extern "C" s32 soundArchiveReadPlayerInfoWithExtension(SoundArchiveWrapperA *archive, u32 playerId, ArchivePlayerParams *out);

#endif
