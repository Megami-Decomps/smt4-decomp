#include "common.h"

extern "C" {

int scrGetArg(int index);
int bustupCutStartSlotTransition(u32 a, u32 b, int c, int d, int e);
extern u32 *jobGetWork(void);

u32 FUN_00310c14(void)
{
    u32 *work;
    u32 a;
    u32 b;

    scrGetArg(0);
    work = jobGetWork();
    a = *work;
    b = scrGetArg(1);
    bustupCutStartSlotTransition(a, b, 1, 1, 1);
    return 1;
}

} /* extern "C" */
