#include "common.h"
#include "shard/W6_W6Match1_CriticalSection.h"

struct CriticalSection;

extern "C" {

extern CriticalSection g_moduleCriticalSection8;
extern void *DAT_005c0a94;

/* Reads the shared work-pointer status while holding its critical section. */
bool FUN_00442280(void)
{
    ScopedCriticalLock lock(g_moduleCriticalSection8);
    return DAT_005c0a94 != NULL;
}

} /* extern "C" */
