#include "common.h"

struct InitializerState {
    u16 count; // 0x00
    u16 capacity; // 0x02
    u8 enabled; // 0x04
    u8 unk05[3];
    u32 mode; // 0x08
    u8 unk0c[0x64];
};
extern "C" InitializerState g_accelerometerLiveState;
extern "C" void sysMemClear(void *data, u32 bytes);

// Reset the module and establish its default capacity and mode.
extern "C" s32 FUN_001432e4()
{
    sysMemClear(&g_accelerometerLiveState, sizeof(g_accelerometerLiveState));
    g_accelerometerLiveState.count = 0;
    g_accelerometerLiveState.capacity = 64;
    g_accelerometerLiveState.enabled = 1;
    g_accelerometerLiveState.mode = 1;
    return 1;
}
