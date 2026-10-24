#include "common.h"

struct UniteView {
    /* 0x0000 */ u8 unk0000[0x6c78];
    /* 0x6C78 */ s32 value;
};

extern "C" {

extern UniteView *g_unite;

void scrSetResult(s32 result);

/* Script command: returns the unite work's word at 0x6C78. */
u32 FUN_003287cc(void)
{
    scrSetResult(g_unite->value);
    return 1;
}

} /* extern "C" */
