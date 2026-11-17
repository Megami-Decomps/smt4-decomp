#include "gamedata/EncountData.h"

extern "C" {

typedef struct ItemState {
    /* 0 */ u8 count;
    /* 1 */ u8 flags;   /* bits 0-6 cleared */
    /* 2 */ u8 unk2[2];
} ItemState; /* 4 */

typedef struct SaveData {
    /* 0x00000 */ u8 unk00000[0x1EC56];
    /* 0x1EC56 */ ItemState items[1];
} SaveData;

extern SaveData *gameDataBlocksGetSaveData(void);
extern void weightedTableRollNextValue(u32 type, u32 id, s32 arg);

/* Resets the saved encounter roll state of every (map, area) (keeping only its seen bit) and rolls it again. */
void inventoryResetSavedTableEntries(void)
{
    void *section = dataTableGet(2, 3);
    EncountAreaKey *entries = encountAreaKeys(section);
    s32 count = dataTableGetCount(section);
    SaveData *save = gameDataBlocksGetSaveData();
    s32 i;

    for (i = 0; i < count; i++) {
        save->items[i].count = 0;
        save->items[i].flags &= ~0x7F;
        weightedTableRollNextValue(entries[i].map, entries[i].area, 1);
    }
}

} /* extern "C" */
