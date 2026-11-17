#include "common.h"
#include "gamedata/EquipmentRecordA.h"

extern "C" {

u16 *gameGetPlayerData(void);
void scrSetResult(s32 value);

/* Script command: reports the value byte of the record for the player's id, or 0 when there is none. Returns 1. */
u32 scrCommGetPlayerRecordValue(void)
{
    u32 id = *gameGetPlayerData();
    u8 value = 0;
    EquipmentRecordA *record = dataTable08Sub2GetRecord(id);

    if (record != NULL) {
        value = record->scriptValue;
    }
    scrSetResult(value);
    return 1;
}

} /* extern "C" */
