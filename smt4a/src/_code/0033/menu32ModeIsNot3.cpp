#include "shard/Shard0032.h"

extern "C" {

u8 menu32ModeIsNot3(Menu32 *menu)
{
    return menu->mode != 3;
}

} /* extern "C" */
