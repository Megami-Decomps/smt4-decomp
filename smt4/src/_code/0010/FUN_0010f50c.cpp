/* NON_MATCHING: instruction selection/order differs: retail push {r4, r5, r6, lr}; compiler push {r4, lr}. */
#include "common.h"

struct CriticalSection;

extern "C" {

extern CriticalSection g_archiveModuleCriticalSection;
extern void *DAT_00465600;
extern void nn_os_CriticalSection_Enter(CriticalSection *section);
extern void nn_os_CriticalSection_Leave(CriticalSection *section);

/* Reads the shared work-pointer status while holding its critical section. */
bool FUN_0010f50c(void)
{
    nn_os_CriticalSection_Enter(&g_archiveModuleCriticalSection);
    bool available = DAT_00465600 != NULL;
    nn_os_CriticalSection_Leave(&g_archiveModuleCriticalSection);
    return available;
}

} /* extern "C" */