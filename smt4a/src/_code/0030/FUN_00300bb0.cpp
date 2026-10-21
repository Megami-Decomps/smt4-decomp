/* NON_MATCHING: retail emits 'push {r1, r2, r3, r4, r5, lr}'; compiler emits 'push {r4, lr}' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Guard { u8 storage[16]; };
extern struct { u8 unk00[0x18]; u32 references; void *allocation; } g_systemTable;
extern const u8 DAT_006306ac;
extern u32 DAT_005c4c18;
void FUN_002e6e34(Guard *guard, const void *lock);
void _ZN9Obj55b28cD1Ev(Guard *guard);
void *FUN_00132fac(void *allocation);
void operatorDelete(void *allocation);
void FUN_00300bb0(void) {
    Guard guard;
    FUN_002e6e34(&guard, &DAT_006306ac);
    if (--g_systemTable.references == 0) {
        if (g_systemTable.allocation) operatorDelete(FUN_00132fac(g_systemTable.allocation));
        g_systemTable.allocation = NULL;
        DAT_005c4c18 = 0;
    }
    _ZN9Obj55b28cD1Ev(&guard);
}
}
