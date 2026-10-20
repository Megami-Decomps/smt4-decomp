#include "common.h"

extern "C" {

typedef struct Obj22e714 {
    u8 unk00[0x2011];
    s8 value;                      /* 0x2011 */
} Obj22e714;

typedef struct Global22e714 {
    u8 unk00[4];
    Obj22e714 *obj;                /* 0x04 */
} Global22e714;

extern Global22e714 DAT_00588fd0;

s8 FUN_0022e714(void)
{
    return DAT_00588fd0.obj->value;
}

} /* extern "C" */
