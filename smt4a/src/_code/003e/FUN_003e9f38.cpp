#include "common.h"

struct BtlMainFUN_003e9f38 {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ s32 total;
};

extern "C" {

extern BtlMainFUN_003e9f38 g_btlMain;

/* Adds the amount to the battle total at 0x24. */
void FUN_003e9f38(void *self, s32 amount)
{
    g_btlMain.total += amount;
}

} /* extern "C" */
