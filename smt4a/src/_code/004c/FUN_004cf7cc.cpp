/* NON_MATCHING: retail derives the adjacent preset table addresses from one pooled base; initialization argument scheduling differs. */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "ui/ParamsClearPacket.h"
#include "shard/W6_W6Match6_SpritePresetBank.h"

extern "C" {
void FUN_0014e188(UiAnimatedSprite *, s32, s32, SpritePresetBank *, f32, s32);

void uiSpriteBankApplyPreset(SpritePresetBank *, s32);
extern const u8 DAT_00535e90[];
extern const u8 DAT_00535f14[];
extern const u8 DAT_00535f5c[];
}

/* Load the preset tables and initialize every sprite in the bank. */
extern "C" void FUN_004cf7cc(SpritePresetBank *bank)
{
    paramsClearPacket(&bank->parameters);
    paramsInit(&bank->parameters, DAT_00535e90, 0x84, DAT_00535f14, 0x48,
               0, 0, 0, 0, DAT_00535f5c, 0xE0);
    for (s32 i = 0; i < 13; ++i) {
        FUN_0014e188(&bank->sprites[i], 19, 1, bank, 1.0f, 21);
        uiSpriteBankApplyPreset(bank, i);
    }
}
