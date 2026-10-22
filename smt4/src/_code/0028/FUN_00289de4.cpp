#include "addon/aocMain.h"

extern "C" {

int FUN_002a4584(AocDisplay *display, u8 *buffer, u32 b, int c, int d, int e, int f);
int memClear(u8 *ptr, int size);
extern AocDisplay *g_aocDisplay; /* 0x433130 */
extern int FUN_002a6e7c(u32 a, u32 b, u32 c, u8 *buffer);

void FUN_00289de4(u32 a, u32 b, u32 c)
{
    int result;
    u8 buffer[128];

    memClear(buffer, 0x80);
    result = FUN_002a6e7c(a, 7, b, buffer);
    if (result != 0) {
        FUN_002a4584(g_aocDisplay, buffer, c, result + 8, 1, 0x80, 0);
    }
}

} /* extern "C" */
