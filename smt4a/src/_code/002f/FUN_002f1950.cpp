#include "common.h"

extern "C" {

u32 FUN_002eabfc(void);
u8 *FUN_002eac18(u32 object, u32 offset);

/* Returns the byte at the address FUN_002eac18 yields for the object and FUN_002eabfc's offset. */
u8 FUN_002f1950(u32 object)
{
    u32 offset;
    u8 *address;

    offset = FUN_002eabfc();
    address = FUN_002eac18(object, offset);
    return *address;
}

} /* extern "C" */
