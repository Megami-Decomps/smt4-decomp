#include "shard/W4_Match3_AocMainA.h"
#include "addon/AocSystemA.h"

extern "C" {

extern AocMainA *g_aocMain;

extern s32 objHasFlagBit16(AocMainA * main);

/* Returns 1 when objHasFlagBit16 passes and packageFindRecordByName(a, 0x1e, b) succeeds. */
u32 FUN_0046c4b4(u32 a, u32 b)
{
    if (objHasFlagBit16(g_aocMain) != 0) {
        return packageFindRecordByName((AocSystemA *)a, 0x1E, b) != NULL; /* callers still pass g_aocSystem as a word */
    }
    return 0;
}

} /* extern "C" */
