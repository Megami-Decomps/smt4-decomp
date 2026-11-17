#include "common.h"
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"
#include "battle/BtlGlobals.h"

extern "C" {

extern u32 scrGetArg(u32 index);
extern int scrSetResult(s32 value);

/* Script command: returns the value of the battle entry with the given listed id (0 if there is none). */
u32 scrBtlGetEntryValueByListedId(void)
{
    u32 id = scrGetArg(0);
    s32 result = 0;
    BtlEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), id);

    if (entry != NULL) {
        result = entry->data.hp;
    }
    scrSetResult(result);
    return 1;
}

}
