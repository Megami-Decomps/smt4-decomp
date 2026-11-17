#include "shard/W4_Match3_AocMainA.h"
#include "addon/AocSystemA.h"
#include "quest_center/qcCtrl.h"

extern "C" {

extern AocMainA *g_aocMain; /* 0x570260 */

extern int objHasFlagBit16(AocMainA * context);

/* Whether packageFindRecordByName accepts kind 12 for the arguments (after the context check, when `checkContext` is set). */
u32 FUN_004705ec(u32 slot, u32 arg, s32 checkContext)
{
    u32 ok = 1;

    if (checkContext != 0) {
        ok = objHasFlagBit16(g_aocMain);
    }
    if (ok != 0) {
        ok = packageFindRecordByName((AocSystemA *)slot, 0xC, arg) != NULL; /* callers still pass g_aocSystem as a word */
    }
    return ok;
}

}
