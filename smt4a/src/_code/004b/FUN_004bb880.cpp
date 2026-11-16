#include "common.h"
#include "gamedata/DataTable.h"
#include <stddef.h>
#include "gamedata/GameDataAccess.h"

extern "C" {

struct SaveEntry {
    /* 0 */ u8 first;
    /* 1 */ u8 secondLow : 4;
    /* 1 */ u8 secondHigh : 4;
    /* 2 */ u8 unk2[2];
};
typedef char SaveEntryLayout[sizeof(SaveEntry) == 4 &&
    offsetof(SaveEntry, unk2) == 2 ? 1 : -1];

typedef struct SaveData {
    /* 0x00000 */ u8 unk00000[0x2158E];
    /* 0x2158E */ SaveEntry entries[1];
} SaveData;


extern s32 FUN_00148d68(u32 a, u32 b, s32 c);

/* Clears the first byte and both nibbles of the second byte of every save entry of the table and applies each (a, b) pair. */
void FUN_004bb880(void)
{
    void *table = dataTableGet(2, 3);
    u8 *pairs = static_cast<u8 *>(dataTableGetEntries(table));
    s32 count = dataTableGetCount(table);
    SaveData *save = reinterpret_cast<SaveData *>(gameDataBlocksGetSaveData());
    s32 i;

    for (i = 0; i < count; i++) {
        save->entries[i].first = 0;
        save->entries[i].secondLow = 0;
        save->entries[i].secondHigh = 0;
        FUN_00148d68(pairs[i * 2], pairs[i * 2 + 1], 1);
    }
}

}
