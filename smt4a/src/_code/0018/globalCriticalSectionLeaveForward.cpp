#include "common.h"

extern "C" {

void globalCriticalSectionLeave(void);

/* Forwards to globalCriticalSectionLeave, the function that follows it. */
void globalCriticalSectionLeaveForward(void)
{
    globalCriticalSectionLeave();
}

} /* extern "C" */
