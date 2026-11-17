#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "ui/ParamsClearPacket.h"
#include "common.h"

extern "C" {

/* A 0x8C-byte UI sprite; only the fields this initializer writes are named. */

typedef struct PanelSprites {
    /* 0x000 */ UiResourceParameters parameters;
    /* 0x020 */ UiSpriteState frame;
    /* 0x0AC */ UiSpriteState icon;
    /* 0x138 */ UiSpriteState marker;
    /* 0x1C4 */ UiSpriteState cursor;
    /* 0x250 */ u8 unk250[0x8C];
    /* 0x2DC */ UiSpriteState label;
    /* 0x368 */ UiSpriteState hint;
    /* 0x3F4 */ u32 unk3F4;
    /* 0x3F8 */ u32 unk3F8;
} PanelSprites;

/* Animation key tables passed to paramsInit; the original file defined them statically. */
static const s32 sPanelKeysA[] = {
    400, 0, 4, 65136, 400, 16,
    -4194240, 0, 5, 200, 0, 4,
};
static const f32 sPanelKeysB[] = {
    0.0f, 1.0f, 8, 0.0f, 1.0f, 4,
    1.0f, 1.0f, 10, 1.0f, 0.0f, 8,
    0.0f, 1.0f, 3, 1.0f, 1.0f, 10,
};
static const f32 sPanelKeysC[] = {
    0.0f, 1.0f, 8, 0.0f, 1.0f, 4,
    0.0f, 3.0f, 8, 3.0f, 0.0f, 8,
};
static const s32 sPanelKeysD[] = {
    -3, 0, -3, 0, 0, 0,
    0, -1, 0, -1, -1, 0,
    -1, 0, 0, 0, -3, 1,
    0, 1, 0, -1, 0, -1,
    -1, 0, -1, 0, 1, 0,
    -3, 0, 0, 2, 0, -3,
    0, -3, -3, 0, 3, 0,
    -1, 0, -1, -1, 0, -1,
    0, -3, 0, -3, 2, 0,
    -3, 0, -3, 0, -3, 3,
    0, -3, 0, -1, 0, -1,
    -1, 0, -1, 0, -3, 0,
    -3, 4, 0, -3, 0, -1,
    0, -1, -1, 0, -1, 0,
};


void uiStoreTextureEntryCenter(UiSpriteState *sprite, u32 group, u32 image);
void spriteSetVisible(UiSpriteState *sprite, u8 visible);
void pairSetHalves(UiSpriteState *sprite, s32 width, s32 height);

/* Builds the panel's six sprites and their resource parameters. */
void FUN_002cdad4(PanelSprites *panel)
{
    panel->unk3F8 = 0;
    panel->unk3F4 = 0;
    paramsClearPacket(&panel->parameters);
    paramsInit(&panel->parameters, sPanelKeysA, sizeof(sPanelKeysA), sPanelKeysB, sizeof(sPanelKeysB), sPanelKeysC,
               sizeof(sPanelKeysC), NULL, 0, sPanelKeysD, sizeof(sPanelKeysD));
    uiSpriteStateInitFromSource(&panel->frame, 0xc, 0x29, (UiResourceParameters *)(panel), 0x33, 1.0f);
    spriteSetLayer(&panel->frame, 2);
    uiStoreTextureEntryCenter(&panel->frame, 0xc, 0x29);
    spriteSetVisible(&panel->frame, 1);
    uiSpriteSelectAnim(&panel->frame, 0);
    uiSpriteInitializeState(&panel->cursor, 0xc, -1, 7, (UiResourceParameters *)(panel), 0x38, 1.0f);
    spriteSetLayer(&panel->cursor, 2);
    uiStoreTextureEntryCenter(&panel->cursor, 0xc, 0x29);
    spriteSetVisible(&panel->cursor, 1);
    uiSpriteSelectAnim(&panel->cursor, 0);
    uiSpriteInitializeState(&panel->marker, 0xc, -1, 2, (UiResourceParameters *)(panel), 0x3d, 1.0f);
    spriteSetLayer(&panel->marker, 1);
    spriteSetVisible(&panel->marker, 1);
    pairSetHalves(&panel->marker, 200, 0x78);
    uiSpriteSelectAnim(&panel->marker, 2);
    uiSpriteInitializeState(&panel->icon, 0xc, -1, 0, (UiResourceParameters *)(panel), 0x47, 1.0f);
    spriteSetLayer(&panel->icon, 2);
    uiStoreTextureEntryCenter(&panel->icon, 0xc, 0x2b);
    spriteSetVisible(&panel->icon, 1);
    uiSpriteSelectAnim(&panel->icon, 1);
    uiSpriteStateInitFromSource(&panel->label, 0xc, 9, (UiResourceParameters *)(panel), 0xb, 1.0f);
    uiSpriteSetKeyframe(&panel->label, 2, 0);
    uiSpriteStateInitFromSource(&panel->hint, 0xc, 5000, (UiResourceParameters *)(panel), 0x51, 1.0f);
    uiStoreTextureEntryCenter(&panel->hint, 0xc, 0x29);
    uiSpriteSelectAnim(&panel->hint, 4);
}

} /* extern "C" */
