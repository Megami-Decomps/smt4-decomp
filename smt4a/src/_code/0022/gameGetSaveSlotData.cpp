#include "common.h"

extern "C" {

typedef struct SaveEntry {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ u8 data[0xC4]; /* the part callers get a pointer to */
} SaveEntry; /* 300 bytes */

typedef struct SaveSection {
    /* 0x0000 */ SaveEntry entries[24];
    /* 0x1C20 */ u8 unk1c20[0x80];
    /* 0x1CA0 */ s8 entryOfSlot[1]; /* entry index per slot, negative when unused */
} SaveSection;

typedef struct SaveBlock {
    /* 0x00 */ u8 unk00[0x8C];
    /* 0x8C */ SaveSection section;
} SaveBlock;

typedef struct GameDataBlocks {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ SaveBlock *saveBlock;
} GameDataBlocks;

extern GameDataBlocks g_gameDataBlocks;

/* Address of the entry data for `slot`, or NULL when the slot has no entry. */
u8 *gameGetSaveSlotData(s32 slot)
{
    SaveSection *section = &g_gameDataBlocks.saveBlock->section;
    u8 *result = NULL;
    s32 index = section->entryOfSlot[slot];

    if (index >= 0) {
        result = section->entries[index].data;
    }
    return result;
}

}
