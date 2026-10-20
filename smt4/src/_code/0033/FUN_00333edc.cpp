#include "common.h"

extern "C" {

extern u16 *FUN_002b63ac(void);

void FUN_00333edc(void)
{
    u16 *pad = FUN_002b63ac();

    pad[0x15] = pad[0xe];
    pad[0x16] = pad[0xf];
}

} /* extern "C" */
