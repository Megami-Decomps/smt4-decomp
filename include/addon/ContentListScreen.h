/* Apocalypse: the downloadable-content list screen (the work area contentListWaitAndInitialize fills and
 * contentListDrawRows draws). Only the fields its functions use are named. */
#ifndef ADDON_CONTENTLISTSCREEN_H
#define ADDON_CONTENTLISTSCREEN_H

#include "common.h"
#include <stddef.h>
#include "ui/UiSpriteState.h"
#include "ui/GridNavigation.h"

/* ContentListScreen.state values the draw tests. */
enum {
    CONTENT_LIST_STATE_DETAIL = 4,      /* from here on the detail cover is drawn over the list */
    CONTENT_LIST_STATE_NO_CURSOR = 8    /* the focused row is drawn without its cursor frame */
};

/* ContentListScreen.sprites. */
enum {
    CONTENT_LIST_SPRITE_WINDOW = 0,     /* the list window: position and opacity of everything drawn */
    CONTENT_LIST_SPRITE_CANCEL = 1,
    CONTENT_LIST_SPRITE_PAGE = 2,
    CONTENT_LIST_SPRITE_CURSOR = 3,     /* the opacity of the focused row's cursor frame */
    CONTENT_LIST_SPRITE_GLOW = 4,       /* the opacity of the focused row's glow */
    CONTENT_LIST_SPRITE_COUNT = 5
};

struct PackageSelectableRecord;

struct ContentListScreen {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u8 state;
    /* 0x005 */ u8 unk005[3];
    /* 0x008 */ void *resource;
    /* 0x00C */ void *messages;
    /* 0x010 */ u8 unk010[4];
    /* 0x014 */ s32 totalCount;
    /* 0x018 */ u8 neededTextures[2];
    /* 0x01A */ u8 unk01a[0xE];
    /* 0x028 */ GridNavigation navigation;
    /* 0x08C */ s32 topRow;
    /* 0x090 */ union {
        u8 scroller[0x64];             /* the grid navigation widget (uiDrawListScrollBar) */
        GridNavigation scrollNavigation;
    };
    /* 0x0F4 */ s32 focusedRow;         /* the visible row under the cursor */
    /* 0x0F8 */ s32 firstRow;           /* index into ids of the first visible row */
    /* 0x0FC */ s32 visibleCount;
    /* 0x100 */ u8 unk100[4];
    /* 0x104 */ u8 pagesEnabled;
    /* 0x105 */ u8 unk105[7];
    /* 0x10C */ s16 rowRegions[10];     /* the touch region of each visible row */
    /* 0x120 */ u8 unk120[2];
    /* 0x122 */ s16 scrollUpRegion;
    /* 0x124 */ s16 scrollDownRegion;
    /* 0x126 */ s16 scrollThumbRegion;
    /* 0x128 */ u16 touchCount;
    /* 0x12A */ u8 unk12a[0x22];
    /* 0x14C */ UiSpriteState sprites[CONTENT_LIST_SPRITE_COUNT];
    /* 0x408 */ union {
        u16 ids[300];                 /* content id of each available row */
        u16 entries[300];
    };
    /* 0x660 */ union {
        s32 rowCount;                 /* available row count, before clamping to visibleCount */
        s32 count;
    };
    /* 0x664 */ PackageSelectableRecord *selectedRecord;
    /* 0x668 */ u8 previousPage;
    /* 0x669 */ u8 nextPage;
};

typedef char ContentListScreenCheck[offsetof(ContentListScreen, navigation) == 0x28 &&
    offsetof(ContentListScreen, topRow) == 0x8C && offsetof(ContentListScreen, scroller) == 0x90 &&
    offsetof(ContentListScreen, pagesEnabled) == 0x104 && offsetof(ContentListScreen, previousPage) == 0x668 &&
    offsetof(ContentListScreen, nextPage) == 0x669 &&
    offsetof(ContentListScreen, focusedRow) == 0xF4 && offsetof(ContentListScreen, rowRegions) == 0x10C &&
    offsetof(ContentListScreen, scrollThumbRegion) == 0x126 && offsetof(ContentListScreen, sprites) == 0x14C &&
    offsetof(ContentListScreen, visibleCount) == 0xFC && offsetof(ContentListScreen, touchCount) == 0x128 &&
    offsetof(ContentListScreen, ids) == 0x408 && offsetof(ContentListScreen, rowCount) == 0x660 &&
    offsetof(ContentListScreen, selectedRecord) == 0x664 ? 1 : -1];

extern "C" {
void contentListRebuildAvailableEntries(ContentListScreen *screen, s32 limit);
void contentListUpdateNavigation(ContentListScreen *screen);
void FUN_00402f58(ContentListScreen *screen);
} /* extern "C" */

#endif
