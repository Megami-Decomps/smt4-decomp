/* NON_MATCHING: scheduling only: retail moves the two call arguments into r1/r2 before testing the child active byte; built moves them after. */
#include "common.h"

extern "C" {
u32 nw_snd_internal_SoundArchiveFileReader_ReadSoundGroupInfo(u32 reader);
}

/* A sound group child (vtable slot 9 runs its update). */
class SoundChild {
public:
    virtual void unk00();
    virtual void unk04();
    virtual void unk08();
    virtual void unk0C();
    virtual void unk10();
    virtual void unk14();
    virtual void unk18();
    virtual void unk1C();
    virtual void unk20();
    virtual u32 update(u32 a, u32 b);

    /* 0x00: vtable pointer */
    /* 0x04 */ u8 active;
};

typedef struct SoundGroup {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 reader;
    /* 0x8 */ SoundChild *child;
} SoundGroup;

extern "C" {

/* Reads the group info and ORs in the child's update result while the child is active. */
u32 soundGroupUpdate(SoundGroup *group, u32 a, u32 b)
{
    u32 result = nw_snd_internal_SoundArchiveFileReader_ReadSoundGroupInfo(group->reader);
    SoundChild *child = group->child;

    if (child != NULL) {
        u32 childResult;

        if (child->active == 0) {
            childResult = 0;
        } else {
            childResult = child->update(a, b);
        }
        result |= childResult;
    }
    return result;
}

} /* extern "C" */
