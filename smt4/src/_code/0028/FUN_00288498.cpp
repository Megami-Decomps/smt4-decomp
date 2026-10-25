#include "common.h"
#include "shard/TextureDrawCall.h"

extern "C" {

struct StatusDownPanel { u8 unk00[0x92]; u8 enabled; };
struct StatusDown { u8 unk00[0x2300]; StatusDownPanel panel; };
extern StatusDown *g_statusDown;

extern int FUN_002881a0(void);
extern int FUN_0029ac94(void);

u32 FUN_00288498(void)
{
    StatusDownPanel *panel = &g_statusDown->panel;
    if (panel->enabled == 0) return 0;

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
