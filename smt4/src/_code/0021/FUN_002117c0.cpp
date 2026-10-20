#include "common.h"

extern "C" {

int FUN_002117a0(void);
int FUN_00252334(void);
int FUN_0028a22c(void);
int FUN_002917b8(void);
int FUN_00291944(void);
int asdMemFree(void *ptr);
int jobStop(u32 job, int mode);

extern u32 *DAT_0043da90;

void FUN_002117c0(void)
{
    u32 *block = DAT_0043da90;

    FUN_00252334();
    FUN_0028a22c();
    FUN_00291944();
    FUN_002917b8();
    FUN_002117a0();
    jobStop(*block, 0);
    asdMemFree(block);
    DAT_0043da90 = NULL;
}

} /* extern "C" */
