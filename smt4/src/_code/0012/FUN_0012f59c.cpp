#include "common.h"

extern "C" {

extern struct {
    u8 unk00;
    s8 unk01;
} DAT_0044e908;

s32 FUN_0012f59c(void)
{
    return DAT_0044e908.unk01;
}

} /* extern "C" */
