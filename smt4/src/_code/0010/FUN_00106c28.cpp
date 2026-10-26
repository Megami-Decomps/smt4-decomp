/* NON_MATCHING: register numbering only (retail keeps the reference-state pointer in r6 and the mounted flag in r7; the build swaps them) */
#include "common.h"
#include "nn/Result.h"
#include "shard/W6_W6Match1_CriticalSection.h"
#include "shard/W6_W6Match7_SoundInit.h"
#include "code/Code0010_Smt4.h"

struct ArchiveReferenceState { u32 unk00; u32 references; };
extern "C" {
extern u8 g_archiveModuleCriticalSection[];
extern ArchiveReferenceState g_archiveModuleState;
extern const char DAT_00407e1a[];
extern u8 DAT_004655f8[];
u32 FUN_002c1398();
u32 libc_strlen(const char *text);
u32 asdModelForwardChecked(void *archive, const char *name, u32 length, u32 flags);

// Acquire the shared archive mount, mounting it on the first reference under the module lock.
u32 FUN_00106c28()
{
    ScopedCriticalLock lock(static_cast<void *>(g_archiveModuleCriticalSection));
    if (FUN_0010f50c()) {
        u32 failure = 0xd8a09ff9;
        return failure;
    }
    bool mounted;
    {
        ScopedCriticalLock referenceLock(static_cast<void *>(g_archiveModuleCriticalSection));
        mounted = g_archiveModuleState.references != 0;
    }
    if (mounted) {
        ++g_archiveModuleState.references;
        u32 alreadyMounted = 0x00209ff9;
        return alreadyMounted;
    }
    u32 result = FUN_002c1398();
    if (nnResultIsFailure(result)) {
        return result;
    }
    result = asdModelForwardChecked(DAT_004655f8, DAT_00407e1a, libc_strlen(DAT_00407e1a), 0);
    if (nnResultIsFailure(result)) {
        return result;
    }
    ++g_archiveModuleState.references;
    FUN_0010f548(0x040201c8);
    u32 success = 0;
    return success;
}
}
