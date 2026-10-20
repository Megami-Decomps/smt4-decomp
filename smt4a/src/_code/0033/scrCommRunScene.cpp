#include "shard/Shard0033.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern s32 FUN_002deb84(void);
extern void FUN_002c76c0(s32 value);
extern void FUN_002f0c18(void);
extern void FUN_0038b710(u32 scene);
extern s32 stateHolder4IsZero(void);
extern void FUN_0034aae4(void);
extern void sysPlaySe(u32 id);
extern void FUN_002852f0(s32 value);

/* Script command: starts a scene on the first call; returns whether it is running, with end-of-scene cleanup. */
u8 scrCommRunScene(s32 argIndex)
{
    u16 scene = scrGetArg(argIndex);
    s32 running;

    if (FUN_002deb84() == 0) {
        FUN_002c76c0(1);
        FUN_002f0c18();
        FUN_0038b710(scene);
    }
    running = stateHolder4IsZero();
    if (running != 0) {
        FUN_0034aae4();
        sysPlaySe(0x92);
        FUN_002c76c0(-1);
        FUN_002852f0(0);
    }
    return running != 0;
}

} /* extern "C" */
