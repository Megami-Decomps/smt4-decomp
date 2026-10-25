/* NON_MATCHING: ARMCC spills record/transform arguments at entry and reloads layout coordinates where retail retains saved-register snapshots. */
#include "shard/Shard0034.h"
#include "shard/TextureDrawCall.h"
#include "font/SearchWin/RunWin.h"
#include "camp/RenderCtx.h"
#include "shard/FUN_00293f10.h"

extern "C" {
extern RenderCtx *g_titleScene;
extern const s32 g_actorDetailsStyleImages[2];
void FUN_002bed3c(void);
void renderCtxSelectStereoLayout(RenderCtx *context);
s32 FUN_002c5d80(s32 first, s32 second);
void efctSetSpeed(f32 alpha);
f32 renderCtxCalculateStereoParallax(RenderCtx *context, f32 value);
void FUN_002bf380(s32 layer, s32 group, s32 image, s32 x, s32 y, s32 depth);
const MessageDrawItem *asdTMTexTableEntryAt(u32 group, u32 index);
void FUN_002b659c(s32 x, s32 y, s32 width, s32 height);
void textureLoadOptionalDemonModel(s32 portrait, s32 x, s32 y, s32 depth, s32 mode);
void FUN_002b64b8(void);
void textFormatBuffer(char *destination, const char *format, ...);
void drawSetColorFromRGBA8(u32 color);
void FUN_002bdf94(s32 layer, s32 x, s32 y, s32 z, s32 scale, s32 depth, const char *format, ...);
void FUN_002bd82c(void *text, u32 color);
void FUN_002598f0(void *text, s32 x, s32 y, s32 depth);
void itemDrawCategoryBadge(s32 skill, s32 x, s32 y, s32 depth, s32 mode);

/* Render the actor's portrait, values, skill list, and labels with temporary UI state. */
void actorDetailsDrawPanel(const ActorDetailsTextObjectsIV *texts, const ActorDetailsRecordIV *record,
                  const MessageDrawTransform *transform, s32 x, s32 y, s32 expanded)
{
    if (texts == NULL || record == NULL || transform == NULL || transform->alpha == 0.0f) {
        return;
    }
    if (texts->portrait != 0 && FUN_00293f10(texts->portrait, 1) == NULL) {
        return;
    }
    s32 images[2] = { g_actorDetailsStyleImages[0], g_actorDetailsStyleImages[1] };
    FUN_002bed3c();
    renderCtxSelectStereoLayout(g_titleScene);
    RenderCtx *context = g_titleScene;
    renderStackPush(&context->stackA, FUN_002c5d80(1, 0));
    efctSetSpeed(transform->alpha);
    s32 offset = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.3f);
    FUN_002bf380(2, 0x39, 3, x + offset, y, 0x71);
    if (texts->portrait != 0) {
        offset = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.3f);
        const MessageDrawItem *portrait = asdTMTexTableEntryAt(0x39, 0x23);
        const MessageDrawItem *clip = asdTMTexTableEntryAt(0x39, 0x22);
        FUN_002b659c(clip->position.x + offset + x, clip->position.y + y,
                      clip->size->width, clip->size->height);
        textureLoadOptionalDemonModel(texts->portrait, portrait->position.x + offset + x,
                                      portrait->position.y + y, 0x72, 1);
        FUN_002b64b8();
    } else {
        offset = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.29f);
        FUN_002bf288(2, 0x39, 0x21, x + offset, y, 0x72);
    }
    offset = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.3f);
    FUN_002bf380(2, 0x39, images[record->style], x + offset, y, 0x73);
    offset = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.31f);
    FUN_002bf380(2, 0x39, 6, x + offset, y, 0x71);
    offset = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.3f);
    FUN_002bf288(2, 0x39, 0x0D, x + offset, y, 0x72);
    FUN_002bf288(2, 0x39, 0x0E, x + offset, y, 0x73);
    const MessageDrawItem *position = asdTMTexTableEntryAt(0x39, 0x10);
    char text[16];
    if (record->level >= 10) {
        textFormatBuffer(text, "%d", record->level);
    } else {
        textFormatBuffer(text, " %d", record->level);
    }
    drawSetColorFromRGBA8(0);
    FUN_002bdf94(0, position->position.x + x + offset, position->position.y + y, 0, 5, 0x73, text);
    FUN_002bed3c();
    offset = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.32f);
    for (s32 index = 0; index < 8; ++index) {
        const MessageDrawItem *row = asdTMTexTableEntryAt(0x39, index + 0x2F);
        FUN_002bf288(2, 0x39, 0x2D, row->position.x + offset + x, row->position.y + y, 0x71);
        const MessageDrawItem *cell = asdTMTexTableEntryAt(0x39, 0x2E);
        s32 inset = cell->position.x + (cell->size->width - texts->widths[index]) / 2;
        if (record->values[index] == 0) {
            inset -= 4;
        }
        FUN_002bd82c(texts->values[index], 0xFFFFFF00);
        FUN_002598f0(texts->values[index], row->position.x + x + inset + offset,
                      row->position.y + y + cell->position.y, 0x72);
    }
    if (expanded != 0) {
        offset = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.29f);
        FUN_002bf380(2, 0x39, 0x0F, transform->x + x + offset, y, 0x71);
        FUN_002bf380(2, 0x39, 0x10, transform->x + x + offset, y, 0x71);
        offset = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.3f);
        for (s32 index = 0; index < 7; ++index) {
            if (texts->skillIds[index] == 0) {
                continue;
            }
            const MessageDrawItem *row = asdTMTexTableEntryAt(0x39, index + 0xAC);
            s32 rowY = row->position.y + y;
            s32 rowX = row->position.x + transform->x + x;
            FUN_002bf380(2, 0x39, 0x11, rowX + offset, rowY, 0x71);
            position = asdTMTexTableEntryAt(0x39, 0xAA);
            itemDrawCategoryBadge(texts->skillIds[index], position->position.x + rowX + offset,
                          position->position.y + rowY, 0x72, 0);
            position = asdTMTexTableEntryAt(0x39, 0xAB);
            FUN_002bd82c(texts->skills[index], 0);
            FUN_002598f0(texts->skills[index], offset + rowX + position->position.x,
                          position->position.y + rowY, 0x72);
        }
    }
    u32 valueColor;
    u32 labelColor;
    if (record->style == 0) {
        valueColor = 0x32323200;
        labelColor = 0xFFFFFF00;
    } else if (record->style == 1) {
        valueColor = 0xFFFFFF00;
        labelColor = 0;
    }
    offset = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.32f);
    u32 nameColor = labelColor;
    if ((record->flags & 2) != 0) {
        nameColor = record->style == 0 ? 0x00F33700 : 0x00840000;
    }
    position = asdTMTexTableEntryAt(0x39, 8);
    FUN_002bd82c(texts->name, nameColor);
    FUN_002598f0(texts->name, position->position.x + x + offset, position->position.y + y, 0x72);
    position = asdTMTexTableEntryAt(0x39, 9);
    FUN_002bd82c(texts->secondaryName, labelColor);
    FUN_002598f0(texts->secondaryName, position->position.x + x + offset, position->position.y + y, 0x72);
    position = asdTMTexTableEntryAt(0x39, 10);
    FUN_002bd82c(texts->thirdLabel, labelColor);
    FUN_002598f0(texts->thirdLabel, position->position.x + x + offset, position->position.y + y, 0x72);
    offset = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.3f);
    position = asdTMTexTableEntryAt(0x39, 0x24);
    FUN_002bd82c(texts->centeredValue, valueColor);
    FUN_002598f0(texts->centeredValue,
        x + position->position.x + (position->size->width - texts->centeredWidth) / 2 + offset,
        y + position->position.y, 0x74);
    position = asdTMTexTableEntryAt(0x39, 0x25);
    FUN_002bd82c(texts->rightAlignedValue, valueColor);
    FUN_002598f0(texts->rightAlignedValue,
        x + position->size->width - texts->rightAlignedWidth + position->position.x + offset,
        y + position->position.y, 0x74);
    position = asdTMTexTableEntryAt(0x39, 0x27);
    if (record->specialValue != 0) {
        textFormatBuffer(text, "%d", record->specialValue);
    } else {
        textFormatBuffer(text, "--");
    }
    drawSetColorFromRGBA8(valueColor);
    FUN_002bdf94(0, x + offset + position->position.x, position->position.y + y, 0, 5, 0x74, text);
    FUN_002bed3c();
    efctSetSpeed(1.0f);
    renderStackPop(&g_titleScene->stackA);
}
}
