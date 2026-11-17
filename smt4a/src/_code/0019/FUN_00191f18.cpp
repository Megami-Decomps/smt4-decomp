#include "shard/W4_Match3_AocMainA.h"
#include "addon/AocSystemA.h"
#include "shard/W5_W5Match7_EntrySort.h"

extern "C" {

/* Whether the context's check passes and packageFindRecordByName accepts kind 25 for the two arguments. */
u32 FUN_00191f18(u32 slot, u32 arg)
{
    u32 ok = objHasFlagBit16(g_aocMain);

    if (ok != 0) {
        ok = packageFindRecordByName((AocSystemA *)slot, 0x19, arg) != NULL; /* callers still pass g_aocSystem as a word */
    }
    return ok;
}

}
