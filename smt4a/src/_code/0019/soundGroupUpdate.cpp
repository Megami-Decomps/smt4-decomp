#include "common.h"

/* An object with a vtable; only slot 9 (offset 0x24) is called here. */
class SoundObject {
public:
    virtual void slot00();
    virtual void slot01();
    virtual void slot02();
    virtual void slot03();
    virtual void slot04();
    virtual void slot05();
    virtual void slot06();
    virtual void slot07();
    virtual void slot08();
    virtual u32 update(u32 arg0, u32 arg1);

    u8 enabled;
};

static __inline u32 soundObjectUpdate(SoundObject *object, u32 arg0, u32 arg1)
{
    return object->enabled != 0 ? object->update(arg0, arg1) : 0;
}

extern "C" {

typedef struct SoundInfoOwner {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 reader;
    /* 0x08 */ SoundObject *object;
} SoundInfoOwner;

extern u32 nw_snd_internal_SoundArchiveFileReader_ReadSoundGroupInfo(u32 reader);

/* Reads the wave sound info, merging in the result of the owner's object update when it is enabled. */
u32 soundGroupUpdate(SoundInfoOwner *owner, u32 arg0, u32 arg1)
{
    u32 result = nw_snd_internal_SoundArchiveFileReader_ReadSoundGroupInfo(owner->reader);
    SoundObject *object = owner->object;

    if (object != NULL) {
        result |= soundObjectUpdate(object, arg0, arg1);
    }
    return result;
}

} /* extern "C" */
