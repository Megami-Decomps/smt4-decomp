#include "shard/Shard004D.h"

extern "C" {

extern void FUN_002a48ac(u8 *block, u32 a);
extern void FUN_002a48e0(u8 *block, u32 a);
extern void FUN_0031d1b4(u8 *block, u32 a);
extern void FUN_0031d1d8(u8 *block, u32 a);

void setListWindow(u8 *obj, u32 a, u32 b)
{
    if (*obj == 0) {
        FUN_002a48e0(obj + 0x10, a);
        FUN_0031d1d8(obj + 0x10, b);
    }
    if (*obj == 1) {
        FUN_002a48ac(obj + 0x10, a);
        FUN_0031d1b4(obj + 0x10, b);
    }
}

} /* extern "C" */
