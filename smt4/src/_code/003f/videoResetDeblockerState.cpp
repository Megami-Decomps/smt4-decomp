#include "common.h"

struct DeblockerState {
    u32 unk00; // 0x00
    u32 unk04; // 0x04
};

extern "C" {
extern DeblockerState g_mwmofilterDeblocker;
extern u32 g_mwmofilterDeblockerState;

void videoResetDeblockerState(void)
{
    g_mwmofilterDeblocker.unk00 = 0;
    g_mwmofilterDeblocker.unk04 = 0;
}
}
