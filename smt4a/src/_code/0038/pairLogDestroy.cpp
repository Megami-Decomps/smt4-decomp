#include "shard/Shard0038.h"

extern "C" {

extern PairLog *DAT_0057f2c4;
extern u32 FUN_001add24(u32 id);
extern void FUN_00321744(void);
extern u32 jobStop(u32 job, u16 arg);
extern void asdMemFree(void *ptr);

/* Tears down the global pair log object. */
void pairLogDestroy(void)
{
    PairLog *log = DAT_0057f2c4;

    FUN_001add24(0x25);
    FUN_00321744();
    jobStop(log->job, 0);
    asdMemFree(log);
    DAT_0057f2c4 = NULL;
}

} /* extern "C" */
