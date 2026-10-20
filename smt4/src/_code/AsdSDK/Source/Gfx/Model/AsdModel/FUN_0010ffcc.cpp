#include "common.h"

extern "C" {

extern void FUN_002c1398(void);
extern u32 FUN_0010ffdc(void);

/* Runs FUN_002c1398, then registers the callbacks (FUN_0010ffdc). */
u32 FUN_0010ffcc(void)
{
    FUN_002c1398();
    return FUN_0010ffdc();
}

} /* extern "C" */
