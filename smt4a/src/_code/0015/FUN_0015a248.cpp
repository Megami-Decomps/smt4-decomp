/* Clears the LCD force-black state when its flag is set. */
#include "common.h"

extern "C" {

extern s8 DAT_005c0aa0;
extern u32 DAT_005c0ab4;

extern u32 FUN_00170358(u32, u8);

void FUN_0015a248(void)
{
    if (DAT_005c0aa0 != 0) {
        FUN_00170358((u32)&DAT_005c0ab4, 0);
    }
}

}
