#include "common.h"

extern "C" {

int FUN_0010baf8(void);
int FUN_002c5210(void);

extern struct {
    s8 unk00;
    s8 unk01;
} g_titleFlags;

s32 FUN_00102884(void)
{
    if (FUN_002c5210() == 1) {
        if (g_titleFlags.unk01 != 0 && g_titleFlags.unk00 == 0) {
            FUN_0010baf8();
        }
    }
    return 0;
}

} /* extern "C" */
