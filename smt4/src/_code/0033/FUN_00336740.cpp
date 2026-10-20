/* NON_MATCHING: register allocation only: retail uses r1 (not r0) as the temp for flags |= 0x1000000 */
/* Returns the context's current value, or -1 when it has nothing pending; prepares it first if needed. */
#include "common.h"

extern "C" {

typedef struct Context {
    /* 0x0000 */ u8 unk0000[0x1FC8];
    /* 0x1FC8 */ s16 value;
    /* 0x1FCA */ u8 unk1FCA[0x24D6];
    /* 0x44A0 */ u32 flags;
    /* 0x44A4 */ u8 unk44A4[4];
    /* 0x44A8 */ u32 flags2;
    /* 0x44AC */ u8 unk44AC[0x454];
    /* 0x4900 */ u8 unk4900[0x6C];
    /* 0x496C */ u16 pendingA;
    /* 0x496E */ u16 pendingB;
} Context;

extern void pickerAdvance(Context *ctx);

s32 FUN_00336740(Context *ctx)
{
    u32 *flags = &ctx->flags;
    s32 value;

    if ((ctx->flags2 & 0x10) == 0 && (*flags & 0x1000000) == 0) {
        pickerAdvance(ctx);
        *flags |= 0x1000000;
    }
    value = ctx->value;
    if ((*flags & 0x1004) == 0) {
        if (ctx->pendingA == 0 && ctx->pendingB == 0) {
            value = -1;
        }
    }
    return value;
}

}
