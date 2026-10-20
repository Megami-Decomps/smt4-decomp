#include "common.h"

extern "C" {

int FUN_00270028(int a);
int FUN_00275dec(void);
int messageSlotSet(int a);
int FUN_0028dc98(...);
int eventQueueAddUnique(int id);
extern int scrGetCommandFrame(void);

u8 FUN_002fb4fc(void)
{
    int step;

    step = scrGetCommandFrame();
    if (step == 0) {
        FUN_0028dc98(1);
        FUN_00275dec();
        FUN_00270028(3);
        return 0;
    }
    step = scrGetCommandFrame();
    if (step != 1) {
        step = scrGetCommandFrame();
        if (step >= 3) {
            FUN_0028dc98(0xffffffff);
            messageSlotSet(0);
        }
        return step >= 3;
    }
    eventQueueAddUnique(0x1000184);
    FUN_00270028(1);
    return 0;
}

} /* extern "C" */
