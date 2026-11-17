#include "ui/ButtonHelpGlobal.h"
#include "shard/Shard0037.h"

extern "C" {

u8 screenGetSlotFlag(u32 index)
{
    ButtonHelpWorkA *screen = g_buttonHelp.work;

    if (screen != NULL && index < 6) {
        return screen->slots[index].kind;
    }
    return 0;
}

} /* extern "C" */
