#include "common.h"

extern "C" {

struct PartyRecord {
    /* 0x00 */ u8 unk00[0xde];
    /* 0xde */ u16 level;
};

PartyRecord *dataTable1bOr1cGetRecord(s32 id);
s32 partyEntryFlagsBit3(s32 id);
void FUN_0041847c(s32 id);

/* Calls FUN_0041847c for a party entry that has a nonzero level and flag bit 3 set. */
void partyEntryTriggerIfLevelAndFlag3(s32 id)
{
    PartyRecord *record = dataTable1bOr1cGetRecord(id);

    if (record != NULL && record->level != 0 && partyEntryFlagsBit3(id) != 0) {
        FUN_0041847c(id);
    }
}

} /* extern "C" */
