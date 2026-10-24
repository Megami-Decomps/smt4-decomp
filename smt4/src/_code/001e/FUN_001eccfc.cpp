#include "common.h"

extern "C" {

int FUN_002123dc(void);
int commonBgReset(void);
int buttonHelpResetSlots(void);
int messageSlotSet(int a);
int scrCommMessageSetMode(...);
int commonBgCreate(void);
extern int scrGetCommandFrame(void);
extern int FUN_002ed5bc(void);

u32 FUN_001eccfc(void)
{
    scrCommMessageSetMode(1);
    if (scrGetCommandFrame() != 0) {
        if (FUN_002ed5bc() != 0) {
            FUN_002123dc();
            scrCommMessageSetMode(0xffffffff);
            messageSlotSet(0);
            return 1;
        }
    } else {
        buttonHelpResetSlots();
        commonBgReset();
        commonBgCreate();
    }
    return 0;
}

} /* extern "C" */
