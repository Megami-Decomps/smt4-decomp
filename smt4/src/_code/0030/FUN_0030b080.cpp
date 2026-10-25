#include "battle/BtlMainAccess.h"
#include "common.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"

extern "C" {

/* 0x288-byte battle entity record. */


u32 scrGetArg(u32 index);
s32 btlEntryHasActionSkillCategory(BtlEntry *entity, u32 arg);
void scrSetResult(s32 value);

/* Script command: reports whether some active, enabled, visible entity accepts script argument 0 (btlEntryHasActionSkillCategory). Returns 1. */
u32 FUN_0030b080(void)
{
    u32 arg = scrGetArg(0);
    s32 i;

    for (i = 0; i < 109; i++) {
        BtlEntry *entity = &btlGetMainState()->entries[i];

        if ((entity->flags & 0x10) != 0 && (entity->flags & 1) != 0 && (entity->flags & 0x40) == 0 && btlEntryHasActionSkillCategory(entity, arg) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
