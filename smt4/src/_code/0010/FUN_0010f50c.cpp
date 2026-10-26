#include "common.h"
#include "shard/W6_W6Match1_CriticalSection.h"
#include "code/Code0010_Smt4.h"

struct CriticalSection;

extern "C" {

extern CriticalSection g_archiveModuleCriticalSection;
extern void *DAT_00465600;

/* Reads the shared work-pointer status while holding its critical section. */
bool FUN_0010f50c(void)
{
    ScopedCriticalLock lock(g_archiveModuleCriticalSection);
    return DAT_00465600 != NULL;
}

} /* extern "C" */
