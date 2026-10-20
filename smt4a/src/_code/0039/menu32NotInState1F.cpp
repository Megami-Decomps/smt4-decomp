#include "shard/Shard0039.h"

extern "C" {

/* True unless the menu exists and unk387C is 0x1F. */
u32 menu32NotInState1F(Menu32 *menu)
{
    if (menu == NULL || menu->unk387C != 0x1F) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
