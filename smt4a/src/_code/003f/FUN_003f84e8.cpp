/* NON_MATCHING: parameter argument stores and resource-bundle literal alias differ. */
#include "ui/UiSpriteState.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"

struct SpritePanelResourceBundle {
    u8 firstChunk[0x54];
    u8 secondChunk[0x6C];
    u8 fifthChunk[0x16C];
};
typedef char SpritePanelResourceOffsets[
    offsetof(SpritePanelResourceBundle, secondChunk) == 0x54 &&
    offsetof(SpritePanelResourceBundle, fifthChunk) == 0xC0 &&
    sizeof(SpritePanelResourceBundle) == 0x22C ? 1 : -1];

extern "C" {
extern const SpritePanelResourceBundle DAT_0052d140;
void paramsClearPacket(UiResourceParameters *);

void FUN_0014e188(UiSpriteState *, u32, s32, UiResourceParameters *, u32, f32);
void uiSpriteSetKeyframe(UiSpriteState *, s32, s32);
void uiSpriteSetImageKeyframe(UiSpriteState *, s32, s32);
void uiSpriteSelectAnim(UiSpriteState *, s32);

/* Load the shared animation packet and initialize this panel's individual sprite states. */
void FUN_003f84e8(void *work)
{
    struct PanelView {
        u8 unk000[0x14C];
        UiResourceParameters parameters;
        UiSpriteState sprites[8];
    };
    typedef char PanelOffsets[
        sizeof(UiResourceParameters) == 0x20 &&
        offsetof(PanelView, parameters) == 0x14C &&
        offsetof(PanelView, sprites) == 0x16C && sizeof(PanelView) == 0x5CC ? 1 : -1];
    PanelView *panel = (PanelView *)work;
    paramsClearPacket(&panel->parameters);
    paramsInit(&panel->parameters, DAT_0052d140.firstChunk, sizeof(DAT_0052d140.firstChunk),
               DAT_0052d140.secondChunk, sizeof(DAT_0052d140.secondChunk),
               NULL, 0, NULL, 0, DAT_0052d140.fifthChunk, sizeof(DAT_0052d140.fifthChunk));
    FUN_0014e188(&panel->sprites[0], 0x31, 0, &panel->parameters, 0xC9, 1.0f);
    uiSpriteSetKeyframe(&panel->sprites[0], 1, 0);
    uiSpriteSetImageKeyframe(&panel->sprites[0], 0, 0);
    FUN_0014e188(&panel->sprites[1], 0x31, 0, &panel->parameters, 0xC9, 1.0f);
    uiSpriteSetKeyframe(&panel->sprites[1], 1, 0);
    uiSpriteSetImageKeyframe(&panel->sprites[1], 0, 0);
    FUN_0014e188(&panel->sprites[2], 0x31, 0, &panel->parameters, 0xC9, 1.0f);
    FUN_0014e188(&panel->sprites[3], 0x31, 0, &panel->parameters, 0xC9, 1.0f);
    uiSpriteSelectAnim(&panel->sprites[3], 0);
    FUN_0014e188(&panel->sprites[4], 0x31, 0, &panel->parameters, 0xC9, 1.0f);
    uiSpriteSetKeyframe(&panel->sprites[4], 4, 0);
    FUN_0014e188(&panel->sprites[5], 0x31, 0, &panel->parameters, 0xC9, 1.0f);
    uiSpriteSelectAnim(&panel->sprites[5], 1);
    FUN_0014e188(&panel->sprites[6], 0x31, 0, &panel->parameters, 0xC9, 1.0f);
    uiSpriteSelectAnim(&panel->sprites[6], 2);
    FUN_0014e188(&panel->sprites[7], 0x31, 0, &panel->parameters, 0xC9, 1.0f);
}
}
