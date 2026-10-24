/* NON_MATCHING: same calls, constants and nops; retail walks the second critical section and the three state words with explicit adds and stores, while armcc folds them into writeback and immediate offsets. */
#include "common.h"

extern "C" {

struct CriticalSectionPair {
    u32 first[3];
    u32 second[3];
};

extern u32 g_nngxCriticalSection[3];
extern u8 entry;
extern const u32 DAT_0053f51c[];
extern u32 DAT_005c0ab0[3];
void nn_os_CriticalSection_Initialize(u32 *section);
void FUN_0042ce3c(void *object);
__weak s32 __aeabi_atexit(void *object, void (*destructor)(void *), void *module);

/* Initializes the two GPU critical sections (registering their destructors) and the three GPU state words. */
void FUN_00511a74(void)
{
    u32 *section = g_nngxCriticalSection;

    section[0] = 0;
    nn_os_CriticalSection_Initialize(section);
    __aeabi_atexit(section, FUN_0042ce3c, &entry);
    section += 3;
    section[0] = 0;
    nn_os_CriticalSection_Initialize(section);
    __aeabi_atexit(section, FUN_0042ce3c, &entry);
    u32 *state = DAT_005c0ab0;
    *state++ = DAT_0053f51c[1];
    *state++ = DAT_0053f51c[1];
    *state++ = DAT_0053f51c[1];
}

} /* extern "C" */
