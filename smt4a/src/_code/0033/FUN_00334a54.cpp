/* Frees the context's primary and secondary handles, then runs the shared teardown. */
#include "common.h"

extern "C" {

typedef struct Context {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s32 hasPrimary;
    /* 0x10 */ u32 owner;
    /* 0x14 */ u32 primary;
    /* 0x18 */ u8 unk18[0x68];
    /* 0x80 */ s32 unk80;
    /* 0x84 */ s32 secondary;   /* -1 when none */
} Context;

extern u32 g_aocSystem;

extern Context *jobGetWork(void);
extern void FUN_001b2d54(u32 table, u32 owner, u32 handle);
extern void FUN_0019a7f4(u32 owner, u32 handle);
extern void asdMemFree(Context *ctx);

void FUN_00334a54(void)
{
    Context *ctx = jobGetWork();

    if (ctx->hasPrimary != 0) {
        FUN_0019a7f4(ctx->owner, ctx->primary);
        FUN_001b2d54(g_aocSystem, ctx->owner, ctx->primary);
        ctx->hasPrimary = 0;
    }
    if (ctx->secondary != -1) {
        FUN_0019a7f4(ctx->owner, ctx->secondary);
        FUN_001b2d54(g_aocSystem, ctx->owner, ctx->secondary);
        ctx->secondary = -1;
        ctx->unk80 = 0;
    }
    asdMemFree(ctx);
}

}
