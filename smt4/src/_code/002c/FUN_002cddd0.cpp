#include "common.h"

extern "C" {

int FUN_00269dc8(void);
int messageSlotSet(int a);
int scrCommMessageSetMode(...);
int FUN_00296934(void);
int buttonHelpSetPreset(int a);
int FUN_002fec80(int a);
extern int scrGetCommandFrame(void);
extern u32 scrGetArg(void);
extern int FUN_002fec60(void);

u8 FUN_002cddd0(void)
{
    u16 arg;
    int done;

    arg = scrGetArg();
    if (scrGetCommandFrame() == 0) {
        scrCommMessageSetMode(1);
        FUN_00269dc8();
        FUN_002fec80(arg);
    }
    done = FUN_002fec60();
    if (done != 0) {
        FUN_00296934();
        buttonHelpSetPreset(0x90);
        scrCommMessageSetMode(0xffffffff);
        messageSlotSet(0);
    }
    return done != 0;
}

} /* extern "C" */
