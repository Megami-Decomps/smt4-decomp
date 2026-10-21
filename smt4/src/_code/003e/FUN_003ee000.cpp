/* NON_MATCHING: original array classes/constructor identities are unrecovered; retail also retains an unreferenced 0x00447a28 pool word and uses STM for counter initialization. */
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

struct FirstElement {
    u8 storage[0x178];
};
struct SecondElement {
    u8 storage[0x8c];
};

extern "C" {
extern InitializationCounters DAT_00447a40;
extern FirstElement DAT_004a1264[160];
extern SecondElement DAT_004afd64[160];
void FUN_0033b614(void* element);
void FUN_003494ec(void* element);
void* __aeabi_vec_ctor_nocookie_nodtor(
    void* elements, void (*constructor)(void*), u32 stride, u32 count);
void* FUN_002c5d54(
    void* elements, void (*constructor)(void*), u32 stride, u32 count);

// Clears shared counters and constructs both arrays of elements.
void* FUN_003ee000(u32 first, u32 second, InitializationArguments* arguments)
{
    arguments->first = first;
    arguments->second = second;
    DAT_00447a40.first = 0;
    DAT_00447a40.second = 0;
    __aeabi_vec_ctor_nocookie_nodtor(
        DAT_004a1264, FUN_0033b614, sizeof(FirstElement), 160);
    return FUN_002c5d54(
        DAT_004afd64, FUN_003494ec, sizeof(SecondElement), 160);
}
}
