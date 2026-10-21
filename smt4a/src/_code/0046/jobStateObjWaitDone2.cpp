#include "shard/Shard0046.h"

extern "C" {

extern s32 scrRunOpcodesStub(u32 job);
extern void messageSetMode(s32 value);

/* Once the job reports 2, switches the object to state 4 and runs messageSetMode(0). */
void jobStateObjWaitDone2(JobStateObj *obj)
{
    if (scrRunOpcodesStub(*obj->job) == 2) {
        obj->state = 4;
        obj->unk08 = 0;
        messageSetMode(0);
    }
}

} /* extern "C" */
