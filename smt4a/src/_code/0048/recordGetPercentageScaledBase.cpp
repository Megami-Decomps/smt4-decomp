#include "common.h"

extern "C" {

/* Object with a 10-bit base value in its flags word and a percentage at 0x2e. */
typedef struct {
    u8 unk00[0x24];
    u32 base : 10;      /* 0x24 */
    u32 unk24b : 22;
    u8 unk28[6];
    u16 percent;        /* 0x2e */
} PercentObj;

/* Scales the object's base value by its percentage (floor, at least 1); 0 when either is 0. */
u32 recordGetPercentageScaledBase(PercentObj *obj)
{
    if (obj == NULL)
        return 0;
    if (obj->base == 0)
        return 0;
    u16 percent = obj->percent;
    if (percent == 0)
        return 0;
    if (percent == 100)
        return obj->base;
    u32 result = obj->base * percent / 100;
    if ((s32)result <= 0)
        result = 1;
    return result;
}

} /* extern "C" */
