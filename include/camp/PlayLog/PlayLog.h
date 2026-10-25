/* camp/PlayLog/PlayLog.c: the camp's play log screen. */
#ifndef CAMP_PLAYLOG_PLAYLOG_H
#define CAMP_PLAYLOG_PLAYLOG_H

#include "common.h"

/* Work area, Shin Megami Tensei IV. */
typedef struct PlayLogWork {
    /* 0x00 */ u8 unk00[0x358];
    /* 0x358 */ s16 count;
    /* 0x35A */ u16 unk35A;
} PlayLogWork;

/* Work area, Shin Megami Tensei IV: Apocalypse. */
typedef struct PlayLogWorkA {
    /* 0x00 */ u8 unk00[0x344];
    /* 0x344 */ s32 state;                  /* 4 = closed */
    /* 0x348 */ u8 unk348[0x10];
    /* 0x358 */ s16 count;
    /* 0x35A */ u16 unk35A;
} PlayLogWorkA;

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
void *asdTMTexLoadMainHeap(u32 table, u32 index);
#ifdef __cplusplus
}
#endif

extern "C" {
u32 FUN_002907a8(void);
}

#endif
