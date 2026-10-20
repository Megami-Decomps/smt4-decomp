#include "common.h"

extern "C" {

extern int FUN_0025c05c(void);
extern u8 DAT_00447620[];

u8 FUN_001e2954(void)
{
    int index = FUN_0025c05c();

    return DAT_00447620[index];
}

} /* extern "C" */
