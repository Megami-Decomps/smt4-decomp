#include "common.h"

struct Result003235a8 {
    /* 0x0000 */ u8 unk0000[0xd040];
    /* 0xd040 */ s32 value;
};

extern "C" {

extern Result003235a8 *g_result;

s32 scrSetResult(s32 value);

/* Script command: returns the result block's value at 0xd040, or zero without one. */
s32 FUN_003235a8(void)
{
    scrSetResult(g_result != NULL ? g_result->value : 0);
    return 1;
}

} /* extern "C" */
