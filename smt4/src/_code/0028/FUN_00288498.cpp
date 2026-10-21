/* NON_MATCHING: status-byte access splits its 0x2392 offset differently from retail (0x2000 + 0x392 versus 0x2300 + 0x92). */
#include "common.h"

extern "C" {

struct StatusDown { u8 unk00[0x2392]; u8 enabled; };
extern StatusDown *g_statusDown;

extern int FUN_002881a0(void);
extern int FUN_0029ac94(void);

u32 FUN_00288498(void)
{
    if (g_statusDown->enabled == 0) return 0;

    int value = FUN_002881a0();
    u32 result;

    if ((((value == 5) || (value = FUN_002881a0(), value == 6)) ||
         (value = FUN_002881a0(), value == 10)) ||
        (((value = FUN_0029ac94(), value == 7 || (value = FUN_0029ac94(), value == 8)) ||
          (value = FUN_0029ac94(), value == 3)))) {
        result = 0;
    } else {
        result = 1;
    }
    return result;
}

} /* extern "C" */
