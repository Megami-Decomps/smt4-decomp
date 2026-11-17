#include "map/MapIfGlobals.h"

extern "C" {

// Records of the listed types that are active and in state 8 are switched to state 6.
void FUN_00378a1c(void)
{
    s32 i = 0;
    MapIfStateA *mapIf = g_mapIf.state;
    for (; i < 128; i++) {
        MapIfRecord *record = &mapIf->records[i];
        if (record->active != 0) {
            if (record->category == 0x1d || record->category == 0x31 || record->category == 0x1e || record->category == 0x1f || record->category == 0x30 || record->category == 0x22 ||
                record->category == 0x23) {
                if (record->state == 8) {
                    record->state = 6;
                }
            }
        }
    }
}

} /* extern "C" */
