#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x000 */ u8 unk000[0x130];
    /* 0x130 */ u16 flagA;
    /* 0x132 */ u16 flagB;
} Record;

extern Record *dataTable1bOr1cGetRecord(s32 id);
extern s32 gameUnlockRecordRequirementsMet(s32 id);
extern s32 gameFlagIsSet(u32 flag);

/* 1 when the id has a record that is available; 0 if there is none, or flag A is set while flag B is not. */
u32 recordIsAvailable(s32 id)
{
    Record *record = dataTable1bOr1cGetRecord(id);

    if (record == NULL) {
        return 0;
    }
    if (gameUnlockRecordRequirementsMet(id) == 0) {
        return 0;
    }
    if (record->flagA != 0 && gameFlagIsSet(record->flagA) != 0 && (record->flagB == 0 || gameFlagIsSet(record->flagB) == 0)) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
