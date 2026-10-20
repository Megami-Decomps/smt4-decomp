#include "common.h"

extern "C" {

int FUN_00270028(int a);
int eventQueueAddUnique(int id);
int FUN_0031eae4(void);
extern int scrGetCommandFrame(void);

u8 FUN_00316eb4(void)
{
    if (scrGetCommandFrame() == 0) {
        FUN_0031eae4();
        FUN_00270028(3);
        return 0;
    }
    if (scrGetCommandFrame() == 1) {
        eventQueueAddUnique(0x1000184);
        FUN_00270028(1);
        return 0;
    }
    if (scrGetCommandFrame() < 3) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
