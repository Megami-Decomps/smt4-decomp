/* NON_MATCHING: retail saves registers before loading the lock directly into R4; compiled scoped-lock construction loads it into R0 before PUSH and then copies R0 to R4. Remaining instructions match. */
#include "common.h"
#include "shard/W6_W6Match1_CriticalSection.h"

struct ServiceStatus {
    u32 unk00;  // 0x00
    s32 active; // 0x04
};

extern "C" {
extern ServiceStatus g_archiveModuleState;
extern CriticalSection g_archiveModuleCriticalSection;
s32 FUN_0010f50c(void);
void FUN_00351db0(u32 index, s8* status);

// Queries byte status after checking synchronized activity or the fallback service state.
s32 FUN_0023793c()
{
    bool active;
    {
        ScopedCriticalLock lock(g_archiveModuleCriticalSection);
        active = g_archiveModuleState.active != 0;
    }
    if (!active && FUN_0010f50c() == 0) {
        return 0;
    }
    s8 status = 0;
    FUN_00351db0(0, &status);
    return status;
}
}
