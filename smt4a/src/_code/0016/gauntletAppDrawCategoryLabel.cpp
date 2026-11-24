#include "camp/GauntletAppMenu/GauntletAppMenu.h"
#include "gamedata/DataTableAccess.h"
#include "gamedata/GauntletAppTable.h"
#include "shard/W6_W6Match5_RecordCallParameters.h"

extern "C" {

/* Draws the category label for a Gauntlet app (twin of smt4 FUN_002b6b8c). */
void gauntletAppDrawCategoryLabel(s32 appId, u32 x, u32 y, u32 priority)
{
    s32 message = 0;
    const GauntletAppRecordA *app = (const GauntletAppRecordA *)dataFindKeyedRecordWithOverrides(appId);

    switch (app->labelCategory) {
    case 0:
        message = 0x411;
        break;
    case 1:
        message = 0x412;
        break;
    case 2:
        message = 0x413;
        break;
    case 3:
        message = 0x414;
        break;
    case 4:
        message = 0x415;
        break;
    case 5:
        message = 0x416;
        break;
    }
    texTableRecordCallWithParams(2, 11, message, x, y, priority);
}

} /* extern "C" */
