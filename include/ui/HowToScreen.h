#ifndef UI_HOW_TO_SCREEN_H
#define UI_HOW_TO_SCREEN_H
#include "ui/UiSpriteState.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "gamedata/HowToTable.h"
#include <stddef.h>

struct HowToDrawTables {
    u32 first[9];
    u32 second[18];
    u32 last[84];
};
typedef char HowToDrawTablesOffsets[sizeof(HowToDrawTables) == 444 &&
    offsetof(HowToDrawTables, second) == 36 &&
    offsetof(HowToDrawTables, last) == 108 ? 1 : -1];

enum {
    HOW_TO_PAGE_MAX_ROWS = 5,
    HOW_TO_PAGE_MAX_COLUMNS = 3,
    HOW_TO_PAGE_ROW_EMPTY = 0,
    HOW_TO_PAGE_ROW_TEXT = 1,
    HOW_TO_PAGE_ROW_IMAGE = 2,
    HOW_TO_PAGE_NO_CHOICE = -1
};

/* One laid-out text or image row of a tutorial page. */
struct HowToPageRow {
    /* 0x00 */ s32 start;
    /* 0x04 */ s32 end;
    /* 0x08 */ u8 kind;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ s32 choices[HOW_TO_PAGE_MAX_COLUMNS];
    /* 0x18 */ s32 lastColumn;
};

struct HowToScreenWork {
    union {
        /* 0x000 */ u32 unk000[2];
        /* 0x000 */ u32 process;
        struct {
            u32 unk000;
            /* 0x004 */ u8 state;
            u8 unk005[3];
        } mode;
    };
    /* 0x008 */ void *messages[2];
    union {
        /* 0x010 */ u32 unk010[2];
        struct {
            /* 0x010 */ HowToRecord *records;  /* the how-to table's rows, indexed by entry id */
            /* 0x014 */ u32 unk014;
        } table;
    };
    union {
        /* 0x018 */ u8 resetState[0xD0];
        /* 0x018 */ u16 entryIds[0x34];        /* the listed entries in order, 0 after the last */
        struct {
            /* 0x018 */ u8 unk018[0x68];
            /* 0x080 */ u32 selection;
            /* 0x084 */ HowToRecord *definition;
            /* 0x088 */ u32 handles[3];
            /* 0x094 */ s32 height;
            /* 0x098 */ HowToPageRow rows[HOW_TO_PAGE_MAX_ROWS];
        } display;
    };
    /* 0x124 */ u8 unk124[0xCC];
    /* 0x1F0 */ s32 scroll;                /* the list's first visible entry */
    /* 0x1F4 */ s32 cursor;                /* the selected row on the screen */
    /* 0x1F8 */ u8 unk1F8[4];
    /* 0x1FC */ s16 rowRegions[10];        /* each visible row's touch region */
    /* 0x210 */ u8 unk210[0xC];
    /* 0x21C */ UiResourceParameters parameters;
    /* 0x23C */ UiSpriteState sprites[4];
};
struct HowToScreenInstance : HowToScreenWork {
    /* 0x46C */ u32 savedButtonHelp;
    /* 0x470 */ s32 entryMode;
    /* 0x474 */ u8 alternate;
    /* 0x475 */ u8 unk475[3];
};
typedef char HowToScreenInstanceLayoutCheck[offsetof(HowToScreenWork, process) == 0 &&
    sizeof(HowToScreenInstance) == 0x478 && offsetof(HowToScreenInstance, savedButtonHelp) == 0x46c &&
    offsetof(HowToScreenInstance, entryMode) == 0x470 &&
    offsetof(HowToScreenInstance, alternate) == 0x474 ? 1 : -1];
typedef char HowToScreenWorkOffsets[sizeof(HowToScreenWork) == 0x46C &&
    sizeof(HowToPageRow) == 0x1C && offsetof(HowToPageRow, choices) == 0xC &&
    offsetof(HowToPageRow, lastColumn) == 0x18 && offsetof(HowToScreenWork, messages) == 8 &&
    offsetof(HowToScreenWork, display.selection) == 0x80 &&
    offsetof(HowToScreenWork, display.definition) == 0x84 &&
    offsetof(HowToScreenWork, display.handles) == 0x88 &&
    offsetof(HowToScreenWork, display.rows) == 0x98 && offsetof(HowToScreenWork, unk124) == 0x124 &&
    offsetof(HowToScreenWork, table.records) == 0x10 && offsetof(HowToScreenWork, entryIds) == 0x18 &&
    offsetof(HowToScreenWork, scroll) == 0x1F0 && offsetof(HowToScreenWork, cursor) == 0x1F4 &&
    offsetof(HowToScreenWork, rowRegions) == 0x1FC &&
    offsetof(HowToScreenWork, parameters) == 0x21C &&
    offsetof(HowToScreenWork, sprites) == 0x23C ? 1 : -1];
typedef char HowToScreenStateOffsetCheck[offsetof(HowToScreenWork, mode.state) == 4 &&
    sizeof(HowToScreenWork) == 0x46c ? 1 : -1];
#endif
