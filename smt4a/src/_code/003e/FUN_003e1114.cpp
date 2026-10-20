/* NON_MATCHING: register allocation: retail keeps the entry table in r2 and the tested byte in r1 (built r1/r2), and stores the state word after the first clear in the final path */
#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x000 */ u8 unk000[0x23A];
    /* 0x23A */ u8 active;
    /* 0x23B */ u8 unk23B[0x1CD];
} Entry; /* 0x408 */

typedef struct Context {
    /* 0x0000 */ u8 unk0000[0x1FFC];
    /* 0x1FFC */ Entry *entries;
} Context;

typedef struct Action {
    /* 0x00 */ s32 state;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
} Action;

extern void FUN_003f12d4(Context *ctx, s32 arg);
extern s32 FUN_003f0f2c(Context *ctx);
extern void FUN_003e03b0(Action *action, Context *ctx);

/* Starts the action: state 7 (after FUN_003f12d4) when one of entries 4-53 is active and
 * FUN_003f0f2c refuses, otherwise state 8 through FUN_003e03b0. */
void FUN_003e1114(Action *action, Context *ctx)
{
    Entry **list = &ctx->entries;
    Entry *entries = *list;
    s32 i;

    for (i = 4; i < 54; i++) {
        if (entries[i].active != 0) {
            FUN_003f12d4(ctx, 1);
            action->state = 7;
            action->unk10 = 0;
            action->unk0C = 0;
            if (FUN_003f0f2c(ctx) == 0) {
                return;
            }
            break;
        }
    }
    action->state = 8;
    action->unk10 = 0;
    action->unk0C = 0;
    FUN_003e03b0(action, ctx);
}

} /* extern "C" */
