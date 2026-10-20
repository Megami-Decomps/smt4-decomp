/* NON_MATCHING: retail moves the two call arguments into r1/r2 before testing the enabled flag (flag in r3); armcc tests it first and sets the arguments after. */
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

/* Reads the set's sequence sound info and combines it with its holder's update result when the holder is enabled. */
u32 FUN_0019472c(SoundSet *set, u32 a, u32 b)
{
    u32 result = nw_snd_internal_SoundArchiveFileReader_ReadSequenceSoundInfo(set->archive);
    SoundHolder *holder = set->holder;

    if (holder != NULL) {
        u32 update;

        if (holder->enabled == 0) {
            update = 0;
        } else {
            update = holder->vtbl->update(holder, a, b);
        }
        result |= update;
    }
    return result;
}

}
