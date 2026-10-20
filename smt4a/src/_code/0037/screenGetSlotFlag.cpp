#include "shard/Shard0037.h"

extern "C" {

extern ScreenRef g_buttonHelp;

u8 screenGetSlotFlag(u32 index)
{
    ScreenObj *screen = g_buttonHelp.instance;

    if (screen != NULL && index < 6) {
        return screen->slots[index].flag;
    }
    return 0;
}

} /* extern "C" */
