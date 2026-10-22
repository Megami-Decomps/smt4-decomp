#include "common.h"

extern "C" {

int frameTexApplyMode(int a);
int eventQueueAddUnique(int id);
int frameTexInitActive(void);
extern int scrGetCommandFrame(void);

u8 FUN_00316eb4(void)
{
    if (scrGetCommandFrame() == 0) {
        frameTexInitActive();
        frameTexApplyMode(3);
        return 0;
    }
    if (scrGetCommandFrame() == 1) {
        eventQueueAddUnique(0x1000184);
        frameTexApplyMode(1);
        return 0;
    }
    if (scrGetCommandFrame() < 3) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
