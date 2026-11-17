#include "result/ResultInput.h"
#include "shard/TextureDrawCall.h"
#include "ui/UiSpriteApi.h"

extern "C" {
void efctSetSpeed(f32 speed);
void texDrawCompositeSprite(u32 kind, u32 table, u32 sprite, s32 x, s32 y, u32 parameter);

void resultDrawRewardDetails(ResultInputWork* work, s32 x, s32 y, s32 alternate)
{
    efctSetSpeed(vec2GetSpeed((const UiSpriteState *)&work->rewardPosition));
    texDrawCompositeSprite(2, 0x1D, 10, x, y, 0xBF);
    efctSetSpeed(1.0f);
    texDrawTableEntryAtStoredOrigin(2, 0x1D, 0xF7, x, y, 0xC4);
    if (alternate) {
        texDrawTableEntryAtStoredOrigin(2, 0x1D, 0x184, x, y, 0xC4);
        texDrawTableEntryAtStoredOrigin(2, 0x1D, 0x185, x, y, 0xC4);
        texDrawTableEntryAtStoredOrigin(2, 0x1D, 0x186, x, y, 0xC6);
        efctSetSpeed(vec2GetSpeed((const UiSpriteState *)&work->detailPosition));
        texDrawTableEntryAtStoredOrigin(2, 0x1D, 0x187, x, y, 0xC9);
        efctSetSpeed(1.0f);
        return;
    }
    texDrawTableEntryAtStoredOrigin(2, 0x1D, 0xF8, x, y, 0xC4);
    texDrawTableEntryAtStoredOrigin(2, 0x1D, 0xF9, x, y, 0xC4);
    texDrawTableEntryAtStoredOrigin(2, 0x1D, 0xFA, x, y, 0xC6);
    efctSetSpeed(vec2GetSpeed((const UiSpriteState *)&work->detailPosition));
    texDrawTableEntryAtStoredOrigin(2, 0x1D, 0x17F, x, y, 0xC9);
    efctSetSpeed(1.0f);
}
}
