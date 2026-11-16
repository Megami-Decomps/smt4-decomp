/* NON_MATCHING: register allocation only: retail keeps the entry table in r2 and the tested byte in r1 (built r1/r2); the final transition's stores match through btlStepEnter. */
#include "battle/btlMain.h"

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

extern void btlLoadEnemyModelInfo(Context *ctx, s32 arg);
extern s32 FUN_003f0f2c(Context *ctx);
extern void FUN_003e03b0(BtlStep *step, Context *ctx);

/* Starts the step: state 7 (after btlLoadEnemyModelInfo) when one of entries 4-53 is active and
 * FUN_003f0f2c refuses, otherwise state 8 through FUN_003e03b0. */
void FUN_003e1114(BtlStep *step, Context *ctx)
{
    s32 i;

    for (i = 4; i < 54; i++) {
        Entry *entry = &ctx->entries[i];
        if (entry->active != 0) {
            btlLoadEnemyModelInfo(ctx, 1);
            step->state = 7;
            step->counters.unk10 = 0;
            step->counters.unk0C = 0;
            if (FUN_003f0f2c(ctx) == 0) {
                return;
            }
            break;
        }
    }
    btlStepEnter(step, 8);
    FUN_003e03b0(step, ctx);
}

} /* extern "C" */
