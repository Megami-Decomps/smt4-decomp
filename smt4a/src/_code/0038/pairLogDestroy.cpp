#include "shard/Shard0038.h"

extern "C" {

extern PairLog *DAT_0057f2c4;
extern u32 dataTableFree(u32 id);
extern void btlTalkBustUpDestroy(void);
extern u32 jobStop(u32 job, u16 arg);
extern void asdMemFree(void *ptr);

/* Tears down the global pair log object. */
void pairLogDestroy(void)
{
    PairLog *log = DAT_0057f2c4;

    dataTableFree(0x25);
    btlTalkBustUpDestroy();
    jobStop(log->job, 0);
    asdMemFree(log);
    DAT_0057f2c4 = NULL;
}

} /* extern "C" */
