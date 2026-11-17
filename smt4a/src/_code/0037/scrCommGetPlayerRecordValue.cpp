#include "common.h"
#include "gamedata/EquipmentRecordA.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
void scrSetResult(s32 value);

/* Script command: reports the value byte of the record of the player's weapon, or 0 when there is none. Returns 1. */
u32 scrCommGetPlayerRecordValue(void)
{
    u32 id = gameGetPlayerData()->equipped.weapon;
    u8 value = 0;
    EquipmentRecordA *record = dataTable08Sub2GetRecord(id);

    if (record != NULL) {
        value = record->scriptValue;
    }
    scrSetResult(value);
    return 1;
}

} /* extern "C" */
