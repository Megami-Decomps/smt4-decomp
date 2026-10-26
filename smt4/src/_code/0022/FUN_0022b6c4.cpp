/* Resets the per-turn state of the context and arms the notification flag for its current entry. */
#include "common.h"
#include "code/Code0022_Smt4.h"

extern "C" {

typedef struct Slot {
    /* 0x00 */ u8 unk00[0x8C];
} Slot; /* 0x8C */

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x5A];
    /* 0x5A */ u16 index;
} Entry;

typedef struct Context {
    /* 0x000 */ u8 unk000[0xA8];
    /* 0x0A8 */ u8 unk0A8[0x488];
    /* 0x530 */ Entry *entries[1];  /* indexed by flaggedValueHolderGetTotal(ctx) */
    /* 0x534 */ u8 unk534[0xFD];
    /* 0x631 */ u8 unk631;
    /* 0x632 */ u8 unk632;
    /* 0x633 */ u8 unk633[0x21];
    /* 0x654 */ Slot slots[10];
    /* 0xBCC */ u8 unkBCC[0x8C];
    /* 0xC58 */ u32 unkC58;
    /* 0xC5C */ u32 unkC5C;
    /* 0xC60 */ s32 unkC60;
    /* 0xC64 */ s32 unkC64;
    /* 0xC68 */ u8 unkC68[0x10];
    /* 0xC78 */ u8 flags[0x40];
    /* 0xCB8 */ u32 unkCB8;
} Context;

extern void FUN_00233240(void *obj, s32 arg);
extern s32 flaggedValueHolderGetTotal(Context *ctx);
extern void asdTMTexTableLoadEntryAsync(s32 table, u32 entry);
extern void uiSpriteSetImageKeyframe(Slot *slot, s32 a, s32 b);

void FUN_0022b6c4(Context *ctx)
{
    s32 i;
    s32 index;
    s32 next;

    ctx->unk631 = 0;
    ctx->unk632 = 0;
    ctx->unkC58 = 0;
    ctx->unkC5C = 0;
    ctx->unkCB8 = 0;
    for (i = 0; i < 10; i++) {
        uiSpriteSetImageKeyframe(&ctx->slots[i], 0, 0);
    }
    FUN_00233240(ctx->unk0A8, 0);
    FUN_00233240(ctx->unk0A8, 1);
    index = ctx->entries[flaggedValueHolderGetTotal(ctx)]->index;
    next = index + 1;
    ctx->unkC64 = next;
    ctx->unkC60 = index + 2;
    if (ctx->flags[next] == 0) {
        asdTMTexTableLoadEntryAsync(0x2a, next);
        ctx->flags[next] = 1;
    }
}

}
