#include "shard/W4_Match3_AocMainA.h"

extern "C" {

extern AocMainA *g_aocMain;

s32 objHasFlagBit16(AocMainA * main);
s32 packageFindRecordByName(u32 arg0, u32 arg1, u32 arg2);

/* Returns 1 when objHasFlagBit16 succeeds on the add-on main object and packageFindRecordByName(arg0, 0x39, arg1) succeeds too. */
u32 FUN_0046ebf0(u32 arg0, u32 arg1)
{
    if (objHasFlagBit16(g_aocMain) != 0) {
        return packageFindRecordByName(arg0, 0x39, arg1) != 0;
    }
    return 0;
}

} /* extern "C" */
