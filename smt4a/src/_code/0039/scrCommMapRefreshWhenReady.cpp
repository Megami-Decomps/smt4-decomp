#include "shard/Shard0039.h"

extern "C" {

extern u32 scrGetCommandFrame(void);
extern void FUN_0031cea0(s8 value);
extern u32 jobRecordWaitRelease(void);
extern s32 mapMainIsBusy(void);
extern s32 lmapMainIsRunning(void);
extern void FUN_00303a48(void);
extern u32 FUN_002b4cb0(void);
extern void FUN_00301830(void);

/* Script command: on the first frame starts FUN_0031cea0(3); then, once jobRecordWaitRelease allows it, runs the map refresh. */
u32 scrCommMapRefreshWhenReady(void)
{
    if (scrGetCommandFrame() == 0) {
        FUN_0031cea0(3);
    }
    if (jobRecordWaitRelease() != 0) {
        if (mapMainIsBusy() != 0 || lmapMainIsRunning() != 0) {
            FUN_00303a48();
        } else if (FUN_002b4cb0() != 0) {
            FUN_00301830();
        }
        return 1;
    }
    return 0;
}

} /* extern "C" */
