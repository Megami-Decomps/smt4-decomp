#include "common.h"

struct ResetState {
    u32 unk00; // 0x00
    u32 unk04; // 0x04
};

extern "C" {
extern ResetState g_moAllocator;

void videoResetFilterState(void)
{
    g_moAllocator.unk00 = 0;
    g_moAllocator.unk04 = 0;
}
}
