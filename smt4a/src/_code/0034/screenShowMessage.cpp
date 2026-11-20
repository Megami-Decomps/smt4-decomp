#include "ui/ButtonHelpGlobal.h"
#include "shard/Shard0034.h"

extern "C" {

extern u32 g_aocSystem;
extern s32 FUN_0046e458(u32 system, s32 id);
extern s32 dataTableValue0f(void);
extern void screenBuildItemDescriptionMessage(s32 id);
extern void asdTextDrawDirectoryEntry(u32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);

void screenShowMessage(s32 id)
{
    ButtonHelpWorkA *screen = g_buttonHelp.work;
    s32 value;

    if (id == 0) {
        screen->textVisible = 0;
    } else {
        screen->text.useDirectoryText = 1;
        screen->textVisible = 1;
        value = FUN_0046e458(g_aocSystem, id);
        if (value == 0) {
            value = dataTableValue0f();
        }
        screenBuildItemDescriptionMessage(id);
        asdTextDrawDirectoryEntry(screen->text.directoryText, 2, -1, 0, 3, value, id);
    }
}

} /* extern "C" */
