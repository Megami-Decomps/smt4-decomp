#include "common.h"

extern "C" {

extern u8 LAB_0045b824;

u8 *FUN_00467040(void);
u8 *FUN_002f5020(u8 *member, u8 *data, s32 count, s32 size);

/* Builds the base object, then the member at 0x20 from a 4-entry table; returns the object. */
u8 *FUN_00401654(void)
{
    u8 *object = FUN_00467040();

    return FUN_002f5020(object + 0x20, &LAB_0045b824, 4, 0x10) - 0x20;
}

} /* extern "C" */
