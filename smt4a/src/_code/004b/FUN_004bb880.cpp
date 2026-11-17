#include "common.h"
#include "gamedata/EncountData.h"
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


extern s32 weightedTableRollNextValue(u32 a, u32 b, s32 c);

/* Clears the saved encounter roll state of every (map, area) (EncountData.tbb table 3) and rolls it again. */
void FUN_004bb880(void)
{
    void *table = dataTableGet(2, 3);
    EncountAreaKey *pairs = encountAreaKeys(table);
    s32 count = dataTableGetCount(table);
    SaveData *save = reinterpret_cast<SaveData *>(gameDataBlocksGetSaveData());
    s32 i;

    for (i = 0; i < count; i++) {
        save->entries[i].first = 0;
        save->entries[i].secondLow = 0;
        save->entries[i].secondHigh = 0;
        weightedTableRollNextValue(pairs[i].map, pairs[i].area, 1);
    }
}

}
