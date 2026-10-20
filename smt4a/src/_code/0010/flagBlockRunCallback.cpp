/* NON_MATCHING: retail loads the callback pointer into r1 (r0 stays free); built uses r0. */
#include "sys/FlagBlock.h"

extern "C" {

int asdOperatorNewD(void);

/* Runs the global callback when one is installed, otherwise the default handler. */
void flagBlockRunCallback(void)
{
    if (g_flagBlock.callback != NULL) {
        g_flagBlock.callback();
        return;
    }
    asdOperatorNewD();
}

} /* extern "C" */
