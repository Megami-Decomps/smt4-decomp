#include "common.h"

extern "C" {

int frameTexApplyMode(int a);
int FUN_00275dec(void);
int messageSlotSet(int a);
int scrCommMessageSetMode(...);
int eventQueueAddUnique(int id);
extern int scrGetCommandFrame(void);

u8 FUN_002fb4fc(void)
{
    int step;

    step = scrGetCommandFrame();
    if (step == 0) {
        scrCommMessageSetMode(1);
        FUN_00275dec();
        frameTexApplyMode(3);
        return 0;
    }
    step = scrGetCommandFrame();
    if (step != 1) {
        step = scrGetCommandFrame();
        if (step >= 3) {
            scrCommMessageSetMode(0xffffffff);
            messageSlotSet(0);
        }
        return step >= 3;
    }
    eventQueueAddUnique(0x1000184);
    frameTexApplyMode(1);
    return 0;
}

} /* extern "C" */
