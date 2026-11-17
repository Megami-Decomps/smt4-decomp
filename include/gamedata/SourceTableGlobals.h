#ifndef SMT4_GAMEDATA_SOURCETABLEGLOBALS_H
#define SMT4_GAMEDATA_SOURCETABLEGLOBALS_H

#include "common.h"

typedef struct Table {
    /* 0x00 */ u32 header;
    /* 0x04 */ u32 values[18];
    /* 0x4C */ u32 copies[16];
    /* 0x8C */ u32 totals[16];
} Table;

typedef struct Source {
    /* 0x00 */ u32 value;
    /* 0x04 */ u32 count;
    /* 0x08 */ s32 kind;
    /* 0x0C */ u32 total;      /* 0 = count * the kind's multiplier */
    /* 0x10 */ u8 unk10[8];
} Source; /* 0x18 */

typedef struct SourceTableGlobals {
    /* 0x000 */ u8 unk000[0x458];
    /* 0x458 */ Source sources[16];
    /* 0x5D8 */ u8 unk5D8[0xC8];
    /* 0x6A0 */ Table table;
} SourceTableGlobals;

#endif
