#ifndef GAMEDATA_DEVILPORTRAITDRAW_IV_H
#define GAMEDATA_DEVILPORTRAITDRAW_IV_H

#include "gamedata/NkmBaseRecord.h"
#include "gamedata/NkmEnemyLookup.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* Atlas banks and bounds for the standard and alternate demon portraits. */
enum {
    DEMON_PORTRAIT_BANK = 23,
    ALTERNATE_PORTRAIT_BANK = 35,
    DEMON_PORTRAIT_COUNT = 614,
    ALTERNATE_PORTRAIT_COUNT = 129,
    DEMON_PORTRAIT_OVERRIDE = 1
};

/* Tests whether a demon's portrait or its alternate is loaded. Apocalypse exposes the same
 * operation as an out-of-line function. */
static __inline s32 devilIsTextureLoaded(s32 id, s32 resolve)
{
    s32 bank = DEMON_PORTRAIT_BANK;
    s32 image = id;
    if (resolve) {
        if (id < 0) {
            image = 0;
        } else {
            const NkmBaseRecord *devil = (const NkmBaseRecord *)nkmBaseGetRecord((u16)id);
            if (devil == NULL)
                return 0;
            const NkmEnemyRecord *record = nkmEnemyFindById((u16)id);
            if (record->levelFlags & DEMON_PORTRAIT_OVERRIDE) {
                image = record->portraitId;
                bank = ALTERNATE_PORTRAIT_BANK;
                if (image >= ALTERNATE_PORTRAIT_COUNT)
                    return 0;
            } else {
                image = devil->model + 1;
                if (image >= DEMON_PORTRAIT_COUNT)
                    return 0;
            }
        }
    }
    return asdTMTexTableNodeIsLoaded(bank, image);
}

#endif
