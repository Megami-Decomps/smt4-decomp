#include "shard/Shard0034.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void gameGetPlayerData(void);
extern s32 scrGetCommandFrame(void);
extern void resultCreate(s32 value);
extern void addStepCostTotal(u32 scene);
extern s32 engineCleanupIsDone(void);
extern void uniteReleaseExit(void);

/* Script command: starts the scene on the first call, then reports whether it is still running. */
u8 scrCommRunScene2(s32 argIndex)
{
    u32 scene = scrGetArg(argIndex);
    s32 running;

    gameGetPlayerData();
    if (scrGetCommandFrame() == 0) {
        resultCreate(3);
        addStepCostTotal(scene);
    }
    running = engineCleanupIsDone();
    if (running != 0) {
        uniteReleaseExit();
    }
    return running != 0;
}

} /* extern "C" */
