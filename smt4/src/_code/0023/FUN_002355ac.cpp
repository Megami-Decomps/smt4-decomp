#include "common.h"

extern "C" {

typedef struct Target {
    /* 0x00 */ u8 unk00[0x33];
    /* 0x33 */ u8 unk33;
} Target;

extern struct {
    u8 unk00[8];
    Target *target;
} g_messageMain;

void FUN_002355ac(u8 value)
{
    g_messageMain.target->unk33 = value;
}

} /* extern "C" */
