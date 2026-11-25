/* NON_MATCHING: a file initializer (its start moved 0xc back in wave 93: it loads 0x447a28 and -1 itself before the push); original array classes/constructor identities are unrecovered; retail also retains an unreferenced 0x00447a28 pool word and uses STM for counter initialization. */
#include "map/MapEffectReservation.h"
#include "common.h"

struct InitializationArguments {
    u32 unk00[4]; // 0x00
    u32 first;    // 0x10
    u32 second;   // 0x14
};

struct InitializationCounters {
    u32 first;  // 0x00
    u32 second; // 0x04
};

struct SecondElement {
    u8 storage[0x8c];
};

extern "C" {
extern InitializationArguments DAT_00447a28; /* 0x447a28 */
extern InitializationCounters DAT_00447a40;
extern SecondElement DAT_004afd64[160];
void FUN_0033b614(void* element);
void FUN_003494ec(void* element);
void* __aeabi_vec_ctor_nocookie_nodtor(
    void* elements, void (*constructor)(void*), u32 stride, u32 count);
void* FUN_002c5d54(
    void* elements, void (*constructor)(void*), u32 stride, u32 count);

// Clears shared counters and constructs both arrays of elements.
void* FUN_003edff4(void)
{
    DAT_00447a28.first = 0xFFFFFFFF;
    DAT_00447a28.second = 0xFFFFFFFF;
    DAT_00447a40.first = 0;
    DAT_00447a40.second = 0;
    __aeabi_vec_ctor_nocookie_nodtor(
        g_namedEntryTable, FUN_0033b614, sizeof(MapEffectInstance), 160);
    return FUN_002c5d54(
        DAT_004afd64, FUN_003494ec, sizeof(SecondElement), 160);
}
}
