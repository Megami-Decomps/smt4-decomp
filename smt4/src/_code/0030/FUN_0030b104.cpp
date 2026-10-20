#include "common.h"
#include "shard/W4_Match6_BtlEntry.h"

extern "C" {

extern BtlMainState *btlGetMainState(void);
extern u32 scrGetArg(u32 index);
extern int scrSetResult(s32 value);
extern int FUN_0024579c(BtlEntry *entry, u32 arg);

/* Script command: 1 if FUN_0024579c accepts `arg` for some present, active, unblocked entry, else 0. */
u32 FUN_0030b104(void)
{
    u32 arg = scrGetArg(0);
    s32 i;

    for (i = 0; i < BTL_ENTRY_COUNT; i++) {
        BtlEntry *entry = &btlGetMainState()->entries[i];

        if ((entry->flags & BTL_ENTRY_FLAG_PRESENT) != 0 && (entry->flags & BTL_ENTRY_FLAG_ACTIVE) != 0 &&
            (entry->flags & BTL_ENTRY_FLAG_BLOCKED) == 0 && FUN_0024579c(entry, arg) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

}
