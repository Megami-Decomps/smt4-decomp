#include "common.h"

extern "C" {

void globalCriticalSectionEnter(void);

/* Forwards to globalCriticalSectionEnter, the function that follows it. */
void globalCriticalSectionEnterForward(void)
{
    globalCriticalSectionEnter();
}

} /* extern "C" */
