#include "common.h"

extern "C" {

int FUN_00270028(int a);
int FUN_00275dec(void);
int FUN_0028dc68(int a);
int FUN_0028dc98(...);
int FUN_002b8e84(int id);
extern int FUN_002893d8(void);

u8 FUN_002fb4fc(void)
{
    int step;

    step = FUN_002893d8();
    if (step == 0) {
        FUN_0028dc98(1);
        FUN_00275dec();
        FUN_00270028(3);
        return 0;
    }
    step = FUN_002893d8();
    if (step != 1) {
        step = FUN_002893d8();
        if (step >= 3) {
            FUN_0028dc98(0xffffffff);
            FUN_0028dc68(0);
        }
        return step >= 3;
    }
    FUN_002b8e84(0x1000184);
    FUN_00270028(1);
    return 0;
}

} /* extern "C" */
