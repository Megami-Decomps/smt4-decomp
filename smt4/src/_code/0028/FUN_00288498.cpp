#include "status/StatusDown.h"
#include "shard/TextureDrawCall.h"

extern "C" {


extern int FUN_0029ac94(void);

u32 FUN_00288498(void)
{
    if (g_statusDown->panelEnabled == 0) return 0;

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
