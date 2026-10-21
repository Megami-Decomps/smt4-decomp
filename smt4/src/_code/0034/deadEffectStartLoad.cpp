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

void LAB_0034d4f8(void);

s32 textFormatBuffer(char *buffer, const char *path);
s32 FUN_002b6480(char *path, s32 arg1, s32 arg2, void (*callback)(void), DeadEffect *effect);

/* Starts loading the dead effect model for `effectId`. */
void deadEffectStartLoad(DeadEffect *effect, u16 effectId)
{
    char path[64];

    effect->effectId = effectId;
    effect->loadState = 1;
    textFormatBuffer(path, "battle/dead_effect/dead_effect%d.bcmdl");
    effect->unk24 = 0;
    FUN_002b6480(path, 0, 1, LAB_0034d4f8, effect);
}

} /* extern "C" */
