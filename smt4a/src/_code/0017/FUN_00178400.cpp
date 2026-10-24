/* Reads the sound info of the owner's archive reader and, when an extension reader is attached and enabled, merges in
 * its own result for the same two parameters. */
#include "common.h"

extern "C" u32 nw_snd_internal_SoundArchiveFileReader_ReadSoundInfo(void *reader);

/* The extension reader: slot 6 reads its own info. */
class SoundInfoExtension {
public:
    virtual ~SoundInfoExtension();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();
    virtual void vfunc14();
    virtual u32 readInfo(u32 first, u32 second);

    /* 0x04 */ u8 enabled;

    /* Reads the info when the extension is enabled. */
    u32 readIfEnabled(u32 first, u32 second) { return enabled != 0 ? readInfo(first, second) : 0; }
};

struct SoundInfoOwner {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ void *reader;
    /* 0x8 */ SoundInfoExtension *extension;
};

extern "C" u32 FUN_00178400(SoundInfoOwner *owner, u32 first, u32 second)
{
    u32 result = nw_snd_internal_SoundArchiveFileReader_ReadSoundInfo(owner->reader);

    if (owner->extension != NULL) {
        result |= owner->extension->readIfEnabled(first, second);
    }
    return result;
}
