#include "shard/Shard0037.h"

extern "C" {

extern JobRef *DAT_00589144;
extern void jobStop(u32 job, u16 arg);
extern void FUN_002e3328(JobRef *ref);

void jobRefStopAndFree(void)
{
    jobStop(DAT_00589144->job, 0);
    if (DAT_00589144 != NULL) {
        FUN_002e3328(DAT_00589144);
        DAT_00589144 = NULL;
    }
}

} /* extern "C" */
