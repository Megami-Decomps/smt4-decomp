/* The save block's slot table, returned by gameGetSlotTable() (retail adds 0x8C to the game-data table
 * pointer): the party money, the unit records of the 24 slots, the party/reserve slot maps and the
 * player and stock slots. Callers use these fields instead of local views of the block. */
#ifndef GAMEDATA_SAVESLOTTABLE_H
#define GAMEDATA_SAVESLOTTABLE_H

#include "common.h"
#include <stddef.h>
#include "shard/W6_W6Match1_PartySlot.h"

struct SaveSlotTable {
    /* 0x0000 */ s32 money;
    /* 0x0004 */ u8 unk0004[0x64];
    /* 0x0068 */ u8 entries[24][0x12C];   /* unit records, reached through gameGetSlotRecord() */
    /* 0x1C88 */ s8 party[24];            /* entry index of each party position, -1 = empty */
    /* 0x1CA0 */ s8 reserve[3];           /* entry index of each reserve position, -1 = empty */
    /* 0x1CA3 */ u8 count;
    /* 0x1CA4 */ PartySlotA player;
    /* 0x1DD8 */ u8 unk1DD8[4];
    /* 0x1DDC */ PartySlotA slots[12];
    /* 0x2C4C */ u16 preferredId;
};

typedef char SaveSlotTablePartyOffsetCheck[offsetof(SaveSlotTable, party) == 0x1C88 &&
    offsetof(SaveSlotTable, reserve) == 0x1CA0 && offsetof(SaveSlotTable, count) == 0x1CA3 ? 1 : -1];
typedef char SaveSlotTableSlotsOffsetCheck[offsetof(SaveSlotTable, player) == 0x1CA4 &&
    offsetof(SaveSlotTable, slots) == 0x1DDC && offsetof(SaveSlotTable, preferredId) == 0x2C4C ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif
/* Returns the slot table inside the game-data table (the table plus 0x8C). */
SaveSlotTable *gameGetSlotTable(void);
#ifdef __cplusplus
}
#endif

#endif
