#include "common.h"

extern "C" {

typedef struct Slot {
    /* 0x00 */ u8 unk00[0x16];
    /* 0x16 */ u8 bit0 : 1;
    /*      */ u8 flag : 1;         /* set by FUN_001ddafc */
    /*      */ u8 bits2to7 : 6;
    /* 0x17 */ u8 unk17[0x1D];
} Slot;                              /* 0x34 */

typedef struct SlotTable {
    /* 0x0000 */ u8 unk0000[0xC1F8];
    /* 0xC1F8 */ Slot slots[0x501];
} SlotTable;

typedef struct GameDataBlocksView {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ SlotTable *table;
} GameDataBlocksView;

extern GameDataBlocksView g_gameDataBlocks;

/* Sets or clears the flag bit of slot `index`; returns 0 if the index is out of range. */
u8 FUN_001ddafc(u32 index, bool value)
{
    if (index > 0x500) {
        return 0;
    }
    u8 *row = (u8 *)g_gameDataBlocks.table + index * sizeof(Slot);
    Slot *slot = (Slot *)(row + 0xC1F8);

    slot->flag = value;
    return 1;
}

} /* extern "C" */
