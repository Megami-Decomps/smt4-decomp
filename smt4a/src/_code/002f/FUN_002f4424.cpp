/* NON_MATCHING: erased post-initialization guard-release call has no relocation target. */
#include "common.h"
extern "C" {
struct Listener { const void *vtable; u32 values[4]; };
extern struct { u8 unk00[0x30]; u64 guard; } g_listenerTable;
extern Listener DAT_0062d848;
extern const u8 DAT_0055b02c, entry;
void FUN_0012cec4(void *);
s32 __cxa_guard_acquire(u64 *guard);
void emptyStub_002f4370(void *, void (*)(void *), const void *);
Listener *FUN_002f4424(void) {
    if (!(g_listenerTable.guard & 1) && __cxa_guard_acquire(&g_listenerTable.guard)) {
        for (u32 index = 0; index < 4; ++index) DAT_0062d848.values[index] = 0;
        DAT_0062d848.vtable = &DAT_0055b02c;
        emptyStub_002f4370(&DAT_0062d848, FUN_0012cec4, &entry);
        /* Retail contains an erased call using &g_listenerTable.guard here. */
    }
    return &DAT_0062d848;
}
}
