/* camp/PlayLog/PlayLog.c: the camp's play log screen. */
#ifndef CAMP_PLAYLOG_PLAYLOG_H
#define CAMP_PLAYLOG_PLAYLOG_H

#include "common.h"
#include <stddef.h>
#include "shard/W6_W6Match3_ScrollSelection.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"

/* Work area, Shin Megami Tensei IV (0x488 bytes). */
typedef struct PlayLogWork {
    /* 0x000 */ UiResourceParameters parameters;
    /* 0x020 */ UiSpriteState sprites[5];
    /* 0x2DC */ ScrollSelection list;
    /* 0x340 */ s32 frame;                  /* frames the screen has run */
    /* 0x344 */ s32 state;                  /* 0 opening, 1 list, 2 closing, 3 = closed */
    /* 0x348 */ s16 touchRegions[3];
    /* 0x34E */ u8 unk34E[0xA];
    /* 0x358 */ s16 count;
    /* 0x35A */ u16 unk35A;
    /* 0x35C */ u32 values[50];             /* the value of each PlayLogTable row */
    /* 0x424 */ s16 ids[50];                /* the rows listed, in order */
} PlayLogWork;

typedef char PlayLogWorkOffsetCheck[
    offsetof(PlayLogWork, sprites) == 0x20 && offsetof(PlayLogWork, list) == 0x2DC &&
    offsetof(PlayLogWork, touchRegions) == 0x348 && offsetof(PlayLogWork, count) == 0x358 &&
    offsetof(PlayLogWork, ids) == 0x424 && sizeof(PlayLogWork) == 0x488 ? 1 : -1];

/* One page of Apocalypse's play log (0x130 bytes): the rows it lists. */
typedef struct PlayLogPageA {
    /* 0x00 */ u32 count;
    /* 0x04 */ u32 values[50];              /* the value of each PlayLogTable row */
    /* 0xCC */ s16 ids[50];                 /* the rows listed, in order */
} PlayLogPageA;

/* Work area, Shin Megami Tensei IV: Apocalypse (0x6F4 bytes). */
typedef struct PlayLogWorkA {
    /* 0x000 */ UiResourceParameters parameters;
    /* 0x020 */ UiSpriteState sprites[5];
    /* 0x2DC */ ScrollSelection list;
    /* 0x340 */ s32 frame;                  /* frames the screen has run */
    /* 0x344 */ s32 state;                  /* 0 opening, 1 list, 2 closing, 3 changing page, 4 = closed */
    /* 0x348 */ s16 touchRegions[3];
    /* 0x34E */ u8 unk34E[0xA];
    /* 0x358 */ s16 count;
    /* 0x35A */ u16 unk35A;
    /* 0x35C */ u32 values[50];             /* the shown page's values */
    /* 0x424 */ s16 ids[50];                /* the shown page's rows */
    /* 0x488 */ s8 hasPlayer;               /* a second page exists */
    /* 0x489 */ u8 page;                    /* the page shown */
    /* 0x48A */ u8 unk48A[2];
    /* 0x48C */ PlayLogPageA pages[2];
    /* 0x6EC */ u32 pageStep;               /* step of the page change (state 3) */
    /* 0x6F0 */ u8 pageDirection;           /* 1 = the page change slides the other way */
} PlayLogWorkA;

typedef char PlayLogWorkAOffsetCheck[
    offsetof(PlayLogWorkA, sprites) == 0x20 && offsetof(PlayLogWorkA, list) == 0x2DC &&
    offsetof(PlayLogWorkA, frame) == 0x340 && offsetof(PlayLogWorkA, state) == 0x344 &&
    offsetof(PlayLogWorkA, count) == 0x358 && offsetof(PlayLogWorkA, ids) == 0x424 &&
    offsetof(PlayLogWorkA, pages) == 0x48C && offsetof(PlayLogWorkA, pageStep) == 0x6EC &&
    sizeof(PlayLogPageA) == 0x130 && sizeof(PlayLogWorkA) == 0x6F4 ? 1 : -1];

/* Enters `state` with the page change at its first step. A plain `static` that armcc inlines on its own: the
 * screen's update (five sites) stores each state from a constant materialised at the store, which an `__inline`
 * copy or the two stores written in place hoist into shared registers. The page change ends with it too. */
static void playLogSetState(PlayLogWorkA *work, s32 state)
{
    work->state = state;
    work->pageStep = 0;
}

#ifdef __cplusplus
extern "C" {
#endif
/* One step of Apocalypse's page change (state 3 of the screen's update). */
void playLogChangePage(PlayLogWorkA *work);
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
struct TextureNode *asdTMTexLoadMainHeap(u32 table, u32 index);
#ifdef __cplusplus
}
#endif

extern "C" {
u32 saveBlockGetPlaySeconds(void);
}

#endif
