#include "shard/Shard0038.h"
#include "shard/menu32ModeIsNot5.h"

extern "C" {

u8 menu32ModeIsNot5(Menu32 *menu)
{
    return menu->mode != 5;
}

} /* extern "C" */
