/* NON_MATCHING: original static-initializer class identity is unrecovered; retail retains an unused 0x0044e360 pool word and clears its counters with STM. */
#include "common.h"

struct InitializationArguments {
    u32 unk00[4]; // 0x00
    u32 first;    // 0x10
    u32 second;   // 0x14
};
struct InitializationCounters {
    u32 first;
    u32 second;
};
struct InitializedState {
    const char* name; // 0x00
    u32 first;       // 0x04
    u32 second;      // 0x08
    u32 third;       // 0x0c
};

extern "C" {
extern InitializationCounters DAT_0044e378;
extern InitializedState DAT_004c641c;
extern const char DAT_00407e34[];
extern u32 DAT_0044e368;
void FUN_00385b60(void* state);
void entry(void);
s32 __aeabi_atexit(void* object, void (*destructor)(void*), void* handle);

// Initializes the shared state and registers its static destructor.
void FUN_003ee784(u32 first, u32 second, InitializationArguments* arguments)
{
    arguments->first = first;
    arguments->second = second;
    DAT_0044e378.first = 0;
    DAT_0044e378.second = 0;
    DAT_004c641c.second = 0;
    DAT_004c641c.first = 0;
    DAT_004c641c.third = 0;
    DAT_004c641c.name = DAT_00407e34;
    __aeabi_atexit(&DAT_004c641c, FUN_00385b60, reinterpret_cast<void*>(entry));
    DAT_0044e368 = 0;
}
}
