/* NON_MATCHING: phase-two test direction and shared zero-return epilogue merging differ. */
#include "map/mapDepart.h"
#include "shard/W4_Match1b_RegisteredHandle.h"
#include "util/ClearByte.h"

extern "C" {
extern MapDepartExtraA *DAT_00581280;
extern void *g_handleRegistry;
s32 flagPairCondition(s16, s16);
void ptrListRemoveClearOwner(void *, u32);
s32 FUN_00295e54(s16, s16, u32);

u32 FUN_0033e1d4(void)
{
    struct Entry {
        u8 active;
        u8 unk01[2];
        u8 pending;
        u8 unk04[0x24];
        s16 firstFlag;
        s16 secondFlag;
        u8 unk2C[4];
        void *state;
        RegisteredHandle *handle;
        u8 unk38[4];
    };
    // The final flag pair extends beyond MapDepartExtraA's recovered prefix.
    struct CleanupView {
        u8 prefix[0xC];
        Entry entries[64];
        u8 unkF0C[0x36];
        s16 phase;
        s16 timer;
        s16 firstFlag;
        s16 secondFlag;
    };
    CleanupView *work = reinterpret_cast<CleanupView *>(DAT_00581280);
    if (work->phase == 0) {
        for (s32 i = 0; i < 64; ++i) {
            Entry *entry = &reinterpret_cast<CleanupView *>(DAT_00581280)->entries[i];
            if (entry->active && !flagPairCondition(entry->firstFlag, entry->secondFlag) && entry->handle) {
                RegisteredHandle *handle = reinterpret_cast<CleanupView *>(DAT_00581280)->entries[i].handle;
                if (handle->id)
                    ptrListRemoveClearOwner(g_handleRegistry, handle->id);
                entry->pending = 1;
            }
        }
    } else if (work->phase == 1) {
        s16 timer = work->timer + 1;
        work->timer = timer;
        if (timer < 2)
            return 0;
        for (s32 i = 0; i < 64; ++i) {
            Entry *entry = &reinterpret_cast<CleanupView *>(DAT_00581280)->entries[i];
            if (entry->active && entry->pending) {
                if (entry->handle) {
                    delete entry->handle;
                    entry->handle = NULL;
                }
                if (entry->state) {
                    clearByte(reinterpret_cast<u8 *>(entry->state));
                    entry->state = NULL;
                }
                entry->active = 0;
                entry->pending = 0;
            }
        }
    } else if (work->phase == 2) {
        if (FUN_00295e54(work->firstFlag, work->secondFlag, 1))
            return 1;
        return 0;
    } else {
        return 0;
    }
    work = reinterpret_cast<CleanupView *>(DAT_00581280);
    ++work->phase;
    work->timer = 0;
    return 0;
}
}
