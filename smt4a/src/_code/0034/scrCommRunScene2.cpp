#include "shard/Shard0034.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void FUN_001801a4(void);
extern s32 FUN_002deb84(void);
extern void FUN_002c52e0(s32 value);
extern void addStepCostTotal(u32 scene);
extern s32 FUN_00162880(void);
extern void FUN_003315c4(void);

/* Script command: starts the scene on the first call, then reports whether it is still running. */
u8 scrCommRunScene2(s32 argIndex)
{
    u32 scene = scrGetArg(argIndex);
    s32 running;

    FUN_001801a4();
    if (FUN_002deb84() == 0) {
        FUN_002c52e0(3);
        addStepCostTotal(scene);
    }
    running = FUN_00162880();
    if (running != 0) {
        FUN_003315c4();
    }
    return running != 0;
}

} /* extern "C" */
