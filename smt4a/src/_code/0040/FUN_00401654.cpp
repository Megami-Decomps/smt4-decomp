#include "common.h"

extern "C" {

extern u8 LAB_0045b824;

u8 *FUN_00467040(void);
u8 *__aeabi_vec_ctor_nocookie_nodtor(u8 *member, u8 *data, s32 count, s32 size);

/* Builds the base object, then the member at 0x20 from a 4-entry table; returns the object. */
u8 *FUN_00401654(void)
{
    u8 *object = FUN_00467040();

    return __aeabi_vec_ctor_nocookie_nodtor(object + 0x20, &LAB_0045b824, 4, 0x10) - 0x20;
}

} /* extern "C" */
