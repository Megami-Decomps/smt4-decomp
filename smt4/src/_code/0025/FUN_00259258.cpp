#include "common.h"

extern "C" {

typedef struct Target {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ u8 unk30;
} Target;

extern struct {
    u8 unk00[8];
    Target *target;
} g_messageMain;

void FUN_00259258(void)
{
    if (g_messageMain.target != NULL) {
        g_messageMain.target->unk30 = 1;
    }
}

} /* extern "C" */
