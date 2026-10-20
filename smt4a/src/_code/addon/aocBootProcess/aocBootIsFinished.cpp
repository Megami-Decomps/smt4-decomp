#include "addon/aocBootProcess.h"

extern "C" {

extern AocBootGlobals g_aocBoot;

/* True once the boot process has finished. */
bool aocBootIsFinished(void)
{
    return g_aocBoot.finished != 0;
}

} /* extern "C" */
