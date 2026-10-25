#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

typedef struct SlotRecord {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 value;
} SlotRecord;

typedef struct BattleUnit {
    /* 0x000 */ u8 unk000[0x3FC];
    /* 0x3FC */ SlotRecord *record;
} BattleUnit;

s32 scrGetArg(u32 index);
BattleUnit *FUN_003f0e20(void *state, s32 index);
SlotRecord *gameGetSlotRecord(s32 slot);
int scrSetResult(s32 value);

/* Script command: result is the value field of the battle unit's record (index < 0x6D) or of the game slot record (index - 0x6D). */
u32 FUN_003359b4(void)
{
    s32 index = scrGetArg(0);
    SlotRecord *record;

    if (index < 0x6D) {
        record = FUN_003f0e20(static_cast<void *>(btlGetMainState()), index)->record;
    } else {
        record = gameGetSlotRecord(index - 0x6D);
    }
    scrSetResult(record->value);
    return 1;
}

} /* extern "C" */
