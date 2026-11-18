/* NON_MATCHING: 110 lines. The frame is 8 bytes smaller than retail's (84), so every stack offset
 * differs; beyond that: the name plate pair is stored with two str (retail: stm), the clip
 * rectangle's argument registers, the pass flags are packed after the stack address is formed
 * (retail: before), and the style switch's last branch is inverted. renderCtxPushA(context, flags)
 * gives retail's call order (8 lines differ once registers are ignored) but moves &g_titleScene
 * from r7 to sl, which makes 178 lines differ. */
#include "shard/Shard0034.h"
#include "shard/TextureDrawCall.h"
#include "code/Code0029.h"
#include "font/SearchWin/RunWin.h"
#include "camp/RenderCtx.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "camp/RenderCtxTitle.h"

extern "C" {
void gxResetColorQuadToWhite(void);
s32 renderCtxPackPassFlags(s32 first, s32 second);
void efctSetSpeed(f32 alpha);
f32 renderCtxCalculateStereoParallax(RenderCtx *context, f32 value);
void texDrawCompositeSprite(s32 layer, s32 group, s32 image, s32 x, s32 y, s32 depth);
void FUN_002b659c(s32 x, s32 y, s32 width, s32 height);
void textureLoadOptionalDemonModel(s32 portrait, s32 x, s32 y, s32 depth, s32 mode);
void FUN_002b64b8(void);
void textFormatBuffer(char *destination, const char *format, ...);
void drawSetColorFromRGBA8(u32 color);
void FUN_002bdf94(s32 layer, s32 x, s32 y, s32 z, s32 scale, s32 depth, const char *format, ...);
void asdTextSetBaseColor(void *text, u32 color);
void FUN_002598f0(const void *text, s32 x, s32 y, s32 fade, f32 scale);
void itemDrawCategoryBadge(s32 skill, s32 x, s32 y, s32 depth, s32 mode);

/* Render the actor's portrait, values, skill list, and labels with temporary UI state. */
void actorDetailsDrawPanel(const ActorDetailsTextObjectsIV *texts, const ActorDetailsRecordIV *record,
                  const MessageDrawTransform *transform, s32 x, s32 y, s32 expanded)
{
    if (texts == NULL || record == NULL) {
        return;
    }
    if (transform == NULL) {
        return;
    }
    if (transform->alpha == 0.0f) {
        return;
    }
    if (texts->portrait != 0 && FUN_00293f10(texts->portrait, 1) == NULL) {
        return;
    }
    const ActorDetailsProfileIV *profile = &record->profile;
    const ActorDetailsStatsIV *stats = &record->stats;
    s32 images[2] = { 4, 5 }; /* the name plate of each style */
    gxResetColorQuadToWhite();
    renderCtxSelectStereoLayout(g_titleScene);
    RenderCtx *context = g_titleScene;
    renderStackPush(&context->stackA, renderCtxPackPassFlags(1, 0));
    efctSetSpeed(transform->alpha);
    s32 offset = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.3f);
    texDrawCompositeSprite(2, 0x39, 3, x + offset, y, 0x71);
    if (texts->portrait != 0) {
        offset = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.3f);
        const TextureTableEntryIV *portrait = asdTMTexTableEntryAt(0x39, 0x23);
        const TextureTableEntryIV *clip = asdTMTexTableEntryAt(0x39, 0x22);
        FUN_002b659c(clip->x + offset + x, clip->y + y,
                      clip->placement->width, clip->placement->height);
        textureLoadOptionalDemonModel(texts->portrait, portrait->x + offset + x,
                                      portrait->y + y, 0x72, 1);
        FUN_002b64b8();
    } else {
        offset = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.29f);
        texDrawTableEntryAtStoredOrigin(2, 0x39, 0x21, x + offset, y, 0x72);
    }
    offset = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.3f);
    texDrawCompositeSprite(2, 0x39, images[profile->style], x + offset, y, 0x73);
    offset = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.31f);
    texDrawCompositeSprite(2, 0x39, 6, x + offset, y, 0x71);
    offset = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.3f);
    texDrawTableEntryAtStoredOrigin(2, 0x39, 0x0D, x + offset, y, 0x72);
    texDrawTableEntryAtStoredOrigin(2, 0x39, 0x0E, x + offset, y, 0x73);
    const TextureTableEntryIV *position = asdTMTexTableEntryAt(0x39, 0x10);
    char text[16];
    if (profile->level >= 10) {
        textFormatBuffer(text, "%d", profile->level);
    } else {
        textFormatBuffer(text, " %d", profile->level);
    }
    drawSetColorFromRGBA8(0);
    FUN_002bdf94(0, position->x + x + offset, position->y + y, 0, 5, 0x73, text);
    gxResetColorQuadToWhite();
    offset = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.32f);
    for (s32 index = 0; index < 8; ++index) {
        const TextureTableEntryIV *row = asdTMTexTableEntryAt(0x39, index + 0x2F);
        texDrawTableEntryAtStoredOrigin(2, 0x39, 0x2D, row->x + offset + x, row->y + y, 0x71);
        const TextureTableEntryIV *cell = asdTMTexTableEntryAt(0x39, 0x2E);
        s32 textX = cell->x + (cell->placement->width - texts->widths[index]) / 2;
        s32 textY = cell->y;
        if (stats->values[index] == 0) {
            textX -= 4;
        }
        asdTextSetBaseColor(texts->values[index], 0xFFFFFF00);
        FUN_002598f0(texts->values[index], row->x + x + textX + offset,
                      row->y + y + textY, 0x72, transform->alpha);
    }
    if (expanded != 0) {
        offset = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.29f);
        texDrawCompositeSprite(2, 0x39, 0x0F, transform->x + x + offset, y, 0x71);
        texDrawCompositeSprite(2, 0x39, 0x10, transform->x + x + offset, y, 0x71);
        offset = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.3f);
        for (s32 index = 0; index < 7; ++index) {
            if (texts->skillIds[index] == 0) {
                continue;
            }
            const TextureTableEntryIV *row = asdTMTexTableEntryAt(0x39, index + 0xAC);
            s32 rowY = row->y + y;
            s32 rowX = row->x + transform->x + x;
            texDrawCompositeSprite(2, 0x39, 0x11, rowX + offset, rowY, 0x71);
            position = asdTMTexTableEntryAt(0x39, 0xAA);
            itemDrawCategoryBadge(texts->skillIds[index], position->x + rowX + offset,
                          position->y + rowY, 0x72, 0);
            position = asdTMTexTableEntryAt(0x39, 0xAB);
            s32 textX = rowX + position->x;
            s32 textY = position->y + rowY;
            asdTextSetBaseColor(texts->skills[index], 0);
            FUN_002598f0(texts->skills[index], offset + textX, textY, 0x72, transform->alpha);
        }
    }
    u32 labelColor;
    u32 valueColor;
    switch (profile->style) {
    case 0:
        valueColor = 0x32323200;
        labelColor = 0xFFFFFF00;
        break;
    case 1:
        valueColor = 0xFFFFFF00;
        labelColor = 0;
        break;
    }
    u32 nameColor = labelColor;
    offset = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.32f);
    if ((profile->flags & 2) != 0) {
        nameColor = profile->style == 0 ? 0x00F33700 : 0x00840000;
    }
    position = asdTMTexTableEntryAt(0x39, 8);
    asdTextSetBaseColor(texts->name, nameColor);
    FUN_002598f0(texts->name, position->x + x + offset, position->y + y, 0x72, transform->alpha);
    position = asdTMTexTableEntryAt(0x39, 9);
    asdTextSetBaseColor(texts->secondaryName, labelColor);
    FUN_002598f0(texts->secondaryName, position->x + x + offset, position->y + y, 0x72, transform->alpha);
    position = asdTMTexTableEntryAt(0x39, 10);
    asdTextSetBaseColor(texts->thirdLabel, labelColor);
    FUN_002598f0(texts->thirdLabel, position->x + x + offset, position->y + y, 0x72, transform->alpha);
    offset = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.3f);
    position = asdTMTexTableEntryAt(0x39, 0x24);
    s32 textX = position->x + (position->placement->width - texts->centeredWidth) / 2;
    s32 textY = position->y;
    asdTextSetBaseColor(texts->centeredValue, valueColor);
    FUN_002598f0(texts->centeredValue, x + textX + offset, y + textY, 0x74, transform->alpha);
    position = asdTMTexTableEntryAt(0x39, 0x25);
    textX = position->placement->width - texts->rightAlignedWidth + position->x;
    textY = position->y;
    asdTextSetBaseColor(texts->rightAlignedValue, valueColor);
    FUN_002598f0(texts->rightAlignedValue, x + textX + offset, y + textY, 0x74, transform->alpha);
    position = asdTMTexTableEntryAt(0x39, 0x27);
    if (stats->specialValue == 0) {
        textFormatBuffer(text, "--");
    } else {
        textFormatBuffer(text, "%d", stats->specialValue);
    }
    drawSetColorFromRGBA8(valueColor);
    FUN_002bdf94(0, x + offset + position->x, position->y + y, 0, 5, 0x74, text);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    renderStackPop(&g_titleScene->stackA);
}
}
