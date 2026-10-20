#include "shard/Shard0032.h"

extern "C" {

/* True while the menu's unk387C state is 3, 4 or 5. */
u32 menu32State387CIs345(Menu32 *menu)
{
    s32 state = menu->unk387C;

    if (state == 3 || state == 4 || state == 5) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
