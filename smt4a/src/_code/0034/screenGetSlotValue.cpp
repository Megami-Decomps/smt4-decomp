#include "shard/Shard0034.h"

extern "C" {

extern ScreenRef DAT_0057f0c4;

u16 screenGetSlotValue(u32 index)
{
    ScreenObj *screen = DAT_0057f0c4.instance;

    if (screen != NULL && index < 6) {
        return screen->slots[index].value;
    }
    return 0;
}

} /* extern "C" */
