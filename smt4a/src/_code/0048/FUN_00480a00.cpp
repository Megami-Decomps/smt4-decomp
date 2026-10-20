/* NON_MATCHING: register allocation of the final base * percent step (r1/r2 swapped). */
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
u32 FUN_00480a00(PercentObj *obj)
{
    u32 percent;
    bool hasBase;

    if (obj == NULL) {
        return 0;
    }
    hasBase = obj->base != 0;
    percent = hasBase ? obj->percent : 0;
    if (hasBase && percent != 0) {
        if (percent == 100) {
            percent = obj->base;
        } else {
            percent = (u32)(((u64)0x28f5c29 * (obj->base * percent)) >> 32);
            if ((int)percent <= 0) {
                percent = 1;
            }
        }
    }
    return percent;
}

} /* extern "C" */
