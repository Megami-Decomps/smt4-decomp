#include "shard/NaviMain.h"

extern "C" {

int FUN_00291730(u32 *block);
int asdMemFree(void *ptr);
extern int jobFind(u32 job);

/* Returns 1 while the navi job is running (or no close was requested); otherwise frees the state and returns 0. */
u32 NaviMain_CheckClose(void)
{
    NaviMain *navi = DAT_0044cdf0;

    if (DAT_0044cdf0 != NULL) {
        if ((jobFind(DAT_0044cdf0->job) != 0) || (navi->closeRequested == 0)) {
            return 1;
        }
        if (DAT_0044cdf0 != NULL) {
            FUN_00291730(DAT_0044cdf0->unk00040);
            asdMemFree(DAT_0044cdf0);
            DAT_0044cdf0 = NULL;
        }
    }
    return 0;
}

} /* extern "C" */
