/* NON_MATCHING: retail uses ldr r0, [pc, #52] where the compiled block uses ldr r3, [pc, #52]. */
#include "common.h"

struct InitializationState {
    u8 unk00[0x20]; // 0x00
    u32 valueLow;   // 0x20
    u32 valueHigh;  // 0x24
};

struct ModelElementStorage {
    u8 unk00[0x40]; // 0x00
};

struct InitializationGlobals {
    u32 valueLow;  // 0x00
    u32 valueHigh; // 0x04, DAT_00464ac4
};

extern "C" {
extern InitializationGlobals DAT_00464ac0;
extern u32 DAT_00464ac4;
extern ModelElementStorage DAT_004dace0[2];
extern u8 entry;

void* FUN_003f7308(void* element);
void FUN_0017f6cc(void* object);
void* __aeabi_vec_ctor_nocookie_nodtor(
    void* array, void* (*constructor)(void*), u32 elementSize, u32 elementCount);
s32 __aeabi_atexit(void* object, void (*destructor)(void*), void* module);

s32 FUN_003eb484(u32 valueLow, u32 valueHigh, InitializationState* state)
{
    state->valueLow = valueLow;
    state->valueHigh = valueHigh;

    DAT_00464ac0.valueLow = 0;
    DAT_00464ac0.valueHigh = 0;

    __aeabi_vec_ctor_nocookie_nodtor(
        DAT_004dace0, FUN_003f7308, sizeof(ModelElementStorage), 2);

    return __aeabi_atexit(NULL, FUN_0017f6cc, &entry);
}
}
