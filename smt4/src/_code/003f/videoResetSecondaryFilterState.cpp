#include "common.h"

struct ResetState {
    u32 first;  // 0x00
    u32 second; // 0x04
};

extern "C" {
extern ResetState g_moAllocationHooks;
extern u32 DAT_0044e934;

void videoResetSecondaryFilterState(void)
{
    g_moAllocationHooks.first = 0;
    g_moAllocationHooks.second = 0;
}
}
