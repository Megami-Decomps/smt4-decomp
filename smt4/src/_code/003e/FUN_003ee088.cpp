/* NON_MATCHING: a file initializer (its start moved 0xc back in wave 93: it loads 0x44cd88 and -1 itself before the push); original array element class and its constructor identity remain unrecovered. */
#include "common.h"

struct InitializationArguments {
    u32 unk00[2]; // 0x00
    u32 first;    // 0x08
    u32 second;   // 0x0c
};

struct InitializationCounters {
    u32 first;    // 0x00
    u32 second;   // 0x04
};

struct InitializedElement {
    u8 unk00[0x4c]; // 0x00
};

extern "C" {
extern InitializationArguments g_mapStateSlots; /* 0x44cd88 */
extern InitializationCounters DAT_0044cd98;
extern InitializedElement DAT_004bdc04[35];
void FUN_0034203c(InitializedElement* element);
InitializedElement* __aeabi_vec_ctor_nocookie_nodtor(
    InitializedElement* elements, void (*constructor)(InitializedElement*), u32 stride, u32 count);
InitializedElement* FUN_002c5d54(
    InitializedElement* elements, void (*constructor)(InitializedElement*), u32 stride, u32 count);

// Initialize the two groups of shared elements and clear their counters.
InitializedElement* FUN_003ee088(void)
{
    g_mapStateSlots.first = 0xFFFFFFFF;
    g_mapStateSlots.second = 0xFFFFFFFF;
    DAT_0044cd98.first = 0;
    DAT_0044cd98.second = 0;
    InitializedElement* elements = __aeabi_vec_ctor_nocookie_nodtor(
        DAT_004bdc04, FUN_0034203c, sizeof(InitializedElement), 32);
    return FUN_002c5d54(elements + 32, FUN_0034203c, sizeof(InitializedElement), 3);
}
}
