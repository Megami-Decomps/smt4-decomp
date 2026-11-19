#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "ui/UiSpriteState.h"

extern "C" {
void paramsClearPacket(UiResourceParameters *);

/* Animation key tables passed to paramsInit; the original file defined them statically. */
static const UiSpritePositionKey sPanelPositionKeys[] = {
    {-30, 0, 0, 0, 5, 0, 0},
    {30, 0, 0, 0, 5, 0, 0},
    {0, 0, -30, 0, 3, 0, 0},
    {0, 0, 30, 0, 3, 0, 0},
    {300, 0, -60, 0, 40, 1, 0},
    {0, -60, 0, 0, 5, 0, 0},
    {0, 60, 0, 0, 5, 0, 0},
};
static const UiSpriteScalarKey sPanelAlphaKeys[] = {
    {0.0f, 1.0f, 5, 0, 0},
    {1.0f, 0.0f, 3, 0, 0},
    {0.2f, 1.0f, 15, 0, 0},
    {1.0f, 1.0f, 1, 0, 0},
    {1.0f, 0.2f, 14, 0, 0},
    {0.0f, 1.0f, 4, 0, 0},
    {0.0f, 0.0f, 8, 0, 0},
    {0.0f, 1.0f, 3, 0, 0},
    {1.0f, 0.0f, 20, 0, 0},
};
static const SpriteAnimationCommand sPanelCommands[] = {
    {-3, 0, {0, 0, 0}, -3, 2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 4, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 5, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 6, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 7, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 8, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 6, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
};



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
    paramsInit(&panel->parameters, sPanelPositionKeys, sizeof(sPanelPositionKeys), sPanelAlphaKeys,
               sizeof(sPanelAlphaKeys), NULL, 0, NULL, 0, sPanelCommands, sizeof(sPanelCommands));
    uiSpriteStateInitFromSource(&panel->sprites[0], 0x31, 0, &panel->parameters, 0xC9, 1.0f);
    uiSpriteSetKeyframe(&panel->sprites[0], 1, 0);
    uiSpriteSetImageKeyframe(&panel->sprites[0], 0, 0);
    uiSpriteStateInitFromSource(&panel->sprites[1], 0x31, 0, &panel->parameters, 0xC9, 1.0f);
    uiSpriteSetKeyframe(&panel->sprites[1], 1, 0);
    uiSpriteSetImageKeyframe(&panel->sprites[1], 0, 0);
    uiSpriteStateInitFromSource(&panel->sprites[2], 0x31, 0, &panel->parameters, 0xC9, 1.0f);
    uiSpriteStateInitFromSource(&panel->sprites[3], 0x31, 0, &panel->parameters, 0xC9, 1.0f);
    uiSpriteSelectAnim(&panel->sprites[3], 0);
    uiSpriteStateInitFromSource(&panel->sprites[4], 0x31, 0, &panel->parameters, 0xC9, 1.0f);
    uiSpriteSetKeyframe(&panel->sprites[4], 4, 0);
    uiSpriteStateInitFromSource(&panel->sprites[5], 0x31, 0, &panel->parameters, 0xC9, 1.0f);
    uiSpriteSelectAnim(&panel->sprites[5], 1);
    uiSpriteStateInitFromSource(&panel->sprites[6], 0x31, 0, &panel->parameters, 0xC9, 1.0f);
    uiSpriteSelectAnim(&panel->sprites[6], 2);
    uiSpriteStateInitFromSource(&panel->sprites[7], 0x31, 0, &panel->parameters, 0xC9, 1.0f);
}
}
