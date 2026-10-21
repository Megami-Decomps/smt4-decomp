#include "common.h"

extern "C" {

void listRefreshDirtyRows(u32 *arg0);

/* Forwards to listRefreshDirtyRows, the function that follows it. */
void FUN_0049597c(u32 *arg0)
{
    listRefreshDirtyRows(arg0);
}

} /* extern "C" */
