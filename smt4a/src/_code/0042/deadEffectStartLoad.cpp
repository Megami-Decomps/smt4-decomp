/* NON_MATCHING: instruction-identical; the callback LAB_0042184c has no symbol, so retail's literal word 0x0042184C carries no relocation. */
#include "common.h"

extern "C" {

typedef struct DeadEffect {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ s32 unk24;
    /* 0x28 */ u8 unk28[4];
    /* 0x2C */ s32 loadState;
    /* 0x30 */ u8 unk30[0x10];
    /* 0x40 */ u16 effectId;
} DeadEffect;

void LAB_0042184c(void);

s32 FUN_00100388(char *buffer, const char *path);
s32 FUN_00168750(char *path, s32 arg1, s32 arg2, void (*callback)(void), DeadEffect *effect);

/* Starts loading the dead effect model for `effectId`. */
void deadEffectStartLoad(DeadEffect *effect, u16 effectId)
{
    char path[64];

    effect->effectId = effectId;
    effect->loadState = 1;
    FUN_00100388(path, "battle/dead_effect/dead_effect%d.bam");
    effect->unk24 = 0;
    FUN_00168750(path, 0, 1, LAB_0042184c, effect);
}

} /* extern "C" */
