#include "sys/RuntimeObjects_Smt4a.h"
#include "battle/btlUI.h"
#include "ui/UiSpriteState.h"
#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "ui/ParamsClearPacket.h"
#include "common.h"

extern "C" {

/* Animation key tables passed to paramsInit; the original file defined them statically. */
static const UiSpritePositionKey sPanelKeysA[] = {
    {400, 0, 0, 0, 4, 0, 0},
    {-400, 0, 400, 0, 16, 0, 0},
    {64, -64, 0, 0, 5, 0, 0},
    {200, 0, 0, 0, 4, 0, 0},
};
static const UiSpriteScalarKey sPanelKeysB[] = {
    {0.0f, 1.0f, 8, 0, 0},
    {0.0f, 1.0f, 4, 0, 0},
    {1.0f, 1.0f, 10, 0, 0},
    {1.0f, 0.0f, 8, 0, 0},
    {0.0f, 1.0f, 3, 0, 0},
    {1.0f, 1.0f, 10, 0, 0},
};
static const UiSpriteScalarKey sPanelKeysC[] = {
    {0.0f, 1.0f, 8, 0, 0},
    {0.0f, 1.0f, 4, 0, 0},
    {0.0f, 3.0f, 8, 0, 0},
    {3.0f, 0.0f, 8, 0, 0},
};
static const SpriteAnimationCommand sPanelKeysD[] = {
    {-3,0,{0,0,0},-3,0,0,{0,0,0},0,0,{0,0,0}},
    {-1,0,{0,0,0},-1,-1,0,{0,0,0},-1,0,{0,0,0}},
    {0,0,{0,0,0},-3,1,0,{0,0,0},1,0,{0,0,0}},
    {-1,0,{0,0,0},-1,-1,0,{0,0,0},-1,0,{0,0,0}},
    {1,0,{0,0,0},-3,0,0,{0,0,0},2,0,{0,0,0}},
    {-3,0,{0,0,0},-3,-3,0,{0,0,0},3,0,{0,0,0}},
    {-1,0,{0,0,0},-1,-1,0,{0,0,0},-1,0,{0,0,0}},
    {-3,0,{0,0,0},-3,2,0,{0,0,0},-3,0,{0,0,0}},
    {-3,0,{0,0,0},-3,3,0,{0,0,0},-3,0,{0,0,0}},
    {-1,0,{0,0,0},-1,-1,0,{0,0,0},-1,0,{0,0,0}},
    {-3,0,{0,0,0},-3,4,0,{0,0,0},-3,0,{0,0,0}},
    {-1,0,{0,0,0},-1,-1,0,{0,0,0},-1,0,{0,0,0}},
};


void uiStoreTextureEntryCenter(UiSpriteState *sprite, u32 group, u32 image);

/* Builds the panel's six sprites and their resource parameters. */
void btlEventPanelInitialize(BtlUiObjBA *panel)
{
    panel->timer.state = 0;
    panel->timer.frame = 0;
    paramsClearPacket(&panel->parameters);
    paramsInit(&panel->parameters, sPanelKeysA, sizeof(sPanelKeysA), sPanelKeysB, sizeof(sPanelKeysB), sPanelKeysC,
               sizeof(sPanelKeysC), NULL, 0, sPanelKeysD, sizeof(sPanelKeysD));
    uiSpriteStateInitFromSource(&panel->sprites[0], 0xc, 0x29, (UiResourceParameters *)(panel), 0x33, 1.0f);
    spriteSetLayer(&panel->sprites[0], 2);
    uiStoreTextureEntryCenter(&panel->sprites[0], 0xc, 0x29);
    spriteSetVisible(&panel->sprites[0], 1);
    uiSpriteSelectAnim(&panel->sprites[0], 0);
    uiSpriteInitializeState(&panel->sprites[3], 0xc, -1, 7, (UiResourceParameters *)(panel), 0x38, 1.0f);
    spriteSetLayer(&panel->sprites[3], 2);
    uiStoreTextureEntryCenter(&panel->sprites[3], 0xc, 0x29);
    spriteSetVisible(&panel->sprites[3], 1);
    uiSpriteSelectAnim(&panel->sprites[3], 0);
    uiSpriteInitializeState(&panel->sprites[2], 0xc, -1, 2, (UiResourceParameters *)(panel), 0x3d, 1.0f);
    spriteSetLayer(&panel->sprites[2], 1);
    spriteSetVisible(&panel->sprites[2], 1);
    pairSetHalves(reinterpret_cast<Holder *>(&panel->sprites[2]), 200, 0x78);
    uiSpriteSelectAnim(&panel->sprites[2], 2);
    uiSpriteInitializeState(&panel->sprites[1], 0xc, -1, 0, (UiResourceParameters *)(panel), 0x47, 1.0f);
    spriteSetLayer(&panel->sprites[1], 2);
    uiStoreTextureEntryCenter(&panel->sprites[1], 0xc, 0x2b);
    spriteSetVisible(&panel->sprites[1], 1);
    uiSpriteSelectAnim(&panel->sprites[1], 1);
    uiSpriteStateInitFromSource(&panel->sprites[5], 0xc, 9, (UiResourceParameters *)(panel), 0xb, 1.0f);
    uiSpriteSetKeyframe(&panel->sprites[5], 2, 0);
    uiSpriteStateInitFromSource(&panel->sprites[6], 0xc, 5000, (UiResourceParameters *)(panel), 0x51, 1.0f);
    uiStoreTextureEntryCenter(&panel->sprites[6], 0xc, 0x29);
    uiSpriteSelectAnim(&panel->sprites[6], 4);
}

} /* extern "C" */
