/* NON_MATCHING: same stores and calls; retail keeps zero in r2 and -1 in r3 so the pair store is one `strd r2, [r1, #4]` from the node base, built allocates zero in r1 and uses stm */
#include "common.h"
#include <new>

extern "C" {

struct LinkPair {
    LinkPair() : next(0), index(-1) {}
    /* 0x00 */ u32 next;
    /* 0x04 */ s32 index;
};

struct LinkNode {
    LinkNode() : head(0) {}
    /* 0x00 */ u32 head;
    /* 0x04 */ LinkPair link;
};

struct SharedState {
    SharedState() : first(0), enabled(1), flagA(0), flagB(0) {}
    /* 0x00 */ u32 first;
    /* 0x04 */ u8 enabled;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ LinkNode node;
    /* 0x14 */ u8 flagA;
    /* 0x15 */ u8 flagB;
};

extern u32 DAT_005c0f94;
extern SharedState DAT_0064717c;
extern u8 entry;

s32 __cxa_guard_acquire(u32 *guard);
__weak void __cxa_guard_release(u32 *guard);
__weak s32 __aeabi_atexit(void *object, void (*destructor)(void *), void *module);
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
