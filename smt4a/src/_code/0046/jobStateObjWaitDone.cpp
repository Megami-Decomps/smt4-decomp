#include "shard/Shard0046.h"

extern "C" {

extern s32 scrRunOpcodesStub(u32 job);

/* Once the job reports 2, switches the object to state 4. */
void jobStateObjWaitDone(JobStateObj *obj)
{
    if (scrRunOpcodesStub(*obj->job) == 2) {
        obj->state = 4;
        obj->unk08 = 0;
    }
}

} /* extern "C" */
