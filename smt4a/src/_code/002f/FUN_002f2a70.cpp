/* True when the object is valid and either the global override flag is set or it has the 0x800 property. */
#include "common.h"

extern "C" {

extern u8 DAT_00594978;

s32 FUN_002eb6ae(void *object, u32 property);
s32 FUN_0030ed94(void *object);

s32 FUN_002f2a70(void *object)
{
    if (FUN_0030ed94(object) != 0 && (DAT_00594978 != 0 || FUN_002eb6ae(object, 0x800) != 0)) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
