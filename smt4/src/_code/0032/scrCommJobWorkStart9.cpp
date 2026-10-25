/* NON_MATCHING: -O2 preserves argument registers but omits retail's native NOP at0x3c; default rematerializes command9, changes the save set and leaves two NOPs. */
#include "common.h"
#include "script/ScriptArgs.h"
#include "util/ScrGetCommandFrame.h"
#include "util/ScrGetCommandFrame.h"
#include "util/ScrGetCommandFrame.h"

extern "C" {
s32 scrGetArg(s32 index);
u32 jobGetWork(u32 job);
void FUN_002a880c(u32 work, u32 command, s32 frames);

static __inline void startJobWorkCommand(u32 job, u32 command, s32 frames)
{
    FUN_002a880c(jobGetWork(job), command, frames);
}

u32 scrCommJobWorkStart9(void)
{
    s32 frames = scrGetArg(1);
    switch (scrGetCommandFrame()) {
    case 0:
        startJobWorkCommand((u32)scrGetArg(0), 9, frames);
        break;
    default:
        if (scrGetCommandFrame() == frames) {
            return 1;
        }
        break;
    }
    return 0;
}

} /* extern "C" */
