#include "shard/Shard0032.h"

extern "C" {

u8 menu32ModeIsNot2(Menu32 *menu)
{
    return menu->mode != 2;
}

} /* extern "C" */
