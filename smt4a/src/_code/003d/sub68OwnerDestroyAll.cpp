#include "shard/Shard003D.h"

extern "C" {

extern Sub68Owner *DAT_00587f28;
extern void FUN_00168980(void);
extern void FUN_00493154(void);
extern void FUN_0035b304(void);
extern void FUN_0037b450(void);
extern u32 jobStop(u32 job, u16 arg);
extern void texOwner1480Free(u8 *sub);
extern void asdMemFree(void *ptr);

/* Tears down the sub-object holder: runs the cleanup calls, stops its job and frees it. */
void sub68OwnerDestroyAll(void)
{
    FUN_00168980();
    FUN_00493154();
    FUN_0035b304();
    FUN_0037b450();
    if (DAT_00587f28 != NULL) {
        jobStop(DAT_00587f28->job, 0);
        texOwner1480Free(DAT_00587f28->sub);
        asdMemFree(DAT_00587f28);
        DAT_00587f28 = NULL;
    }
}

} /* extern "C" */
