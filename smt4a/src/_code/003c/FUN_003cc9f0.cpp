#include "common.h"

struct UniteWord {
    /* 0x00 */ u8 unk00[0x67c8];
    /* 0x67c8 */ s32 value;
};

extern "C" {

extern UniteWord *g_unite;

void scrSetResult(s32 result);

/* Script command: reports the unite block's word at 0x67c8. */
u32 FUN_003cc9f0(void)
{
    scrSetResult(g_unite->value);
    return 1;
}

} /* extern "C" */
