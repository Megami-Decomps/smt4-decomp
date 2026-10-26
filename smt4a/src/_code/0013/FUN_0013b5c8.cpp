/* NON_MATCHING: connectivity initialization has different critical-section exit paths and register allocation. */
#include "nn/Result.h"
#include "common.h"
#include "code/Code0014_Smt4a.h"

struct ConnectivityInitState {
    u32 unk00;
    s32 references;
};
extern "C" {
extern ConnectivityInitState DAT_005891a4;
extern u32 DAT_005b4438;
extern u32 g_moduleCriticalSection4;
extern const char DAT_00536c61[]; /* ac:u */
void nn_os_CriticalSection_Enter(void *);
void nn_os_CriticalSection_Leave(void *);
void FUN_0014668c(u32);
s32 FUN_0016f864(void);
s32 FUN_0016f988(u32 *, const char *, u32, u32);
u32 libc_strlen(const char *);
}

/* Reference-count the ac:u service connection while holding the initialization lock. */
extern "C" s32 FUN_0013b5c8(void)
{
    nn_os_CriticalSection_Enter(&g_moduleCriticalSection4);
    if (FUN_00146650() != 0) {
        nn_os_CriticalSection_Leave(&g_moduleCriticalSection4);
        return (s32)0xD8A09FF9;
    }
    nn_os_CriticalSection_Enter(&g_moduleCriticalSection4);
    bool first = DAT_005891a4.references == 0;
    nn_os_CriticalSection_Leave(&g_moduleCriticalSection4);
    if (!first) {
        ++DAT_005891a4.references;
        nn_os_CriticalSection_Leave(&g_moduleCriticalSection4);
        return 0x00209FF9;
    }
    s32 result = FUN_0016f864();
    if (!nnResultIsFailure(result)) {
        u32 length = libc_strlen(DAT_00536c61);
        result = FUN_0016f988(&DAT_005b4438, DAT_00536c61, length, 0);
        if (!nnResultIsFailure(result)) {
            ++DAT_005891a4.references;
            FUN_0014668c(0x0B0101C8);
            nn_os_CriticalSection_Leave(&g_moduleCriticalSection4);
            return 0;
        }
    }
    nn_os_CriticalSection_Leave(&g_moduleCriticalSection4);
    return result;
}
