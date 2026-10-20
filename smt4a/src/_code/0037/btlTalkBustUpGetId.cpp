#include "common.h"

extern "C" {

typedef struct BtlTalkBustUp {
    /* 0x000 */ u8 unk000[0x2F8];
    /* 0x2F8 */ s32 phase;
    /* 0x2FC */ u8 unk2FC[0xC];
    /* 0x308 */ u32 id;
} BtlTalkBustUp;

extern BtlTalkBustUp *g_btlTalkBustUp;

/* Returns the id of the running talk bust-up (16-bit), 0 when none is active. */
u32 btlTalkBustUpGetId(void)
{
    if (g_btlTalkBustUp != NULL) {
        if (g_btlTalkBustUp->phase < 0) {
            return 0;
        }
        return (u16)g_btlTalkBustUp->id;
    }
    return 0;
}

} /* extern "C" */
