#include "map/MapIfGlobals.h"

extern "C" {

int gameFlagsValueGet(int id);
u8 lmapGetSpawnIndex(void);

/* Queues command `id` with `arg`, unless it is suppressed by the current state (id 0x24, or a blocking condition on id / 0x29). */
void mapIfQueueNotice(int id, s32 arg)
{
    MapIfStateA *globals = g_mapIf.state;

    if (id == 0x24) {
        return;
    }
    if (lmapGetSpawnIndex() == 1 && gameFlagsValueGet(0x29) == 1) {
        return;
    }
    if (id != 0x18 && id < 100 && gameFlagsValueGet(id) == 1) {
        return;
    }
    globals->notice.state = 1;
    globals->notice.frame = 0;
    globals->notice.id = id;
    globals->notice.arg = arg;
}

} /* extern "C" */
