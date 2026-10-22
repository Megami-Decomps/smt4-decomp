#include "shard/GlobalBlocks.h"

extern "C" SubsystemDefaults g_accelerometerState;
extern "C" void memClear(void *memory, u32 size);

/* Restore the shared subsystem defaults. */
extern "C" bool accelerometerInitialize(void)
{
    memClear(&g_accelerometerState, sizeof(g_accelerometerState));
    g_accelerometerState.state = 0;
    g_accelerometerState.capacity = 64;
    g_accelerometerState.enabled = 1;
    g_accelerometerState.count = 1;
    return true;
}
