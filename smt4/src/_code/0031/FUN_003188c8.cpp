#include "common.h"

extern "C" {

int FUN_00223b0c(void);
int scrSetResult(u32 result);
extern u32 FUN_003bf44c(void);

u32 FUN_003188c8(void)
{
    u32 value = FUN_003bf44c();

    FUN_00223b0c();
    scrSetResult(value);
    return 1;
}

} /* extern "C" */
