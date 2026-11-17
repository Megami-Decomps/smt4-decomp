#include "ui/ButtonHelpGlobal.h"
#include "shard/Shard0034.h"

extern "C" {

u16 screenGetSlotValue(u32 index)
{
    ButtonHelpWorkA *screen = g_buttonHelp.work;

    if (screen != NULL && index < 6) {
        return screen->slots[index].value;
    }
    return 0;
}

} /* extern "C" */
