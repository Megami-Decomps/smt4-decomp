#include "common.h"

extern "C" {

void onlineTimeGetNow(void);

/* Forwards to onlineTimeGetNow. */
void FUN_002ea20c(void)
{
    onlineTimeGetNow();
}

} /* extern "C" */
