#include "ui/ButtonHelp.h"
#include "shard/Shard0037.h"

extern "C" {
extern ButtonHelpGlobalsA g_buttonHelp;

u8 screenGetSlotFlag(u32 index)
{
    ButtonHelpWorkA *screen = g_buttonHelp.work;

    if (screen != NULL && index < 6) {
        return screen->kinds[index].kind;
    }
    return 0;
}

} /* extern "C" */
