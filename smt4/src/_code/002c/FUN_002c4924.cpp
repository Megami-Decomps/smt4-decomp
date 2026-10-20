#include "common.h"

extern "C" {

extern void *FUN_0023d2ec(void);
extern void memClear(void *block, s32 size);
void FUN_002c4924(void)
{
    memClear(FUN_0023d2ec(), 9088);
}

} /* extern "C" */
