#include "common.h"
#include "AsdSDK/Source/Gfx/Font/AsdFont.h"

extern "C" {

extern const u8 DAT_0055c618[];  /* vtable */
const void **FUN_00175f54(void);

/* Stores the vtable at 0x0055c618 into the object returned by FUN_00175f54. */
void initVtable0055c618(void)
{
    const void **object = FUN_00175f54();
    *object = DAT_0055c618;
}

} /* extern "C" */
