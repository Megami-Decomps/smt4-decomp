#include "common.h"

extern "C" {

int nodeTreeReleaseItem(u32 item);
extern u32 DAT_00433a58;

void FUN_002cd8d4(void)
{
    nodeTreeReleaseItem(DAT_00433a58);
    DAT_00433a58 = 0;
}

} /* extern "C" */
