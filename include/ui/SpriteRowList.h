/* A row of up to ten animated icons (IV): each row is drawn from one sprite of each group, rows can be
   added, removed and marked, and the whole list is opened and closed with staggered animations. */
#ifndef UI_SPRITEROWLIST_H
#define UI_SPRITEROWLIST_H
#include "ui/UiSpriteState.h"
#include <stddef.h>

enum {
    SPRITE_ROW_MAX = 10,        /* rows, and sprites in each group */
    SPRITE_ROW_SPRITES = 61
};

/* The first sprite of each group in SpriteRowList::sprites. */
enum {
    SPRITE_ROW_BASE = 0,
    SPRITE_ROW_COVER = 10,
    SPRITE_ROW_MARK = 20,
    SPRITE_ROW_GLOW = 30,
    SPRITE_ROW_FLASH = 40,      /* played by a row's flash timer */
    SPRITE_ROW_LEAVING = 50,    /* stands in for a mark that is being removed */
    SPRITE_ROW_BANNER = 60      /* the single sprite states 5 and 6 play */
};

/* SpriteRowList::state */
enum {
    SPRITE_ROW_STATE_IDLE = 0,
    SPRITE_ROW_STATE_SHOWN = 1,
    SPRITE_ROW_STATE_OPENING = 2,
    SPRITE_ROW_STATE_CHANGING = 3,  /* applying rowCountChange and selectedChange */
    SPRITE_ROW_STATE_CLOSING = 4,
    SPRITE_ROW_STATE_BANNER_IN = 5,
    SPRITE_ROW_STATE_BANNER_OUT = 6
};

struct SpriteRowList {
    /* 0x0000 */ u8 unk0000[0x20];
    /* 0x0020 */ UiSpriteState sprites[SPRITE_ROW_SPRITES];
    /* 0x217C */ s32 frame;                 /* frames since the state began */
    /* 0x2180 */ u32 state;
    /* 0x2184 */ u32 alternate;             /* the second image set, turning the other way */
    /* 0x2188 */ f32 angle;                 /* the marked rows' pulse, wrapped at 6.28 */
    /* 0x218C */ s16 rowCount;
    /* 0x218E */ s16 selectedRow;           /* how many of the last rows are marked */
    /* 0x2190 */ s16 rowCountChange;        /* rows to add (negative: to remove) in state 3 */
    /* 0x2192 */ s16 selectedChange;        /* marks to add (negative: to remove) in state 3 */
    /* 0x2194 */ s16 leavingSprites[SPRITE_ROW_MAX];   /* the sprite playing each row's removed mark, -1: none */
    /* 0x21A8 */ u16 leavingActive[SPRITE_ROW_MAX];    /* 1 once the removed mark turns away */
    /* 0x21BC */ f32 leavingAngles[SPRITE_ROW_MAX];
    /* 0x21E4 */ s16 flashFrames[SPRITE_ROW_MAX];      /* each row's flash timer (0..31), -1: stopped */
};
typedef char SpriteRowListOffsetsCheck[
    offsetof(SpriteRowList, sprites) == 0x20 &&
    offsetof(SpriteRowList, frame) == 0x217C &&
    offsetof(SpriteRowList, alternate) == 0x2184 &&
    offsetof(SpriteRowList, rowCount) == 0x218C &&
    offsetof(SpriteRowList, leavingSprites) == 0x2194 &&
    offsetof(SpriteRowList, leavingActive) == 0x21A8 &&
    offsetof(SpriteRowList, leavingAngles) == 0x21BC &&
    offsetof(SpriteRowList, flashFrames) == 0x21E4 &&
    sizeof(SpriteRowList) == 0x21F8 ? 1 : -1];

extern "C" void spriteRowListRefreshMarks(SpriteRowList *list, s32 rowDelta, s32 markDelta);
#endif
