#include "shard/Shard003D.h"

extern "C" {

extern Sub68Owner *g_naviMain;
extern void FUN_00493154(void);
extern u32 jobStop(u32 job, u16 arg);
extern void texOwner1480Free(u8 *sub);
extern void asdMemFree(void *ptr);

/* Tears down the sub-object holder: stops its job and frees it. */
void sub68OwnerDestroy(void)
{
    FUN_00493154();
    if (g_naviMain != NULL) {
        jobStop(g_naviMain->job, 0);
        texOwner1480Free(g_naviMain->sub);
        asdMemFree(g_naviMain);
        g_naviMain = NULL;
    }
}

} /* extern "C" */
