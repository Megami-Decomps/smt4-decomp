#include "shard/Shard0034.h"

extern "C" {

extern ScreenRef DAT_0057f0c4;
extern u32 g_aocSystem;
extern s32 FUN_0046e458(u32 system, s32 id);
extern s32 FUN_00480b08(void);
extern void FUN_0028a888(s32 id);
extern void FUN_002a1f60(u32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);

void screenShowMessage(s32 id)
{
    ScreenObj *screen = DAT_0057f0c4.instance;
    s32 value;

    if (id == 0) {
        screen->unk5EA = 0;
    } else {
        screen->unk67C = 1;
        screen->unk5EA = 1;
        value = FUN_0046e458(g_aocSystem, id);
        if (value == 0) {
            value = FUN_00480b08();
        }
        FUN_0028a888(id);
        FUN_002a1f60(screen->unk678, 2, -1, 0, 3, value, id);
    }
}

} /* extern "C" */
