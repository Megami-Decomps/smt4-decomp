#include "common.h"

extern "C" {

void listRefreshDirtyRows(u32 *arg0);

/* Forwards to listRefreshDirtyRows, the function that follows it. */
void shopRefreshChildDirtyRows(u32 *arg0)
{
    listRefreshDirtyRows(arg0);
}

} /* extern "C" */
