#include "common.h"

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

typedef struct ItemPair {
    /* 0 */ u8 type;
    /* 1 */ u8 id;
} ItemPair;

extern void *dataTableGet(s32 table, s32 section);
extern ItemPair *dataTableGetEntries(void *section);
extern s32 dataTableGetCount(void *section);
extern SaveData *gameDataBlocksGetSaveData(void);
extern void FUN_002c0a9c(u32 type, u32 id, s32 arg);

/* Resets the saved state of every table entry (keeping only its seen bit) and re-applies the entry. */
void FUN_003bbf54(void)
{
    void *section = dataTableGet(2, 3);
    ItemPair *entries = dataTableGetEntries(section);
    s32 count = dataTableGetCount(section);
    SaveData *save = gameDataBlocksGetSaveData();
    s32 i;

    for (i = 0; i < count; i++) {
        save->items[i].count = 0;
        save->items[i].flags &= ~0x7F;
        FUN_002c0a9c(entries[i].type, entries[i].id, 1);
    }
}

} /* extern "C" */
