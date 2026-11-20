#include "shard/CampMenuJobWork.h"
#include "shard/JobWork.h"

extern "C" {

s32 uiSpriteSlideFromSide(void *loader, s32 arg);
u32 FUN_0019d890(u32 group, u32 item);
s32 entryDispatchUpdate(void *fade, s32 arg);

/* Steps the job's open sequence: wait for the loader, then for the fade, then clear the busy flags. */
s32 FUN_0047a1e0(u32 job)
{
    StagedOpenWork *work = (StagedOpenWork *)jobGetWork(job);

    switch (work->state) {
    case 0:
        void *loader = work->loader;
        if (uiSpriteSlideFromSide(loader, 0) != 0) {
            work->state = 1;
            work->flags |= 0x2000;
            work->message = FUN_0019d890(0x2f, 0x45);
        }
        break;
    case 1:
        return 0;
    case 2:
        if (entryDispatchUpdate(work->fade, 1) != 0) {
            work->state = 3;
        }
        break;
    case 3:
        work->flags &= ~0x2000; /* set when the message started */
        work->flags &= ~0x1000;
        break;
    }
    return 0;
}

} /* extern "C" */
