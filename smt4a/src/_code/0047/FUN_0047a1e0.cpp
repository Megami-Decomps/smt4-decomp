/* NON_MATCHING: retail places case 3's flag clear after the return and shares case 0's final store; the loader call's argument setup is scheduled differently. */
#include "shard/CampMenuJobWork.h"
#include "shard/JobWork.h"

extern "C" {

s32 FUN_00167458(void *loader, s32 arg);
u32 FUN_0019d890(u32 group, u32 item);
s32 entryDispatchUpdate(void *fade, s32 arg);

/* Steps the job's open sequence: wait for the loader, then for the fade, then clear the busy flags. */
s32 FUN_0047a1e0(u32 job)
{
    StagedOpenWork *work = (StagedOpenWork *)jobGetWork(job);

    switch (work->state) {
    case 0:
        if (FUN_00167458(work->loader, 0)) {
            work->state = 1;
            work->flags |= 0x2000;
            work->message = FUN_0019d890(0x2f, 0x45);
        }
        break;
    case 1:
        break;
    case 2:
        if (entryDispatchUpdate(work->fade, 1)) {
            work->state = 3;
        }
        break;
    case 3:
        work->flags &= ~0x3000;
        break;
    }
    return 0;
}

} /* extern "C" */
