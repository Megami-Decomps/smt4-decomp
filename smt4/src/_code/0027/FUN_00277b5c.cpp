#include "map/MapIfGlobals.h"

extern "C" {

int gameMapBlockGetValue(int id);
u8 mapGetDepartureIndex(void);

/* Queues command `id` with `arg`, unless it is suppressed by the current state (id 0x24, or a blocking condition on id / 0x29). */
void FUN_00277b5c(int id, u16 arg)
{
    MapIfState *globals = g_mapIf.state;

    if (id == 0x24) {
        return;
    }
    if (mapGetDepartureIndex() == 1 && gameMapBlockGetValue(0x29) == 1) {
        return;
    }
    if (id != 0x18 && id < 100 && gameMapBlockGetValue(id) == 1) {
        return;
    }
    globals->notice.state = 1;
    globals->notice.frame = 0;
    globals->notice.id = id;
    globals->notice.arg = arg;
}

} /* extern "C" */
