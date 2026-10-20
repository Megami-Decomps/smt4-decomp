#include "shard/NaviMain.h"

extern "C" {

int FUN_0039bcdc(u32 *block);

void FUN_002eb184(void)
{
    if (DAT_0044cdf0 != NULL) {
        FUN_0039bcdc(DAT_0044cdf0->unk00040);
        return;
    }
}

} /* extern "C" */
