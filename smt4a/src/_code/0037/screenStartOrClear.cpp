#include "shard/Shard0037.h"

extern "C" {

extern ScreenRef DAT_0057f0c4;
extern void FUN_002a1f60(u32 a, s32 b, s32 c, s32 d, s32 e, s32 f, u32 g);

void screenStartOrClear(s32 id, u32 arg)
{
    ScreenObj *screen = DAT_0057f0c4.instance;

    screen->unk67C = 1;
    screen->unk5EA = 1;
    if (id != 0) {
        FUN_002a1f60(screen->unk678, 2, -1, 0, 3, id, arg);
    } else {
        screen->unk5EA = 0;
        screen->unk67C = 0;
        screen->unk678 = 0;
    }
}

} /* extern "C" */
