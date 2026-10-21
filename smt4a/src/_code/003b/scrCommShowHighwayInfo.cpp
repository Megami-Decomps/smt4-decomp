#include "shard/W5_W5Match7_ResourceHandles.h"

struct HighwayInfoWork {
    /* 0x000 */ u8 unk000[0x5d4];
    /* 0x5D4 */ u8 active;
};

extern "C" {
u32 scrGetArg(u32 index);
void newHighwayInfoCreate(u32 topic);

// Start the highway-info display once, then wait for it to close.
u8 scrCommShowHighwayInfo(void)
{
    if (g_engineResourceHandles.operationActive == 0) {
        g_engineResourceHandles.operationActive = 1;
        newHighwayInfoCreate(scrGetArg(0));
    }
    HighwayInfoWork* work = (HighwayInfoWork*)g_engineResourceHandles.secondary;
    if (work->active == 0) {
        g_engineResourceHandles.operationActive = 0;
        return 1;
    }
    return 0;
}
}
