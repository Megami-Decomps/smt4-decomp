#include "shard/NaviMain.h"

extern "C" {

int FUN_00291730(u32 *block);
int FUN_002917b8(void);
int FUN_00291944(void);
int FUN_00291998(void);
int FUN_002b827c(int a);
int asdMemFree(void *ptr);
int jobStop(u32 job, int mode);

void FUN_0032b36c(void)
{
    FUN_002b827c(3);
    FUN_00291998();
    FUN_00291944();
    FUN_002917b8();
    if (DAT_0044cdf0 != NULL) {
        jobStop(DAT_0044cdf0->job, 0);
        FUN_00291730(DAT_0044cdf0->unk00040);
        asdMemFree(DAT_0044cdf0);
        DAT_0044cdf0 = NULL;
    }
}

} /* extern "C" */
