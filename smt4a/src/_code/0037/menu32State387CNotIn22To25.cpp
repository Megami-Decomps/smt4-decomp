#include "shard/Shard0037.h"

extern "C" {

/* False while the menu's unk387C is in 0x22..0x25. */
u32 menu32State387CNotIn22To25(Menu32 *menu)
{
    s32 state = menu->unk387C;

    if (state == 0x22 || state == 0x23 || state == 0x24 || state == 0x25) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
