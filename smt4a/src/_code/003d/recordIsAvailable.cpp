#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x000 */ u8 unk000[0x130];
    /* 0x130 */ u16 flagA;
    /* 0x132 */ u16 flagB;
} Record;

extern Record *FUN_001ad9b4(s32 id);
extern s32 FUN_003df390(s32 id);
extern s32 gameFlagIsSet(u32 flag);

/* 1 when the id has a record that is available; 0 if there is none, or flag A is set while flag B is not. */
u32 recordIsAvailable(s32 id)
{
    Record *record = FUN_001ad9b4(id);

    if (record == NULL) {
        return 0;
    }
    if (FUN_003df390(id) == 0) {
        return 0;
    }
    if (record->flagA != 0 && gameFlagIsSet(record->flagA) != 0 && (record->flagB == 0 || gameFlagIsSet(record->flagB) == 0)) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
