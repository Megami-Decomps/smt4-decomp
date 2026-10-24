#include "common.h"

extern "C" {

void onlineTimeGetNow(void);

/* Forwards to onlineTimeGetNow. */
void _ZN15OnlineTimestampC1Ev(void)
{
    onlineTimeGetNow();
}

} /* extern "C" */
