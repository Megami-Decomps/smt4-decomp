#include "shard/Shard0037.h"

extern "C" {

extern ScreenRef DAT_0057f0c4;

u8 screenGetSlotFlag(u32 index)
{
    ScreenObj *screen = DAT_0057f0c4.instance;

    if (screen != NULL && index < 6) {
        return screen->slots[index].flag;
    }
    return 0;
}

} /* extern "C" */
