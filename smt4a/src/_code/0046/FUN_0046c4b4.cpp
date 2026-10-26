#include "shard/W4_Match3_AocMainA.h"

extern "C" {

extern AocMainA *g_aocMain;

extern s32 packageFindRecordByName(u32 a, u32 b, u32 c);
extern s32 objHasFlagBit16(AocMainA * main);

/* Returns 1 when objHasFlagBit16 passes and packageFindRecordByName(a, 0x1e, b) succeeds. */
u32 FUN_0046c4b4(u32 a, u32 b)
{
    if (objHasFlagBit16(g_aocMain) != 0) {
        return packageFindRecordByName(a, 0x1E, b) != 0;
    }
    return 0;
}

} /* extern "C" */
