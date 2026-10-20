#include "common.h"

extern "C" {

extern int FUN_0037d604(u32 *block);
extern int FUN_0037f188(int block);

int FUN_0037a1c0(u32 *obj, u32 value)
{
    int block;

    *obj = value;
    block = FUN_0037d604(obj + 0x754);
    block = FUN_0037f188(block - 0x1c5c);
    return block - 0xf4;
}

} /* extern "C" */
