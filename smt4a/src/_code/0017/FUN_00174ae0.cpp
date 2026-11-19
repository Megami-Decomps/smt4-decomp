/* NON_MATCHING: same stores and registers; retail materialises the critical section's -1 lock count (`mvn r3, #0`) after its first word is stored, the build before the first store. */
#include "common.h"
#include <new>
#include "nn/os/CriticalSection.h"

extern "C" {

struct SharedState {
    SharedState() : first(0), enabled(1), lock(nn::os::CRITICAL_SECTION_DEFERRED), flagA(0), flagB(0) {}
    /* 0x00 */ u32 first;
    /* 0x04 */ u8 enabled;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ nn::os::CriticalSection lock;
    /* 0x14 */ u8 flagA;
    /* 0x15 */ u8 flagB;
};

extern u32 DAT_005c0f94;
extern SharedState DAT_0064717c;
extern u8 entry;

s32 __cxa_guard_acquire(u32 *guard);
__weak void __cxa_guard_release(u32 *guard);
s32 __aeabi_atexit(void *object, void (*destructor)(void *), void *module);
void FUN_001906cc(void *object);

/* Returns the shared state, constructing it (and registering its destructor) on first use. */
SharedState *FUN_00174ae0(void)
{
    if ((DAT_005c0f94 & 1) == 0 && __cxa_guard_acquire(&DAT_005c0f94) != 0) {
        new (&DAT_0064717c) SharedState;
        __aeabi_atexit(&DAT_0064717c, FUN_001906cc, &entry);
        __cxa_guard_release(&DAT_005c0f94);
    }
    return &DAT_0064717c;
}

} /* extern "C" */
