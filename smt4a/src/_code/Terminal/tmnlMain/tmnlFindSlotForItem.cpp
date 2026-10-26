#include "common.h"

/* A record of the command-type table (0x3C bytes, first halfword is its item type id). */
struct CommandTypeRecord {
    s16 typeId;
    u8 unk02[0x3A];
};

/* The menu object: item pointers from 0x5A8, their count at 0x600. */
struct CommandMenu {
    u8 unk000[0x5A8];
    s16 *items[22];     // 0x5A8: each points at the item's type id
    s32 itemCount;      // 0x600
};

extern "C" {
extern CommandTypeRecord g_tmnlEntries[22]; /* 0x56fd38 */

/* Find the index of the first menu item whose type matches the command code (the inverse of the item-to-code mapping). */
s32 tmnlFindSlotForItem(CommandMenu *menu, u32 code)
{
    s16 ids[4] = {0, 0, 0, 0};
    switch (code) {
    case 0x35:
    case 0x44:
    case 0x49:
        ids[0] = g_tmnlEntries[4].typeId;
        ids[1] = g_tmnlEntries[9].typeId;
        ids[2] = g_tmnlEntries[13].typeId;
        break;
    case 0x36:
    case 0x45:
    case 0x4A:
        ids[0] = g_tmnlEntries[6].typeId;
        ids[1] = g_tmnlEntries[10].typeId;
        ids[2] = g_tmnlEntries[14].typeId;
        break;
    case 0x37:
    case 0x48:
        ids[0] = g_tmnlEntries[3].typeId;
        ids[2] = g_tmnlEntries[12].typeId;
        break;
    case 0x38:
    case 0x47:
    case 0x4B:
        ids[0] = g_tmnlEntries[5].typeId;
        ids[1] = g_tmnlEntries[11].typeId;
        ids[2] = g_tmnlEntries[15].typeId;
        break;
    case 0x46:
        ids[0] = g_tmnlEntries[8].typeId;
        break;
    case 0x39:
        ids[0] = g_tmnlEntries[7].typeId;
        break;
    case 0x3A:
        ids[0] = g_tmnlEntries[2].typeId;
        break;
    case 0x3B:
        ids[0] = g_tmnlEntries[16].typeId;
        break;
    case 0x3C:
        ids[0] = g_tmnlEntries[17].typeId;
        break;
    case 0x41:
        ids[0] = g_tmnlEntries[1].typeId;
        break;
    case 0x42:
        ids[0] = g_tmnlEntries[18].typeId;
        break;
    case 0x43:
        ids[0] = g_tmnlEntries[19].typeId;
        break;
    case 0x4C:
        ids[0] = g_tmnlEntries[20].typeId;
        break;
    case 0x4D:
        ids[0] = g_tmnlEntries[21].typeId;
    }
    s32 i = 0;
    while (i < menu->itemCount) {
        if (0 < ids[0] && *menu->items[i] == ids[0]) {
            return i;
        }
        if (0 < ids[1] && *menu->items[i] == ids[1]) {
            return i;
        }
        if (0 < ids[2] && *menu->items[i] == ids[2]) {
            return i;
        }
        i++;
    }
    return 0;
}
}
