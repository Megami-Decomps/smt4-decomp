/* The slot table returned by gameGetSlotTable() (retail adds 0x8C to the saved game block pointer):
 * the stock and active slot maps of the saved game. Offsets are relative to the table. */
#ifndef GAMEDATA_SAVESLOTTABLEIV_H
#define GAMEDATA_SAVESLOTTABLEIV_H

#include "common.h"
#include <stddef.h>

struct SaveSlotTableIV {
    /* 0x0000 */ s32 money;
    /* 0x0004 */ u8 unk0004[0x90EC];
    /* 0x90F0 */ s8 stock[24];     /* slot of each stock position, -1 = empty (GameSaveData::party.stock) */
    /* 0x9108 */ s8 active[3];     /* slot of each active position, -1 = empty */
    /* 0x910B */ u8 stockCount;
};

typedef char SaveSlotTableIVLayoutCheck[offsetof(SaveSlotTableIV, money) == 0 && offsetof(SaveSlotTableIV, unk0004) == 4 &&
    offsetof(SaveSlotTableIV, stock) == 0x90F0 &&
    offsetof(SaveSlotTableIV, active) == 0x9108 && offsetof(SaveSlotTableIV, stockCount) == 0x910B ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif
/* Returns the slot table inside the saved game block (the block plus 0x8C). */
SaveSlotTableIV *gameGetSlotTable(void);
#ifdef __cplusplus
}
#endif

#endif
