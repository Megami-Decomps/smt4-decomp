#include "shard/Shard0032.h"

extern "C" {

u8 menu32ModeIsNot4(Menu32 *menu)
{
    return menu->mode != 4;
}

} /* extern "C" */
