/* NON_MATCHING: original array classes/constructors are unrecovered; retail retains an unreferenced 0x00447e40 pool word and clears counters with STM. */
#include "common.h"

struct InitializationArguments {
    u32 unk00[2]; // 0x00
    u32 first;    // 0x08
    u32 second;   // 0x0c
};
struct InitializationCounters {
    u32 first;  // 0x00
    u32 second; // 0x04
};
struct FirstElement {
    u32 storage[0x284 / 4];
};
struct SecondElement {
    u32 storage[0x30 / 4];
};
struct SharedElements {
    FirstElement first[16];   // 0x0000
    u32 separator;            // 0x2840
    SecondElement second[32]; // 0x2844
};

extern "C" {
extern InitializationCounters DAT_00447e50;
extern SharedElements DAT_004b896c;
void FUN_00340650(void* element);
void FUN_00340664(void* element);
void* __aeabi_vec_ctor_nocookie_nodtor(
    void* elements, void (*constructor)(void*), u32 stride, u32 count);
void* FUN_002c5d54(
    void* elements, void (*constructor)(void*), u32 stride, u32 count);

// Initializes both groups of shared elements and clears their counters.
void* FUN_003ec4a4(u32 first, u32 second, InitializationArguments* arguments)
{
    arguments->first = first;
    arguments->second = second;
    DAT_00447e50.first = 0;
    DAT_00447e50.second = 0;
    SharedElements* elements = static_cast<SharedElements*>(
        __aeabi_vec_ctor_nocookie_nodtor(
            &DAT_004b896c, FUN_00340650, sizeof(FirstElement), 16));
    return FUN_002c5d54(elements->second, FUN_00340664, sizeof(SecondElement), 32);
}
}
