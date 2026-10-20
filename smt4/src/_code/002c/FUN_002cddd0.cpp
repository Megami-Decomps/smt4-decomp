#include "common.h"

extern "C" {

int FUN_00269dc8(void);
int FUN_0028dc68(int a);
int FUN_0028dc98(...);
int FUN_00296934(void);
int FUN_002b8838(int a);
int FUN_002fec80(int a);
extern int FUN_002893d8(void);
extern u32 scrGetArg(void);
extern int FUN_002fec60(void);

u8 FUN_002cddd0(void)
{
    u16 arg;
    int done;

    arg = scrGetArg();
    if (FUN_002893d8() == 0) {
        FUN_0028dc98(1);
        FUN_00269dc8();
        FUN_002fec80(arg);
    }
    done = FUN_002fec60();
    if (done != 0) {
        FUN_00296934();
        FUN_002b8838(0x90);
        FUN_0028dc98(0xffffffff);
        FUN_0028dc68(0);
    }
    return done != 0;
}

} /* extern "C" */
