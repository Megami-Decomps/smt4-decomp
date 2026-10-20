#include "common.h"

extern "C" {

void FUN_002392b8(void);
void FUN_00261984(void);
int FUN_002c2d5c(int arg);

int FUN_002c2d44(void)
{
    FUN_002392b8();
    FUN_00261984();
    return FUN_002c2d5c(-1);
}

} /* extern "C" */
