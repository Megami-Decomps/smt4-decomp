#include "shard/Shard0033.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern s32 scrGetCommandFrame(void);
extern void scrCommMessageSetMode(s32 value);
extern void FUN_002f0c18(void);
extern void FUN_0038b710(u32 scene);
extern s32 stateHolder4IsZero(void);
extern void FUN_0034aae4(void);
extern void sysPlaySe(u32 id);
extern void messageSlotSet(s32 value);

/* Script command: starts a scene on the first call; returns whether it is running, with end-of-scene cleanup. */
u8 scrCommRunScene(void)
{
    u16 scene = scrGetArg(0);
    s32 running;

    if (scrGetCommandFrame() == 0) {
        scrCommMessageSetMode(1);
        FUN_002f0c18();
        FUN_0038b710(scene);
    }
    running = stateHolder4IsZero();
    if (running != 0) {
        FUN_0034aae4();
        sysPlaySe(0x92);
        scrCommMessageSetMode(-1);
        messageSlotSet(0);
    }
    return running != 0;
}

} /* extern "C" */
