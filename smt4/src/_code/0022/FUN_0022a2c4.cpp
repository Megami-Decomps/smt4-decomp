#include "addon/aocMain.h"
#include "util/FUN_0022a2c4.h"

extern "C" {

extern AocMain *g_aocMain;

extern s32 packageFindRecordByName(u32 a, u32 b, u32 c);
extern s32 FUN_002a6d08(AocMain * main);

/* Returns 1 when FUN_002a6d08 passes and packageFindRecordByName(a, 0x1e, b) succeeds. */
u32 FUN_0022a2c4(u32 a, u32 b)
{
    if (FUN_002a6d08(g_aocMain) != 0) {
        return packageFindRecordByName(a, 0x1E, b) != 0;
    }
    return 0;
}

} /* extern "C" */
