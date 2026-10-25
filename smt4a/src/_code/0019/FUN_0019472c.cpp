#include "common.h"

extern "C" {

struct SoundHolder;

typedef struct SoundHolderVtbl {
    /* 0x00 */ void *unk00[15];
    /* 0x3C */ u32 (*update)(struct SoundHolder *holder, u32 a, u32 b);
} SoundHolderVtbl;

typedef struct SoundHolder {
    /* 0x0 */ SoundHolderVtbl *vtbl;
    /* 0x4 */ u8 enabled;
} SoundHolder;

typedef struct SoundSet {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 archive;
    /* 0x8 */ SoundHolder *holder;
} SoundSet;

extern u32 nw_snd_internal_SoundArchiveFileReader_ReadSequenceSoundInfo(u32 archive);

static __inline u32 soundHolderUpdate(SoundHolder *holder, u32 a, u32 b)
{
    if (holder->enabled == 0) {
        return 0;
    }
    return holder->vtbl->update(holder, a, b);
}

/* Reads the set's sequence sound info and combines it with its holder's update result when the holder is enabled. */
u32 FUN_0019472c(SoundSet *set, u32 a, u32 b)
{
    u32 result = nw_snd_internal_SoundArchiveFileReader_ReadSequenceSoundInfo(set->archive);
    SoundHolder *holder = set->holder;

    if (holder != NULL) {
        result |= soundHolderUpdate(holder, a, b);
    }
    return result;
}

}
