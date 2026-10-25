/* NON_MATCHING: lock and archive-state saved registers differ and retail's removed-hook NOPs are absent. */
#include "common.h"
#include "shard/W6_W6Match7_SoundInit.h"

struct ArchiveReferenceState { u32 unk00; u32 references; };
extern "C" {
extern u8 g_archiveModuleCriticalSection[];
extern ArchiveReferenceState g_archiveModuleState;
extern const char DAT_00407e1a[];
extern u8 DAT_004655f8[];
void nn_os_CriticalSection_Enter(void *lock);
void nn_os_CriticalSection_Leave(void *lock);
u32 FUN_0010f50c();
u32 FUN_002c1398();
u32 libc_strlen(const char *text);
u32 asdModelForwardChecked(void *archive, const char *name, u32 length, u32 flags);

// Acquire the shared archive mount, mounting it on the first reference under the module lock.
u32 FUN_00106c28()
{
    nn_os_CriticalSection_Enter(g_archiveModuleCriticalSection);
    if (FUN_0010f50c()) {
        nn_os_CriticalSection_Leave(g_archiveModuleCriticalSection);
        return 0xd8a09ff9;
    }
    nn_os_CriticalSection_Enter(g_archiveModuleCriticalSection);
    bool mounted = g_archiveModuleState.references != 0;
    nn_os_CriticalSection_Leave(g_archiveModuleCriticalSection);
    if (mounted) {
        ++g_archiveModuleState.references;
        nn_os_CriticalSection_Leave(g_archiveModuleCriticalSection);
        return 0x00209ff9;
    }
    u32 result = FUN_002c1398();
    if ((s32)result >= 0)
        result = asdModelForwardChecked(DAT_004655f8, DAT_00407e1a, libc_strlen(DAT_00407e1a), 0);
    if ((s32)result < 0) {
        nn_os_CriticalSection_Leave(g_archiveModuleCriticalSection);
        return result;
    }
    ++g_archiveModuleState.references;
    FUN_0010f548(0x040201c8);
    nn_os_CriticalSection_Leave(g_archiveModuleCriticalSection);
    return 0;
}
}
