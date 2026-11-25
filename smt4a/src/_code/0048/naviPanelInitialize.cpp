/* NON_MATCHING: 2 lines: retail loads the 0.0f for the three unk004AC floats before forming the r4+1024 base, the
 * build after it. A named `f32 zero = 0.0f;` stored three times gives retail's order, but it is a single-purpose
 * scheduling temporary (rejected in the wave-68 review). */
#include "classes/Obj532300.h"
#include "gamedata/MapSaveBlockA.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "ui/UiSpriteApi.h"
#include "ui/ParamsClearPacket.h"
#include "ui/AnimatedMessage.h"
#include "util/MemoryHelpers.h"
#include "AsdSDK/Source/Sys/File/AsdFileReadRequest.h"
#include "runtime/String.h"

/* The panel sprites' animation key tables; the original file defined them after the handler table. */
static const UiSpritePositionKey sNaviPanelPositionKeys[] = {
    {210, 0, 0, 0, 36, 1, 0},
    {20, 0, 0, 0, 8, 0, 0},
    {0, 10, 0, -2, 4, 0, 0},
    {0, -2, 0, 0, 10, 0, 0},
    {35, 0, 0, 0, 3, 0, 0},
    {320, 0, 0, 0, 8, 0, 0},
    {0, 0, -320, 0, 8, 0, 0},
    {0, 0, 35, 0, 3, 0, 0},
};
static const UiSpriteScalarKey sNaviPanelAlphaKeys[] = {
    {0.0f, 1.0f, 4, 0, 0},
    {1.0f, 0.0f, 4, 0, 0},
    {0.0f, 1.0f, 8, 0, 0},
    {0.0f, 0.8f, 20, 0, 0},
    {0.8f, 0.0f, 40, 0, 0},
    {0.5f, 1.0f, 10, 0, 0},
    {1.0f, 0.5f, 20, 0, 0},
};
static const SpriteAnimationCommand sNaviPanelCommands[] = {
    {-3, 0, {0, 0, 0}, -3, 0, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {2, 0, {0, 0, 0}, -3, 0, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {3, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
};

extern "C" {

void asdTMTexTableLoadTmx(s32 table, u32 flags);
void rectangleInitializeSelection(EmptyRange *range, s32 x, s32 y, s32 selection);
void spritePresetBankInitialize(SpritePresetBank *bank);
void FUN_001a90e0(void *pair);

extern u8 DAT_00616ee4[0x400];

/* Sets up the map navigation panel: its handlers, textures, sprites and cleared state. */
void naviPanelInitialize(Obj532300 *panel)
{
    MapSaveBlockA *block = gameFlagsGetBlock();

    panel->resetHandlers();
    asdTMTexTableLoadTmx(40, 0);
    panel->unk0000C = -1;
    panel->unk00014 = 0;
    panel->unk00000 = 0;
    panel->unk00055 = 0;
    panel->flags = 0;
    rt_memclr(panel->unk00066, sizeof(panel->unk00066));
    panel->selectedMap = 0;
    panel->infoPending = 0;
    rectangleInitializeSelection(&panel->cursorRect, 0, 0, 19);
    panel->step = 0;
    panel->state = 0;
    FUN_001a90e0(panel->touchSelected);
    panel->mode = 0;
    panel->unk0005D = 0;
    panel->unk00488 = 0;
    panel->unk0048C = 0;
    panel->unk00490 = 0;
    panel->unk00498 = 0;
    panel->unk00494 = 0;
    panel->unk0049C = 0;
    panel->unk004A0 = 0;
    panel->unk004A4 = 0;
    panel->pulseTimer = 0;
    panel->pulseState = 0;
    panel->unk00486 = 0;
    panel->unk004AC[2] = panel->unk004AC[1] = panel->unk004AC[0] = 0.0f;
    panel->unk004A8 = 0;
    panel->unk004B8 = 0;
    panel->stepTimer = 0;
    panel->stepState = 0;

    paramsClearPacket(&panel->parameters);
    paramsInit(&panel->parameters, sNaviPanelPositionKeys, sizeof(sNaviPanelPositionKeys), sNaviPanelAlphaKeys,
               sizeof(sNaviPanelAlphaKeys), NULL, 0, NULL, 0, sNaviPanelCommands, sizeof(sNaviPanelCommands));
    for (s32 i = 0; i < 6; i++) {
        uiSpriteStateInitFromSource(&panel->entries[i], 19, 0xFA1, &panel->parameters, 21, 1.0f);
        uiSpriteSetKeyframe(&panel->entries[i], 4, 0);
    }
    uiSpriteStateInitFromSource(&panel->auxiliary[0], 19, 0x112D, &panel->parameters, 21, 1.0f);
    uiSpriteSetKeyframe(&panel->auxiliary[0], 4, 0);
    uiSpriteStateInitFromSource(&panel->headings[0], 19, 0x1135, &panel->parameters, 21, 1.0f);
    uiSpriteSetImageKeyframe(&panel->headings[0], 3, 0);
    uiSpriteStateInitFromSource(&panel->headings[1], 19, 0x112E, &panel->parameters, 21, 1.0f);
    uiSpriteSetImageKeyframe(&panel->headings[1], 5, 0);
    uiSpriteStateInitFromSource(&panel->auxiliary[1], 19, 0x112E, &panel->parameters, 21, 1.0f);
    uiSpriteSetKeyframe(&panel->auxiliary[1], 4, 0);
    spritePresetBankInitialize(&panel->spriteBank);

    panel->textureIndex = 0;
    panel->view.x = 160;
    panel->view.y = 120;
    if (block->layout == 0) {
        block->layout = 12;
    }
    panel->destinationCount = 0;
    panel->extraDestinationCount = 0;
    panel->refresh[0] = 0;
    panel->refresh[1] = 0;
    panel->discovered = 0;
    panel->unk07B93 = 0;
    for (s32 i = 0; i < 32; i++) {
        panel->origins[i].x = 0;
        panel->origins[i].y = 0;
        panel->centers[i].x = 0;
        panel->centers[i].y = 0;
    }
    panel->selectedIcon = 0;
    panel->unk205AC = 0;
    panel->unk20500 = 0;
    panel->unk20502 = 0;
    panel->unk20504 = -1;
    fillTwoWordsWithByte(panel->unk2062C, 1);
    for (s32 i = 0; i < 32; i++) {
        panel->list[i].enabled = 0;
        panel->list[i].id = 0;
    }
    panel->listCount = 0;
    panel->unk20634 = 0;
    panel->categoryView.x = 160;
    panel->categoryView.y = 120;
    panel->categoryState = 0;
    panel->mapChangeRequested = 0;
    panel->specialTexturesLoaded = 0;
    panel->mapView.x = 160;
    panel->mapView.y = 120;

    panel->listActive = 0;
    panel->listFlags[0] = 0;
    panel->listFlags[1] = 0;
    panel->listCursor = 0;
    uiSpriteInitializeState(&panel->listSprite, 19, 0x1121, 29, &panel->parameters, 21, 1.0f);
    uiSpriteSetKeyframe(&panel->listSprite, 0, 0);
    panel->groupFlags[0] = 0;
    panel->groupFlags[1] = 0;
    panel->groupFlags[2] = 0;
    uiSpriteInitializeState(&panel->groupSprite, 19, 0x111A, 28, &panel->parameters, 21, 1.0f);
    uiSpriteSetKeyframe(&panel->groupSprite, 5, 0);
    sysMemClear(DAT_00616ee4, sizeof(DAT_00616ee4));
    g_uiTextFontSettings.unk14 = 0;
}

} /* extern "C" */
