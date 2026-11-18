/* NON_MATCHING: retail derives the adjacent preset table addresses from one pooled base; initialization argument scheduling differs. */
#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "ui/ParamsClearPacket.h"
#include "shard/W6_W6Match6_SpritePresetBank.h"

extern "C" {

void uiSpriteBankApplyPreset(SpritePresetBank *, s32);
}

/* Animation tables for paramsInit, defined statically in the original file. */
static const u32 sMoveKeys[33] = {
    0x140, 0x0, 0x8, 0x0, 0xfec0, 0x4, 0x172, 0x0, 0x10040,
    0xfec0, 0x0, 0x8, 0x0, 0x140, 0x4, 0xc8, 0x0, 0x6,
    0x0, 0xc8, 0x6, 0x1e, 0x0, 0x5, 0x0, 0xffe2, 0x3,
    0xffe2, 0x0, 0x5, 0x0, 0x1e, 0x3
};
struct PresetFloatKey {
    f32 from;
    f32 to;
    s32 frames;
};
static const PresetFloatKey sFadeKeys[6] = {
    { 1.0f, 0.5f, 20 }, { 0.5f, 1.0f, 40 }, { 0.0f, 1.0f, 5 },
    { 1.0f, 0.0f, 3 }, { 0.0f, 1.0f, 30 }, { 1.0f, 0.0f, 30 }
};
static const s32 sSpriteKeys[56] = {
    0, 0, -3, 0, 0, -3, 0, 0, 0, -3, 1, 0, -3, 0,
    -3, 0, -3, -2, 0, -3, 0, -1, 0, -1, -1, 0, -1, 0,
    -3, 0, -3, 4, 0, -3, 0, -3, 0, -3, 5, 0, -3, 0,
    -2, 0, -3, -2, 0, -3, 0, -1, 0, -1, -1, 0, -1, 0
};

/* Load the preset tables and initialize every sprite in the bank. */
extern "C" void spritePresetBankInitialize(SpritePresetBank *bank)
{
    paramsClearPacket(&bank->parameters);
    paramsInit(&bank->parameters, sMoveKeys, sizeof(sMoveKeys), sFadeKeys, sizeof(sFadeKeys),
               NULL, 0, NULL, 0, sSpriteKeys, sizeof(sSpriteKeys));
    for (s32 i = 0; i < 13; ++i) {
        uiSpriteStateInitFromSource(&bank->sprites[i], 19, 1, (UiResourceParameters *)(bank), 21, 1.0f);
        uiSpriteBankApplyPreset(bank, i);
    }
}
