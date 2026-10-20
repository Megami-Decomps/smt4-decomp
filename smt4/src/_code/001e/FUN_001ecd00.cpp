#include "common.h"

extern "C" {

int FUN_002123dc(void);
int commonBgReset(void);
int buttonHelpResetSlots(void);
int messageSlotSet(int a);
int FUN_0028dc98(...);
int commonBgCreate(void);
extern int scrGetCommandFrame(void);
extern int FUN_002ed5bc(void);

u32 FUN_001ecd00(void)
{
    FUN_0028dc98();
    if (scrGetCommandFrame() != 0) {
        if (FUN_002ed5bc() != 0) {
            FUN_002123dc();
            FUN_0028dc98(0xffffffff);
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
