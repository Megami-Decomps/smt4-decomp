#include "shard/Shard003D.h"

extern "C" {

extern Sub68Owner *g_naviMain;
extern void FUN_00168980(void);
extern void FUN_00493154(void);
extern void campCommonBgRelease(void);
extern void campButtonHelpRelease(void);
extern u32 jobStop(u32 job, u16 arg);
extern void texOwner1480Free(u8 *sub);
extern void asdMemFree(void *ptr);

/* Tears down the sub-object holder: runs the cleanup calls, stops its job and frees it. */
void sub68OwnerDestroyAll(void)
{
    FUN_00168980();
    FUN_00493154();
    campCommonBgRelease();
    campButtonHelpRelease();
    if (g_naviMain != NULL) {
        jobStop(g_naviMain->job, 0);
        texOwner1480Free(g_naviMain->sub);
        asdMemFree(g_naviMain);
        g_naviMain = NULL;
    }
}

} /* extern "C" */
