#include "common.h"

extern "C" {

/* A 0x24-byte terminal entry; only its leading id is read here. */
struct TerminalEntry {
    /* 0x00 */ s16 id;
    /* 0x02 */ u8 unk02[0x22];
};
typedef char TerminalEntrySizeCheck[sizeof(TerminalEntry) == 0x24 ? 1 : -1];

/* The terminal work area's item list: a pointer to each listed entry's id, and how many there are. */
struct TerminalItemList {
    /* 0x000 */ u8 unk000[0x594];
    /* 0x594 */ s16 *slots[20];
    /* 0x5E4 */ s32 count;
};
typedef char TerminalItemListSizeCheck[sizeof(TerminalItemList) == 0x5E8 ? 1 : -1];

extern TerminalEntry g_tmnlEntries[]; /* 0x432cf8 */

/* Finds the slot (among the list at +0x594) that holds one of the ids that belong to the terminal item `item`; 0 when none. */
s32 tmnlFindSlotForItem(TerminalItemList *list, u32 item)
{
    s16 ids[4] = {0, 0, 0, 0};
    switch (item) {
    case 0x34:
    case 0x43:
    case 0x48:
        ids[0] = g_tmnlEntries[4].id;
        ids[1] = g_tmnlEntries[9].id;
        ids[2] = g_tmnlEntries[13].id;
        break;
    case 0x35:
    case 0x44:
    case 0x49:
        ids[0] = g_tmnlEntries[6].id;
        ids[1] = g_tmnlEntries[10].id;
        ids[2] = g_tmnlEntries[14].id;
        break;
    case 0x36:
    case 0x45:
    case 0x47:
        ids[0] = g_tmnlEntries[3].id;
        ids[1] = g_tmnlEntries[8].id;
        ids[2] = g_tmnlEntries[12].id;
        break;
    case 0x37:
    case 0x46:
    case 0x4A:
        ids[0] = g_tmnlEntries[5].id;
        ids[1] = g_tmnlEntries[11].id;
        ids[2] = g_tmnlEntries[15].id;
        break;
    case 0x38:
        ids[0] = g_tmnlEntries[7].id;
        break;
    case 0x39:
        ids[0] = g_tmnlEntries[2].id;
        break;
    case 0x3A:
        ids[0] = g_tmnlEntries[16].id;
        break;
    case 0x3B:
        ids[0] = g_tmnlEntries[17].id;
        break;
    case 0x40:
        ids[0] = g_tmnlEntries[1].id;
        break;
    case 0x41:
        ids[0] = g_tmnlEntries[18].id;
        break;
    case 0x42:
        ids[0] = g_tmnlEntries[19].id;
        break;
    case 0x3D:
        ids[0] = g_tmnlEntries[0].id;
        break;
    }
    s32 i = 0;
    while (i < list->count) {
        if (0 < ids[0] && *list->slots[i] == ids[0]) {
            return i;
        }
        if (0 < ids[1] && *list->slots[i] == ids[1]) {
            return i;
        }
        if (0 < ids[2] && *list->slots[i] == ids[2]) {
            return i;
        }
        i++;
    }
    return 0;
}

} /* extern "C" */
