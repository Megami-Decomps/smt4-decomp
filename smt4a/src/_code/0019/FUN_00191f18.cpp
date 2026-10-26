#include "shard/W4_Match3_AocMainA.h"
#include "shard/W5_W5Match7_EntrySort.h"

extern "C" {

extern AocMainA *g_aocMain; /* 0x570260 */

extern int packageFindRecordByName(u32 slot, u32 kind, u32 arg);
extern int objHasFlagBit16(AocMainA * context);

/* Whether the context's check passes and packageFindRecordByName accepts kind 25 for the two arguments. */
u32 FUN_00191f18(u32 slot, u32 arg)
{
    u32 ok = objHasFlagBit16(g_aocMain);

    if (ok != 0) {
        ok = packageFindRecordByName(slot, 0x19, arg) != 0;
    }
    return ok;
}

}
