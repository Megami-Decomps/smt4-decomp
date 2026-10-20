#include "common.h"

extern "C" {

typedef struct Target {
    /* 0x00 */ u8 unk00[0x32];
    /* 0x32 */ u8 unk32;
} Target;

extern struct {
    u8 unk00[8];
    Target *target;
} g_messageMain;

void FUN_00230df0(u8 value)
{
    g_messageMain.target->unk32 = value;
}

} /* extern "C" */
