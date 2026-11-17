#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"
#include "battle/BtlGlobals.h"

extern "C" {
u32 scrGetArg(u32 index);

u32 FUN_003002b4(void)
{
    u32 id = scrGetArg(0);
    s32 index = scrGetArg(1);
    u32 amount = scrGetArg(2);
    BtlEntry* entry = btlMainFindEntryByListedId(btlGetMainState(), id);
    if (entry != NULL && index >= 0 && index < 9) {
        entry->modifiers[index] += amount;
    }
    return 1;
}
}
