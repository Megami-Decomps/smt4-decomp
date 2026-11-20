#include "shard/Shard0038.h"

extern "C" {

extern PairLog *g_uniteEffectWork;
extern u32 dataTableFree(u32 id);
extern void btlTalkBustUpDestroy(void);
extern u32 jobStop(u32 job, u16 arg);
extern void asdMemFree(void *ptr);

/* Tears down the global pair log object. */
void pairLogDestroy(void)
{
    PairLog *log = g_uniteEffectWork;

    dataTableFree(0x25);
    btlTalkBustUpDestroy();
    jobStop(log->job, 0);
    asdMemFree(log);
    g_uniteEffectWork = NULL;
}

} /* extern "C" */
