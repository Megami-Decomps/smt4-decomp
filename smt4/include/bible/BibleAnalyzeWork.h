/* bible/bibleAnalyze: the analyze screen's work block and its list rows, as the C draw functions see it.
 * It is the Obj4223f8 view object (classes/Obj4223f8.h; the menu draw reads its `value` at 0xA5B4 as the target); Apocalypse's
 * draw functions use Screen4A (shard/Shard004A.h). */
#ifndef BIBLE_BIBLEANALYZEWORK_H
#define BIBLE_BIBLEANALYZEWORK_H

#include "common.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "ui/UiSpriteState.h"

/* One list row (0x20 bytes). */
typedef struct AnalyzeRow {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s16 id;                  /* the demon the row shows */
    /* 0x06 */ u8 unk06[0x1A];
} AnalyzeRow;

/* The analyze screen's work block. */
typedef struct AnalyzeWork {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ s32 mode;               /* 2: a row is selected */
    /* 0x018 */ u8 unk018[8];
    /* 0x020 */ u8 list[4];             /* the scroll list state */
    /* 0x024 */ s32 visibleRows;
    /* 0x028 */ s32 rowCount;
    /* 0x02C */ u8 unk02c[0x9C];
    union {
        /* 0x0C8 */ AsdTextureRegion region; /* the screen's sprite layout */
        /* 0x0C8 */ u8 panel[0x14C];
    };
    /* 0x214 */ UiSpriteState highlight; /* the selected row's pulsing frame */
    /* 0x2A0 */ UiSpriteState scroll;    /* the selected row's scrolling band */
    /* 0x32C */ u8 unk32c[0x268];
    /* 0x594 */ s32 slide;              /* the panel's slide-in offset, 0..256 */
    /* 0x598 */ u8 unk598[0x10];
    /* 0x5A8 */ AnalyzeRow rows[1];
} AnalyzeWork;
typedef char AnalyzeWorkLayoutCheck[sizeof(AnalyzeRow) == 0x20 && offsetof(AnalyzeWork, region) == 0xC8 &&
    offsetof(AnalyzeWork, highlight) == 0x214 && offsetof(AnalyzeWork, scroll) == 0x2A0 &&
    offsetof(AnalyzeWork, slide) == 0x594 && offsetof(AnalyzeWork, rows) == 0x5A8 ? 1 : -1];

#endif
