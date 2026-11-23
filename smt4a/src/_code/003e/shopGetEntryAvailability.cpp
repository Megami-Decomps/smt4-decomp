#include "code/Code002e.h"
#include "gamedata/AppUnlockBits.h"
#include "gamedata/DataTableAccess.h"
#include "gamedata/GameDataAccess_VariantE.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/GauntletAppTable.h"

extern "C" {

/* Inline body of dataRecordGetValue for the app catalog. */
static __inline u32 shopRecordGetPrice(u32 id)
{
    const GauntletAppRecordA *record = (const GauntletAppRecordA *)dataFindKeyedRecordWithOverrides(id);
    return record != NULL ? record->cost : 0;
}

/* Returns 2 for a locked app, 1 for an unaffordable app, or 0 if it can be bought. */
u8 shopGetEntryAvailability(u32 id)
{
    const GauntletAppRecordA *record = (const GauntletAppRecordA *)dataFindKeyedRecordWithOverrides(id);
    s32 i;
    u32 price;
    u32 money;

    if (record == NULL) {
        return 2;
    }
    if (gameGetPlayerData()->level < (record->levelAndCategory >> 6)) {
        return 2;
    }
    for (i = 0; i < 3; i++) {
        if (record->requiredFlags[i] != 0 && !gameFlagIsSet(record->requiredFlags[i])) {
            return 2;
        }
    }
    for (i = 0; i < 3; i++) {
        if (record->requiredApps[i] != 0 && !appUnlockBitIsSet(record->requiredApps[i])) {
            return 2;
        }
    }
    price = shopRecordGetPrice(id);
    money = gameSaveGetPoints();
    return price > money;
}

} /* extern "C" */
