#include "shard/Shard0046.h"

extern "C" {

extern s32 FUN_00224880(u32 job);
extern void FUN_0019ea64(s32 value);

/* Once the job reports 2, switches the object to state 4 and runs FUN_0019ea64(0). */
void jobStateObjWaitDone2(JobStateObj *obj)
{
    if (FUN_00224880(*obj->job) == 2) {
        obj->state = 4;
        obj->unk08 = 0;
        FUN_0019ea64(0);
    }
}

} /* extern "C" */
