#include "common.h"

struct BtlTalkView {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ s32 value;
};

extern "C" {
extern BtlTalkView *g_btlTalk;
void scrSetResult(s32 result);
}

extern "C" s32 FUN_003805c8(void)
{
    scrSetResult(g_btlTalk->value);
    return 1;
}
