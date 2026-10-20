#include "common.h"

extern "C" {

extern struct {
    u8 unk00;
    u8 unk01;
} DAT_00471a70;

void FUN_0011d0ec(void)
{
    DAT_00471a70.unk01 = 1;
}

} /* extern "C" */
