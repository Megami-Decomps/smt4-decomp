#include "common.h"

extern "C" {

extern int FUN_0037d604(u32 *block);
extern int FUN_0037f188(int block);

extern unsigned int DAT_00421af0[];
int FUN_0037a1bc(u32 *obj)
{
    int block;

    *obj = (unsigned int)DAT_00421af0;
    block = FUN_0037d604(obj + 0x754);
    block = FUN_0037f188(block - 0x1c5c);
    return block - 0xf4;
}

} /* extern "C" */
