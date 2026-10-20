/* NON_MATCHING: retail clears the second byte of each entry with a read-modify-write (`ldrb; bic r1, r1, #255; strb`, a bitfield-style store) and forms the second offset with `orr`; armcc emits two plain byte stores. */
#include "common.h"

extern "C" {

typedef struct SaveEntry {
    /* 0 */ u8 first;
    /* 1 */ u8 second : 8;
    /* 2 */ u8 unk2[2];
} SaveEntry;

typedef struct SaveData {
    /* 0x00000 */ u8 unk00000[0x2158E];
    /* 0x2158E */ SaveEntry entries[1];
} SaveData;

extern SaveData *gameDataBlocksGetSaveData(void);
extern u32 dataTableGet(u32 table, u32 index);
extern s32 dataTableGetCount(u32 table);
extern u8 *dataTableGetEntries(void);
extern s32 FUN_00148d68(u32 a, u32 b, s32 c);

/* Clears the first and second byte of every save entry of the table and applies each (a, b) pair. */
void FUN_004bb880(void)
{
    u32 table = dataTableGet(2, 3);
    u8 *pairs = dataTableGetEntries();
    s32 count = dataTableGetCount(table);
    SaveData *save = gameDataBlocksGetSaveData();
    s32 i;

    for (i = 0; i < count; i++) {
        save->entries[i].first = 0;
        save->entries[i].second = 0;
        FUN_00148d68(pairs[i * 2], pairs[i * 2 + 1], 1);
    }
}

}
