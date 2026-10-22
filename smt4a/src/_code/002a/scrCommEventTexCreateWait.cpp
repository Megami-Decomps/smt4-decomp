#include "common.h"

extern "C" {

/* The work block of an event texture job: the texture table entry it shows. */
typedef struct EventTexJobWork {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ u32 table;
    /* 0x44 */ u32 node;
} EventTexJobWork;

u32 scrGetArg(u32 index);
s32 scrGetCommandFrame(void);
u32 eventTexGetCurrent(void);
void eventTexSetCurrent(u32 handle);
s32 jobIsValid(u32 handle);
EventTexJobWork *jobGetWork(u32 handle);
s32 asdTMTexTableNodeIsLoaded(u32 table, u32 node);
s32 FUN_0039af04(void);
u32 FUN_003b6820(u32 id, s32 mode, u32 arg);
void FUN_0036f298(u32 handle);

/* Script command: on its first frame creates the event texture job from arguments 0 and 1 and
 * makes it current; then waits (returns 0) until the current job's texture is loaded. */
u32 scrCommEventTexCreateWait(void)
{
    u32 id = scrGetArg(0);
    u32 arg = scrGetArg(1);

    if (scrGetCommandFrame() != 0) {
        u32 handle = eventTexGetCurrent();
        if (jobIsValid(handle) != 0) {
            EventTexJobWork *work = jobGetWork(handle);
            return asdTMTexTableNodeIsLoaded(work->table, work->node) != 0;
        }
        return 1;
    }
    if (FUN_0039af04() != 0) {
        u32 handle = FUN_003b6820(id, 1, arg);
        if (handle != 0) {
            eventTexSetCurrent(handle);
            FUN_0036f298(handle);
            return 0;
        }
    }
    return 1;
}

} /* extern "C" */
