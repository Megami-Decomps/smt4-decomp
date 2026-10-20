#include "common.h"

extern "C" {

extern u8 *FUN_002b63ac(void);

u8 *FUN_002bd1fc(void)
{
    u8 *pad = FUN_002b63ac();

    return pad + 0x4c;
}

} /* extern "C" */
