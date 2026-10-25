#include "addon/aocMain.h"
#include "util/FUN_0022a2c4.h"

extern "C" {

extern AocMain *g_aocMain;

extern s32 packageFindRecordByName(u32 a, u32 b, u32 c);
extern s32 objHasFlagBit16(AocMain * main);

/* Returns 1 when objHasFlagBit16 passes and packageFindRecordByName(a, 0x1e, b) succeeds. */
u32 FUN_0022a2c4(u32 a, u32 b)
{
    if (objHasFlagBit16(g_aocMain) != 0) {
        return packageFindRecordByName(a, 0x1E, b) != 0;
    }
    return 0;
}

} /* extern "C" */
