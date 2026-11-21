/* NON_MATCHING: register numbering only: retail keeps the reference-state pointer in r6 and the active flag in r7, the build swaps them (the same as smt4 FUN_00106c28). */
#include "nn/Result.h"
#include "common.h"
#include "shard/W6_W6Match1_CriticalSection.h"
#include "code/Code0014_Smt4a.h"

struct ConnectivityInitState {
    u32 unk00;
    s32 references;
};
extern "C" {
extern ConnectivityInitState DAT_005891a4;
extern u32 DAT_005b4438;
extern CriticalSection g_moduleCriticalSection4;
extern const char DAT_00536c61[]; /* ac:u */
void FUN_0014668c(u32);
s32 srvInitialize(void);
s32 srvGetServiceHandle(u32 *, const char *, u32, u32);
u32 libc_strlen(const char *);
}

/* Reference-count the ac:u service connection while holding the initialization lock. */
extern "C" nn::Result FUN_0013b5c8(void)
{
    ScopedCriticalLock lock(g_moduleCriticalSection4);
    if (FUN_00146650() != 0)
        return (s32)0xD8A09FF9;
    bool active;
    {
        ScopedCriticalLock check(g_moduleCriticalSection4);
        active = DAT_005891a4.references != 0;
    }
    if (active) {
        ++DAT_005891a4.references;
        return 0x00209FF9;
    }
    s32 result = srvInitialize();
    if (nnResultIsFailure(result))
        return result;
    result = srvGetServiceHandle(&DAT_005b4438, DAT_00536c61, libc_strlen(DAT_00536c61), 0);
    if (nnResultIsFailure(result))
        return result;
    ++DAT_005891a4.references;
    FUN_0014668c(0x0B0101C8);
    return 0;
}
