#include "common.h"
#include "shard/W6_W6Match5_DisplayMode.h"

extern "C" {

void globalCriticalSectionEnter(void);

/* Forwards to globalCriticalSectionEnter, the function that follows it. */
void globalCriticalSectionEnterForward(void)
{
    globalCriticalSectionEnter();
}

} /* extern "C" */
