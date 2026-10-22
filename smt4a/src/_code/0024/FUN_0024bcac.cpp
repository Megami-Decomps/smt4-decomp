#include "battle/btlHelp.h"

extern "C" {

void *jobGetWork(void *job);
extern BtlHelpA *g_btlHelp;
void FUN_0023173c(void *object);
void FUN_0024bcac(void *job)
{
    jobGetWork(job);
    if (g_btlHelp != NULL) {
        FUN_0023173c(g_btlHelp);
    }
}

} /* extern "C" */
