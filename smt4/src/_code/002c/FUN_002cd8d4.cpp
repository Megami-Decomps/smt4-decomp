#include "common.h"

extern "C" {

int FUN_002916ac(u32 item);
extern u32 DAT_00433a58;

void FUN_002cd8d4(void)
{
    FUN_002916ac(DAT_00433a58);
    DAT_00433a58 = 0;
}

} /* extern "C" */
