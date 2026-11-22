/* NON_MATCHING: 17 lines (29 vs 28 rows): both __aeabi_atexit registrations, g_asdCec 64-bit -1 store, and DAT_00464fbc setup match; retail zeroes DAT_00464fd0 with stm {r1, r2} instead of two str r4 stores. */
#include "common.h"

struct CecInitializerState {
    u8 unk00[0x20];
    s64 handle;
};
struct GlobalState {
    u32 state;
    u8 active;
};
struct CecInitPair {
    u32 a;
    u32 b;
    CecInitPair() : a(0), b(0) {}
};

extern "C" {
extern CecInitializerState g_asdCec;
extern CecInitPair DAT_00464fd0;
extern GlobalState DAT_00464fbc;
extern u8 entry;
void FUN_003576d8(void *object);
void _ZN10NnOsThreadD1Ev(void *object);
s32 __aeabi_atexit(void *object, void (*destroy)(void *), void *module);

/* Initializes the CEC static state and registers both static destructors. */
void asdCecInitGlobals(void)
{
    g_asdCec.handle = -1LL;
    DAT_00464fd0 = CecInitPair();
    u32 *first = (u32 *)((u8 *)&DAT_00464fd0 - 0x20);
    *first = 0;
    __aeabi_atexit(first, FUN_003576d8, &entry);
    DAT_00464fbc.state = 0;
    DAT_00464fbc.active = 1;
    __aeabi_atexit(&DAT_00464fbc, _ZN10NnOsThreadD1Ev, &entry);
}
}
