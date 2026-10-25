#include "common.h"
#include "shard/W6_W6Match1_CriticalSection.h"

struct ServiceStatus {
    u32 unk00;  // 0x00
    s32 active; // 0x04
};

extern "C" {
extern ServiceStatus DAT_005891a4;
extern CriticalSection g_moduleCriticalSection4;
s32 FUN_00146650(void);
void FUN_0042642c(u32 index, s8* status);

// Queries byte status after checking synchronized activity or the fallback service state.
s32 FUN_00426204()
{
    bool active;
    {
        ScopedCriticalLock lock(g_moduleCriticalSection4);
        active = DAT_005891a4.active != 0;
    }
    if (!active && FUN_00146650() == 0) {
        return 0;
    }
    s8 status = 0;
    FUN_0042642c(0, &status);
    return status;
}
}
