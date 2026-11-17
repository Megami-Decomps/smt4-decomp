#include "shard/Shard003D.h"
#include "map/MapIfGlobals.h"

extern "C" {

extern u8 infoWinHasValue(void);
extern void dialogClose(s32 value);
extern u32 jobStop(u32 job, u16 arg);

/* Closes the map interface's dialog when one is shown, then stops the interface's job. */
void jobFlagObjStop(void)
{
    MapIfStateA *obj = g_mapIf.state;

    if (obj->dialogOpen != 0 && infoWinHasValue() != 0) {
        obj->dialogOpen = 0;
        dialogClose(1);
    }
    jobStop(obj->job, 0);
}

} /* extern "C" */
