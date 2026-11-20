/* NON_MATCHING: compiler checks the unsigned count before the signed-negative index and changes the wide-load address register. */
#include "shard/W5_W5Match2_WideHandles.h"
extern "C" {
extern WideHandleTable g_soundVoicePool;
/* Read an in-range wide handle, returning zero for an invalid index. */
u64 resourceGetWideHandle(s32 index)
{
    if (index < 0)
        return 0;
    u32 count = g_soundVoicePool.count;
    if ((u32)index < count) {
        const WideHandleRecord *record = &g_soundVoicePool.entries[index];
        return record->handle;
    }
    return 0;
}
}
