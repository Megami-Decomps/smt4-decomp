/* The wrapper object the sound archive query stubs receive: its archive reference sits at +4. */
#ifndef SHARD_SOUNDARCHIVEWRAPPER_H
#define SHARD_SOUNDARCHIVEWRAPPER_H

#include "nw/snd/SoundArchiveQuery.h"

typedef struct SoundArchiveWrapper {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ SoundArchiveRef *ref;
} SoundArchiveWrapper;

/* The optional reader attached to Apocalypse's archive wrapper. From slot 6 (0x18) its virtual functions answer
 * the same queries as the archive's file reader (sound, bank, player, sound group, wave archive, sequence sound
 * and wave sound info); the reads at 0x28, 0x38, 0x40 and 0x44 are not identified yet. Each query of the
 * wrapper asks the file reader and, when the extension is attached and enabled, ORs in the extension's answer. */
class SoundArchiveExtension {
public:
    virtual ~SoundArchiveExtension();
    virtual void operation08();
    virtual void operation0C();
    virtual void operation10();
    virtual void operation14();
    virtual s32 readSoundInfo(u32 soundId, SoundParams *out);
    virtual u32 readBankInfo(u32 id, void *out);
    virtual u8 readPlayerInfo(u32 playerId, ArchivePlayerParams *out);
    virtual u32 readSoundGroupInfo(u32 id, void *out);
    virtual u32 readInfo28(u32 id, void *out);
    virtual u32 readWaveArchiveInfo(u32 id, void *out);
    virtual void operation30();
    virtual void operation34();
    virtual u32 readInfo38(u32 id, void *out);
    virtual u32 readSequenceSoundInfo(u32 id, void *out);
    virtual u32 readInfo40(u32 id, void *out);
    virtual u32 readInfo44(u32 id, void *out);
    virtual u32 readWaveSoundInfo(u32 id, void *out);

    /* 0x04 */ u8 enabled;

    s32 readSoundInfoIfEnabled(u32 soundId, SoundParams *out)
    {
        return enabled ? readSoundInfo(soundId, out) : 0;
    }

    u32 readBankInfoIfEnabled(u32 id, void *out) { return enabled ? readBankInfo(id, out) : 0; }

    u8 readPlayerInfoIfEnabled(u32 playerId, ArchivePlayerParams *out)
    {
        return enabled ? readPlayerInfo(playerId, out) : 0;
    }

    u32 readSoundGroupInfoIfEnabled(u32 id, void *out) { return enabled ? readSoundGroupInfo(id, out) : 0; }
    u32 readInfo28IfEnabled(u32 id, void *out) { return enabled ? readInfo28(id, out) : 0; }
    u32 readWaveArchiveInfoIfEnabled(u32 id, void *out) { return enabled ? readWaveArchiveInfo(id, out) : 0; }
    u32 readInfo38IfEnabled(u32 id, void *out) { return enabled ? readInfo38(id, out) : 0; }

    u32 readSequenceSoundInfoIfEnabled(u32 id, void *out)
    {
        return enabled ? readSequenceSoundInfo(id, out) : 0;
    }

    u32 readInfo40IfEnabled(u32 id, void *out) { return enabled ? readInfo40(id, out) : 0; }
    u32 readInfo44IfEnabled(u32 id, void *out) { return enabled ? readInfo44(id, out) : 0; }
    u32 readWaveSoundInfoIfEnabled(u32 id, void *out) { return enabled ? readWaveSoundInfo(id, out) : 0; }
};

struct SoundArchiveWrapperA : SoundArchiveWrapper {
    /* 0x08 */ SoundArchiveExtension *extension;
};
typedef char SoundArchiveWrapperASizeCheck[sizeof(SoundArchiveWrapperA) == 0xC ? 1 : -1];

extern "C" s32 soundArchiveReadPlayerInfoWithExtension(SoundArchiveWrapperA *archive, u32 playerId, ArchivePlayerParams *out);

#endif
