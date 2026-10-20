#include "battle/btlTargetSelect.h"

extern "C" {

void asdMemFree(void *block);
BtlTargetSelect *jobGetWork(u32 job);

extern BtlTargetSelect *g_btlTargetSelect;

/* Destroy callback of the target selection: destroys its two UI objects and frees it. */
void btlTargetSelectDestroy(u32 job)
{
    BtlTargetSelect *select = jobGetWork(job);

    if (select->secondary != NULL) {
        select->secondary->vtable[1](select->secondary);
    }
    if (select->primary != NULL) {
        select->primary->vtable[1](select->primary);
    }
    asdMemFree(select);
    g_btlTargetSelect = NULL;
}

} /* extern "C" */
