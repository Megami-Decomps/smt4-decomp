#include "common.h"

extern "C" {

typedef struct Record0037d2b8 {
    /* 0x00 */ u8 unk00[0x7c];
    /* 0x7c */ u8 value;
} Record0037d2b8;

u16 *gameGetPlayerData(void);
Record0037d2b8 *dataTable08Sub2GetRecord(u32 id);
void scrSetResult(s32 value);

/* Script command: reports the value byte of the record for the player's id, or 0 when there is none. Returns 1. */
u32 scrCommGetPlayerRecordValue(void)
{
    u32 id = *gameGetPlayerData();
    u8 value = 0;
    Record0037d2b8 *record = dataTable08Sub2GetRecord(id);

    if (record != NULL) {
        value = record->value;
    }
    scrSetResult(value);
    return 1;
}

} /* extern "C" */
