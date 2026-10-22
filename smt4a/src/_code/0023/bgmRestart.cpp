#include "common.h"

extern "C" {

typedef struct Track {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 value;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 flags;
} Track;                        /* 0x20 */

typedef struct Global588fac {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 mode;
} Global588fac;
extern Global588fac g_resourceSharedFlag;
extern Track DAT_0061951c;
extern Track DAT_0061953c;

s32 jyoucyuGetTableEntry(u32 index);

/* Restarts the track chosen by `mode` (0 or 1) with `value` when it has bit 1 set in its flags, unless table entry 1 is set. */
void bgmRestart(u32 value)
{
    s32 entry;
    Track *track;

    entry = jyoucyuGetTableEntry(1);
    if (entry == 0) {
        track = NULL;
        if (g_resourceSharedFlag.mode == 0) {
            track = &DAT_0061951c;
        } else if (g_resourceSharedFlag.mode == 1) {
            track = &DAT_0061953c;
        }
        if ((track->flags & 2) != 0) {
            track->unk04 = 0;
            track->unk10 = 0;
            track->value = value;
            track->unk14 = 0;
            track->unk18 = 0;
            track->flags = 0x13;
        }
    }
}

} /* extern "C" */
