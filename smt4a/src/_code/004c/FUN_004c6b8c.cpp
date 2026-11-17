#include "common.h"
#include "battle/BattleSkillResponseMasks.h"

struct BattleEntry { u64 flags; u8 unk008[1012]; void *owner; };

extern "C" {
s32 FUN_004bd098(void *, u32);

/* Tests for a negative indexed status only in the masked battle state. */
int FUN_004c6b8c(BattleEntry *entry, u32 id)
{
    if ((entry->flags & g_btlSkillResponseMasks.sourceKind) != 0) {
        if (FUN_004bd098(entry->owner, id) < 0) {
            return 1;
        }
    }
    return 0;
}
}
