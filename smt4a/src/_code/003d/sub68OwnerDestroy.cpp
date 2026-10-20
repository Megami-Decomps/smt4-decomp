#include "shard/Shard003D.h"

extern "C" {

extern Sub68Owner *DAT_00587f28;
extern void FUN_00493154(void);
extern u32 jobStop(u32 job, u16 arg);
extern void texOwner1480Free(u8 *sub);
extern void asdMemFree(void *ptr);

/* Tears down the sub-object holder: stops its job and frees it. */
void sub68OwnerDestroy(void)
{
    FUN_00493154();
    if (DAT_00587f28 != NULL) {
        jobStop(DAT_00587f28->job, 0);
        texOwner1480Free(DAT_00587f28->sub);
        asdMemFree(DAT_00587f28);
        DAT_00587f28 = NULL;
    }
}

} /* extern "C" */
