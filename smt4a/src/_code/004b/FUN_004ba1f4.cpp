/* NON_MATCHING: reset-array stores use an offset literal, packet arguments use strd, and sprite/bank pointers remain live; 92 versus retail 88 instructions. */
#include "shard/Shard004B.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "shard/W6_W6Match6_SpritePresetBank.h"
#include "ui/UiSpriteState.h"

extern "C" {
extern const u8 DAT_00532924[];
void paramsClearPacket(UiResourceParameters *packet);

void FUN_0014e188(UiSpriteState *sprite, s32 imageBank, s32 animation, UiResourceParameters *packet, s32 flags, f32 scale);
void uiSpriteSetImageKeyframe(UiSpriteState *sprite, s32 key, s32 flags);
void FUN_004cf7cc(SpritePresetBank *bank);
void uiSpriteBankApplyPreset(SpritePresetBank *bank, s32 preset);

// Reset row-selection state and bind the menu's row and extra sprites to their shared preset packet.
void FUN_004ba1f4(Menu4C *menu)
{
    // The packet starts one byte into byte-aligned shared padding, so it needs a local aligned view.
    struct MenuSpriteParameters {
        u8 prefix[0x9ec];
        u8 active, completed, pending, unk9EF;
        UiResourceParameters packet;
    };
    typedef char MenuSpriteParameterOffsets[offsetof(MenuSpriteParameters, active) == 0x9ec && offsetof(MenuSpriteParameters, packet) == 0x9f0 ? 1 : -1];
    MenuSpriteParameters *parameters = reinterpret_cast<MenuSpriteParameters *>(menu);
    parameters->active = 0;
    parameters->completed = 0;
    parameters->pending = 0;
    menu->unk1014 = 0;
    menu->unk1018 = 0;
    for (s32 index = 0; index < 16; ++index)
        menu->resetFlags[index] = 0;
    menu->unk101C = -1;
    menu->unk1020 = -1;
    for (s32 index = 0; index < 4; ++index)
        menu->selectionIds[index] = -1;
    paramsClearPacket(&parameters->packet);
    // These three adjacent tables are anchored by the final table's retail data symbol.
    paramsInit(&parameters->packet, DAT_00532924 - 0x24, 0xc, DAT_00532924 - 0x18, 0x18, 0, 0, 0, 0, DAT_00532924, 0x38);
    for (s32 index = 0; index < 10; ++index) {
        UiSpriteState *sprite = reinterpret_cast<UiSpriteState *>(menu->rowsA10[index]);
        FUN_0014e188(sprite, 0x1f, 0, &parameters->packet, 0x15, 1.0f);
        uiSpriteSetImageKeyframe(sprite, 0, 0);
    }
    FUN_0014e188(reinterpret_cast<UiSpriteState *>(menu->unkF88), 0x1f, 0, &parameters->packet, 0x15, 1.0f);
    SpritePresetBank *bank = reinterpret_cast<SpritePresetBank *>(menu->blockA8);
    FUN_004cf7cc(bank);
    uiSpriteBankApplyPreset(bank, 0xc);
}
}
