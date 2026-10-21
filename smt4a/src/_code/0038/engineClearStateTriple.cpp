#include "common.h"

extern "C" {

extern u32 g_lazyScriptState[3];

void engineClearStateTriple(void)
{
    g_lazyScriptState[0] = 0;
    g_lazyScriptState[1] = 0;
    g_lazyScriptState[2] = 0;
}

} /* extern "C" */
