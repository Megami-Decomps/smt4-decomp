#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {
extern AsdGxState g_asdGxState;

/* Flips between the two command lists. */
void asdGxCommandListFlip(void)
{
    g_asdGxState.current = 1 - g_asdGxState.current;
}

} /* extern "C" */
