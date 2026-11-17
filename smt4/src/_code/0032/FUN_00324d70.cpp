#include "battle/BtlEntry.h"
#include "battle/btlMain.h"

#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"
extern "C" {
s32 scrGetArg(s32 index);

/* The entry stat a script kind argument selects (0, 1, 2 -> 7, 10, 11); 0 for any other kind. */
static __inline s32 statForKind(s32 kind)
{
    s32 stat = 0;
    switch (kind) {
    case 0:
        stat = 7;
        break;
    case 1:
        stat = 10;
        break;
    case 2:
        stat = 11;
        break;
    default:
        return stat;
    }
    return stat;
}

/* Script command: result 0 when a present, active entry with id arg 0 has the stat selected by arg 1 below 1,
 * otherwise whether any such entry exists. */
u32 FUN_00324d70()
{
    u32 id = scrGetArg(0);
    s32 stat = statForKind(scrGetArg(1));
    u8 found = 0;
    for (s32 index = 0; index < BTL_ENTRY_COUNT; ++index) {
        BtlEntry *entry = &btlGetMainState()->entries[index];
        u32 flags = entry->flags;
        if ((flags & BTL_ENTRY_FLAG_PRESENT) != 0 && (flags & BTL_ENTRY_FLAG_ACTIVE) != 0 &&
            (flags & BTL_ENTRY_FLAG_BLOCKED) == 0 && entry->data.id == id) {
            found = 1;
            if (entry->stat[stat] < 1) {
                scrSetResult(0);
                return 1;
            }
        }
    }
    scrSetResult(found != 0);
    return 1;
}
}
