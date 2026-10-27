#include "common.h"

extern "C" {

void asdCecSetBoxArgs(u32 box, u32 value);
s32 asdCecCanOpenMessageBox(u32 box, u32 value);
u32 FUN_00357818(u32 id);

extern u32 g_cecCardBox; /* 0x43ddb8 */

/* Sets the three cec message boxes' arguments; returns 1 when the 0x910 box can be opened, 2 when the 0xbd3 box can. */
u8 FUN_003bbcf4(void)
{
    u8 result = 0;

    asdCecSetBoxArgs(FUN_00357818(0x910), 0xabababab);
    if (asdCecCanOpenMessageBox(FUN_00357818(0x910), 0xabababab) != 0) {
        result = 1;
    }
    asdCecSetBoxArgs(FUN_00357818(0xbd3), 0x112233);
    if (asdCecCanOpenMessageBox(FUN_00357818(0xbd3), 0x112233) != 0) {
        result = 2;
    }
    asdCecSetBoxArgs(FUN_00357818(0xe5c), g_cecCardBox);
    return result;
}

} /* extern "C" */
