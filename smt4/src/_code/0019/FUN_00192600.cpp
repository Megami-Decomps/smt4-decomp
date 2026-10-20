#include "shard/NaviMain.h"

extern "C" {

int FUN_00291730(u32 *block);
int buttonHelpRelease(void);
int uiFadeRelease(void);
int FUN_00291998(void);
int FUN_002b827c(void);
int asdMemFree(void *ptr);
int jobStop(u32 job, int mode);

void FUN_00192600(void)
{
    FUN_002b827c();
    FUN_00291998();
    uiFadeRelease();
    buttonHelpRelease();
    if (g_naviMain != NULL) {
        jobStop(g_naviMain->job, 0);
        FUN_00291730(g_naviMain->unk00040);
        asdMemFree(g_naviMain);
        g_naviMain = NULL;
    }
}

} /* extern "C" */
