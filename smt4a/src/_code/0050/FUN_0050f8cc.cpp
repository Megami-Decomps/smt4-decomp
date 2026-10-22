/* NON_MATCHING: real static-initializer entry is 0x50f8cc, whose ldr r0 selects the unnamed object at 0x647610; the current unit starts four bytes later and retains that now-unreferenced pool word. */
#include "common.h"

struct DeviceModuleState {
    u32 first, second, third, fourth; // 0x00..0x0c
    u8 enabled; // 0x10
    u8 unk11[3];
    u32 state; // 0x14
    u8 ready; // 0x18
};
extern "C" {
void entry();
void FUN_0042ce40(void *object);
void FUN_00431fe0(void *object);
extern u32 DAT_005c14b4;
__weak s32 __aeabi_atexit(void *object, void (*destroy)(void *), void *module);
void emptyStub_002f4370(void *object, void (*destroy)(void *), void *module);
}

// Clear both device-module objects and register their finalizers.
extern "C" void FUN_0050f8cc(DeviceModuleState *state)
{
    state->first = 0;
    state->second = 0;
    state->third = 0;
    state->fourth = 0;
    state->enabled = 0;
    state->state = 0;
    state->ready = 0;
    __aeabi_atexit(state, FUN_0042ce40, reinterpret_cast<void *>(entry));
    DAT_005c14b4 = 0;
    emptyStub_002f4370(&DAT_005c14b4, FUN_00431fe0, reinterpret_cast<void *>(entry));
}
