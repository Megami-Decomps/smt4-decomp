#include "common.h"

extern "C" {

struct Record0x24 {
    u8 data[0x24];
};

extern Record0x24 DAT_00439ae8[];
s32 FUN_002973ec(void);

Record0x24 *FUN_0023ea94(void)
{
    return &DAT_00439ae8[FUN_002973ec()];
}

} /* extern "C" */
