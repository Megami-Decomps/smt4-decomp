/* NON_MATCHING: only the prologue differs: retail materialises the -1 at entry and clears the three flag bytes through r0 before forming the 0x1000 base; the build keeps the menu in r5 for them and loads -1 late. */
#include "shard/Shard004B.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "shard/W6_W6Match6_SpritePresetBank.h"
#include "ui/UiSpriteApi.h"
#include "ui/UiSpriteState.h"

/* Animation key tables passed to paramsInit; the original file defined them statically. */
static const UiSpritePositionKey sRowPositionKeys[] = {
    {0, 10, 0, -2, 4, 0, 0},
};
static const UiSpriteScalarKey sRowAlphaKeys[] = {
    {0.0f, 1.0f, 4, 0, 0},
    {0.0f, 1.0f, 10, 0, 0},
};
static const SpriteAnimationCommand sRowCommands[] = {
    {-3, 0, {0, 0, 0}, -3, 0, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
};

extern "C" {
void paramsClearPacket(UiResourceParameters *packet);

void spritePresetBankInitialize(SpritePresetBank *bank);
void uiSpriteBankApplyPreset(SpritePresetBank *bank, s32 preset);

// Reset row-selection state and bind the menu's row and extra sprites to their shared preset packet.
void FUN_004ba1f4(Menu4C *menu)
{
    menu->inputLocked = 0;
    menu->unk9ED = 0;
    menu->unk9EE = 0;
    menu->unk1014 = 0;
    menu->unk1018 = 0;
    for (s32 index = 0; index < 16; ++index)
        menu->resetFlags[index] = 0;
    menu->unk101C = -1;
    menu->unk1020 = -1;
    menu->selectionIds[0] = -1;
    menu->selectionIds[1] = -1;
    menu->selectionIds[2] = -1;
    menu->selectionIds[3] = -1;
    paramsClearPacket(&menu->rowParameters);
    paramsInit(&menu->rowParameters, sRowPositionKeys, sizeof(sRowPositionKeys), sRowAlphaKeys, sizeof(sRowAlphaKeys),
               NULL, 0, NULL, 0, sRowCommands, sizeof(sRowCommands));
    for (s32 index = 0; index < 10; ++index) {
        uiSpriteStateInitFromSource(reinterpret_cast<UiSpriteState *>(menu->rowsA10[index]), 0x1f, 0, &menu->rowParameters, 0x15, 1.0f);
        uiSpriteSetImageKeyframe(reinterpret_cast<UiSpriteState *>(menu->rowsA10[index]), 0, 0);
    }
    uiSpriteStateInitFromSource(reinterpret_cast<UiSpriteState *>(menu->unkF88), 0x1f, 0, &menu->rowParameters, 0x15, 1.0f);
    spritePresetBankInitialize(reinterpret_cast<SpritePresetBank *>(menu->blockA8));
    uiSpriteBankApplyPreset(reinterpret_cast<SpritePresetBank *>(menu->blockA8), 0xc);
}
}
