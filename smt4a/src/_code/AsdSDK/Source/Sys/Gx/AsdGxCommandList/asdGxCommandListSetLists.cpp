/* NON_MATCHING: armcc emits a separate g_asdGxState pool reference instead of retail's command-list-relative base (same-TU data: state sits 12 bytes below the lists). */
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {
extern AsdGxState g_asdGxState;
extern u32 g_asdGxCommandLists[2];

/* Installs the two nngx command lists and starts recording into the first. */
void asdGxCommandListSetLists(const u32 *cmdLists)
{
    g_asdGxState.current = 0;
    g_asdGxCommandLists[0] = cmdLists[0];
    g_asdGxCommandLists[1] = cmdLists[1];
}

} /* extern "C" */
