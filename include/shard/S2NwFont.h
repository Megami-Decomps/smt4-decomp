/* nw::font resource layout used by ResFontBase: font info, glyph sheet info, width tables. */
#ifndef S2_NW_FONT_H
#define S2_NW_FONT_H

#include "common.h"

typedef struct NwFontCharWidths NwFontCharWidths;
typedef struct NwFontWidthTable NwFontWidthTable;
typedef struct NwFontSheetInfo NwFontSheetInfo;
typedef struct NwFontInfo NwFontInfo;
typedef struct NwFontTexObj NwFontTexObj;
typedef struct NwFontGlyph NwFontGlyph;
typedef struct NwResFontBase NwResFontBase;
typedef struct NwFontFileHeader NwFontFileHeader;

struct NwFontCharWidths {
    s8 left;       /* 0x0 */
    u8 glyphWidth; /* 0x1 */
    u8 charWidth;  /* 0x2 */
};

/* One range of character widths; ranges form a linked list. */
struct NwFontWidthTable {
    u16 firstIndex;           /* 0x0 */
    u16 lastIndex;            /* 0x2 */
    NwFontWidthTable *next;   /* 0x4 */
    NwFontCharWidths widths[1]; /* 0x8: lastIndex - firstIndex + 1 entries */
};

/* Glyph sheet layout (cells of cellWidth x cellHeight, sheetRows x sheetLines per sheet). */
struct NwFontSheetInfo {
    u8 cellWidth;      /* 0x0 */
    u8 cellHeight;     /* 0x1 */
    s8 baselinePos;    /* 0x2 */
    u8 maxCharWidth;   /* 0x3 */
    u32 sheetSize;     /* 0x4 */
    u16 sheetCount;    /* 0x8 */
    u16 sheetFormat;   /* 0xa */
    u16 sheetRows;     /* 0xc */
    u16 sheetLines;    /* 0xe */
    u16 sheetWidth;    /* 0x10 */
    u16 sheetHeight;   /* 0x12 */
    u8 *sheetImage;    /* 0x14 */
};

struct NwFontInfo {
    u8 fontType;                 /* 0x0 */
    u8 lineFeed;                 /* 0x1 */
    u16 alterCharIndex;          /* 0x2: glyph index used for missing characters */
    NwFontCharWidths defaultWidths; /* 0x4 */
    u8 encoding;                 /* 0x7 */
    NwFontSheetInfo *sheetInfo;  /* 0x8 */
    NwFontWidthTable *widthTable; /* 0xc */
    void *charMap;               /* 0x10 */
};

struct NwFontTexObj {
    u8 unk00[0x14];
};

struct NwFontGlyph {
    u8 *pTexture;               /* 0x0 */
    NwFontCharWidths widths;    /* 0x4 */
    u8 height;                  /* 0x7 */
    u16 texWidth;               /* 0x8 */
    u16 texHeight;              /* 0xa */
    u16 cellX;                  /* 0xc */
    u16 cellY;                  /* 0xe */
    u16 texFormat;              /* 0x10 */
    u16 unk12;                  /* 0x12 */
    NwFontTexObj *pTexObj;      /* 0x14 */
};

struct NwResFontBase {
    union {
        u8 unk00[8];            /* 0x0 */
        struct {
            u32 unk00;
            NwFontFileHeader* resource; /* 0x4 */
        } resourceView;
    };
    NwFontInfo *fontInfo;       /* 0x8 */
    NwFontTexObj *texObjs;      /* 0xc: one per sheet, or NULL */
    u8 unk10[4];                /* 0x10 */
    u16 cachedCode;             /* 0x14: last code looked up */
    u16 cachedIndex;            /* 0x16: its glyph index */
};

#endif
