#include "gamedata/GameDataAccess.h"
#include "gamedata/GameSaveDataA.h"

extern "C" {

void FUN_004d0d70(s32 index);

/* Clears the saved record's value (save body + 0x27E0C) and runs FUN_004d0d70 for each of the 0x18 entries; returns 1. */
u32 FUN_002c1408(void)
{
    GameSaveBodyA *save;
    s32 i;
    GameSavedRecordTailA *saved;

    save = (GameSaveBodyA *)gameDataBlocksGetSaveData();
    i = 0;
    saved = &save->record.tail;
    saved->value = 0;
    do {
        FUN_004d0d70(i);
        i = i + 1;
    } while (i < 0x18);
    return 1;
}

} /* extern "C" */
