#include "battle/BtlMainAccess.h"
#include "gamedata/SaveSlotRecord.h"

extern "C" {

typedef struct BattleUnit {
    /* 0x000 */ u8 unk000[0x3FC];
    /* 0x3FC */ SlotRecordA *record;
} BattleUnit;

s32 scrGetArg(u32 index);
BattleUnit *btlMainFindEntryByListedId(void *state, s32 index);
int scrSetResult(s32 value);

/* Script command: result is the devil id of the battle unit's record (index < 0x6D) or of the game slot record (index - 0x6D). */
u32 FUN_003359b4(void)
{
    s32 index = scrGetArg(0);
    SlotRecordA *record;

    if (index < 0x6D) {
        record = btlMainFindEntryByListedId(static_cast<void *>(btlGetMainState()), index)->record;
    } else {
        record = gameGetSlotRecord(index - 0x6D);
    }
    scrSetResult(record->id);
    return 1;
}

} /* extern "C" */
