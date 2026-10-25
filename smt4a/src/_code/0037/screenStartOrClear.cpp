#include "ui/ButtonHelp.h"
#include "shard/Shard0037.h"
#include "util/ScreenStartOrClear.h"

extern "C" {
extern ButtonHelpGlobalsA g_buttonHelp;

extern void asdTextDrawDirectoryEntry(u32 a, s32 b, s32 c, s32 d, s32 e, s32 f, u32 g);

void screenStartOrClear(s32 id, u32 arg)
{
    ButtonHelpWorkA *screen = g_buttonHelp.work;

    screen->helpState = 1;
    screen->mode = 1;
    if (id != 0) {
        asdTextDrawDirectoryEntry(screen->unk678, 2, -1, 0, 3, id, arg);
    } else {
        screen->mode = 0;
        screen->helpState = 0;
        screen->unk678 = 0;
    }
}

} /* extern "C" */
