#include "shard/Shard0034.h"

extern "C" {

extern ScreenRef g_buttonHelp;
extern u32 g_aocSystem;
extern s32 FUN_0046e458(u32 system, s32 id);
extern s32 dataTableValue0f(void);
extern void FUN_0028a888(s32 id);
extern void asdTextDrawDirectoryEntry(u32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);

void screenShowMessage(s32 id)
{
    ScreenObj *screen = g_buttonHelp.instance;
    s32 value;

    if (id == 0) {
        screen->unk5EA = 0;
    } else {
        screen->unk67C = 1;
        screen->unk5EA = 1;
        value = FUN_0046e458(g_aocSystem, id);
        if (value == 0) {
            value = dataTableValue0f();
        }
        FUN_0028a888(id);
        asdTextDrawDirectoryEntry(screen->unk678, 2, -1, 0, 3, value, id);
    }
}

} /* extern "C" */
