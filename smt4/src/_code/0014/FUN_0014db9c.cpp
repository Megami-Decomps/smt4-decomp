#include "common.h"

extern "C" {

typedef struct Obj14db9c {
    u8 unk00[0x28];
    u8 flag;                       /* 0x28 */
    u8 unk29[0xf];
    u8 sub[1];                     /* 0x38 */
} Obj14db9c;

__declspec(noreturn) __weak void FUN_0014db9c_hook(u8 *sub, int arg);

void FUN_0014db9c(Obj14db9c *obj)
{
    obj->flag = 1;
    FUN_0014db9c_hook(obj->sub, 0);
}

} /* extern "C" */
