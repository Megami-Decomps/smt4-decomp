#include "common.h"

extern "C" {

int FUN_00270028(int a);
int FUN_002b8e84(int id);
int FUN_0031eae4(void);
extern int FUN_002893d8(void);

u8 FUN_00316eb4(void)
{
    if (FUN_002893d8() == 0) {
        FUN_0031eae4();
        FUN_00270028(3);
        return 0;
    }
    if (FUN_002893d8() == 1) {
        FUN_002b8e84(0x1000184);
        FUN_00270028(1);
        return 0;
    }
    if (FUN_002893d8() < 3) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
