#ifndef SMT4_GAMEDATA_FLAGBITTABLE_H
#define SMT4_GAMEDATA_FLAGBITTABLE_H

#include "common.h"

typedef struct BitRow {
    /* 0x0 */ u8 bits[4];       /* 32 flags */
} BitRow;

typedef struct FlagBitTable {
    /* 0x000 */ BitRow rows[0x200];
} FlagBitTable;

#endif
