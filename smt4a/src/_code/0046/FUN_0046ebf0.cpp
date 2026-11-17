#include "shard/W4_Match3_AocMainA.h"
#include "addon/AocSystemA.h"

extern "C" {

/* Returns 1 when objHasFlagBit16 succeeds on the add-on main object and packageFindRecordByName(arg0, 0x39, arg1) succeeds too. */
u32 FUN_0046ebf0(u32 arg0, u32 arg1)
{
    if (objHasFlagBit16(g_aocMain) != 0) {
        return packageFindRecordByName((AocSystemA *)arg0, 0x39, arg1) != NULL; /* callers still pass g_aocSystem as a word */
    }
    return 0;
}

} /* extern "C" */
