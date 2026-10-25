#include "common.h"
#include "gamedata/Table04Record.h"

extern "C" {

/* Returns whether any of the record's four effect slots holds -5 or -7. */
u32 FUN_004c86ec(u32 id)
{
    Table04Record *record;
    s32 i;

    if (id != 0) {
        record = dataTable04FindById(id);
        if (record != NULL) {
            for (i = 0; i < 4; i++) {
                if (record->effectList.effects[i] == -5 || record->effectList.effects[i] == -7) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

} /* extern "C" */
