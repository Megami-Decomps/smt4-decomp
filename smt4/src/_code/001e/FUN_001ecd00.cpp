#include "common.h"

extern "C" {

int FUN_002123dc(void);
int FUN_0025a0e0(void);
int FUN_0026a704(void);
int FUN_0028dc68(int a);
int FUN_0028dc98(...);
int FUN_002d7bb0(void);
extern int FUN_002893d8(void);
extern int FUN_002ed5bc(void);

u32 FUN_001ecd00(void)
{
    FUN_0028dc98();
    if (FUN_002893d8() != 0) {
        if (FUN_002ed5bc() != 0) {
            FUN_002123dc();
            FUN_0028dc98(0xffffffff);
            FUN_0028dc68(0);
            return 1;
        }
    } else {
        FUN_0026a704();
        FUN_0025a0e0();
        FUN_002d7bb0();
    }
    return 0;
}

} /* extern "C" */
