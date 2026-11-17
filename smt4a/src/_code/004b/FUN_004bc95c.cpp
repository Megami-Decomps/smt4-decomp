#include "gamedata/MapSaveBlockA.h"
#include "gamedata/MapSystemTable.h"
#include "gamedata/GameFlags.h"

extern "C" {

s32 gameFlagIsSet(s32 flag);

void gameDataSetEntryEnabled(s32 id, u32 arg1, bool enabled);

/* Sets the game flag data table 2E ties to `id` (if it is not set yet), then forwards to
 * gameDataSetEntryEnabled with the enabled flag set (the function that follows). */
void FUN_004bc95c(s32 id, u32 arg1)
{
    s32 index = 0;

    if (dataTable2ECount() > 0) {
        for (;;) {
            MapSystemMapRecord *entry = dataTable2EGetEntry(index);

            if (entry->mapId == -1) {
                break;
            }
            if (entry->mapId == id) {
                if (entry->gameFlag != 0 && gameFlagIsSet(entry->gameFlag) == 0) {
                    gameFlagSetValue(entry->gameFlag, 1, 1);
                }
                break;
            }
            index++;
            if (dataTable2ECount() <= index) {
                break;
            }
        }
    }
    gameFlagsGetBlock();
    gameDataSetEntryEnabled(id, arg1, true);
}

} /* extern "C" */
