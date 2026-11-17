#include "ui/ButtonHelpGlobal.h"
#include "shard/Shard0037.h"
#include "ui/UiControl.h"

extern "C" {

extern void asdTextDrawDirectoryEntry(u32 a, s32 b, s32 c, s32 d, s32 e, s32 f, u32 g);

void screenStartOrClear(s32 id, u32 arg)
{
    ButtonHelpWorkA *screen = g_buttonHelp.work;

    screen->text.useDirectoryText = 1;
    screen->textVisible = 1;
    if (id != 0) {
        asdTextDrawDirectoryEntry(screen->text.directoryText, 2, -1, 0, 3, id, arg);
    } else {
        screen->textVisible = 0;
        screen->text.useDirectoryText = 0;
        screen->text.directoryText = 0;
    }
}

} /* extern "C" */
