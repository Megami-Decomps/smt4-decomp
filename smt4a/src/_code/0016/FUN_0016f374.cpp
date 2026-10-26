#include "common.h"

extern "C" {

extern void FUN_001afd94(void);
extern u32 FUN_0016f384(void);

/* Runs FUN_001afd94, then registers the callbacks (FUN_0016f384). */
u32 FUN_0016f374(void)
{
    FUN_001afd94();
    return FUN_0016f384();
}

} /* extern "C" */
