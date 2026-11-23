#include <stdio.h>
#include "bible/BibleAnalyzeWork.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "ui/UiSpriteApi.h"
#include "ui/UiControl.h"
#include "camp/RenderCtxTitle.h"
#include "ui/AnimatedMessage.h"
#include "gamedata/GameDataAccess_VariantF.h"
#include "gamedata/NkmEnemyLookup.h"
#include "addon/LookupRecord.h"

extern "C" {
void uiDrawBottomRightOffset(const AsdTextureRegion *region, u32 id, s32 x, s32 y, u32 depth);
void FUN_00231bcc(const AsdTextureRegion *region, u32 id, s32 x, s32 y, u32 depth, u32 mode);
void gxSetClippedBottomScreenScissor(s32 x, s32 y, s32 width, s32 height);
void devilDrawIconRelative(AsdTextureRegion *region, s32 demon, s32 x, s32 y, u32 depth);
s32 textMeasureOnLayer(const char *text, s32 layer);
f32 drawTextAtSnappedRectangle(const AsdTextureRegion *region, f32 x, f32 y, f32 depth, f32 spacing,
                               u32 layer, u32 color, f32 opacity, const char *text);

/* Draws one row of the analyze list: the selected row's frame and scrolling band, then the demon's icon, its race
 * (centred in its box), its name, its level and the money it carries. An id of 0 leaves the row empty. */
void bibleAnalyzeDrawRow(AnalyzeWork *work, s32 index, s32 selected, s32 id)
{
    s32 depth = work->slide;
    if (selected) {
        depth++;
    }
    f32 z = (f32)(256 - depth) * 0.00390625f;
    const TextureTableEntryIV *origin;
    if (!selected) {
        origin = layoutFindTableEntry(&work->region, index + 0x102F);
    } else {
        origin = layoutFindTableEntry(&work->region, index + 0x1042);
    }
    s32 x = origin->x;
    s32 y = origin->y;

    if (selected) {
        efctSetSpeed(vec2GetSpeed(&work->highlight));
        uiDrawBottomRightOffset(&work->region, 0x103A, x, y, depth);
        uiDrawBottomRightOffset(&work->region, 0x103B, x, y, depth);
        uiDrawBottomRightOffset(&work->region, 0x103C, x, y, depth);
        efctSetSpeed(1.0f);
        FUN_00231bcc(&work->region, 0x103D, x, y, depth, 1);
        FUN_00231bcc(&work->region, 0x103E, x, y, depth, 1);
        const TextureTableEntryIV *clip = layoutFindTableEntry(&work->region, 0x1041);
        s32 clipX = clip->x + x;
        s32 clipY = clip->y + y;
        s32 clipWidth = clip->placement->width;
        s32 clipHeight = clip->placement->height;
        gxSetClippedBottomScreenScissor(clipX, clipY, clipWidth, clipHeight);
        const TextureTableEntryIV *band = layoutFindTableEntry(&work->region, 0x1040);
        UiSpriteState *scroll = &work->scroll;
        s32 bandX = vec2GetXInt(scroll) + x - (band->width & 0x7FFF);
        s32 bandY = vec2GetYInt(scroll) + y;
        FUN_00231bcc(&work->region, 0x1040, bandX, bandY, depth, 1);
        renderStackSet(g_titleScene->stacks + RENDER_STACK_SCISSOR, 0);
    }
    if (id != 0) {
        const TextureTableEntryIV *icon;
        if (selected == 0) {
            icon = layoutFindTableEntry(&work->region, 0x1058);
        } else {
            icon = layoutFindTableEntry(&work->region, 0x1068);
        }
        s32 iconX = icon->x + x;
        s32 iconY = icon->y + y;
        devilDrawIconRelative(&work->region, (s16)id, iconX, iconY, depth);

        u32 layer;
        if (!selected) {
            layer = 2;
        } else {
            layer = 3;
        }
        const char *race = demonGetRaceLabel(id, 0);
        s32 raceWidth = textMeasureOnLayer(race, 2);
        u32 raceColor;
        u32 raceSprite;
        if (!selected) {
            raceSprite = 0x105B;
            raceColor = 0xFF;
        } else {
            raceSprite = 0x106B;
            raceColor = 0xFFFFFFFF;
        }
        const TextureTableEntryIV *raceBox = layoutFindTableEntry(&work->region, raceSprite);
        s32 raceX = x + raceBox->placement->width / 2 + raceBox->x - raceWidth / 2;
        s32 raceY = raceBox->y + y;
        drawTextAtSnappedRectangle(&work->region, (f32)raceX, (f32)raceY, z, 0.0f, layer, raceColor, 1.0f, race);

        const char *name = (const char *)dataTable01FindByIdWithAoc((u16)id);
        u32 nameColor;
        u32 nameSprite;
        if (!selected) {
            nameSprite = 0x105C;
            nameColor = 0xFF;
        } else {
            nameSprite = 0x106C;
            nameColor = 0xFFFFFFFF;
        }
        const TextureTableEntryIV *nameBox = layoutFindTableEntry(&work->region, nameSprite);
        s32 nameX = nameBox->x + x;
        s32 nameY = nameBox->y + y;
        drawTextAtSnappedRectangle(&work->region, (f32)nameX, (f32)nameY, z, 0.0f, layer, nameColor, 1.0f, name);

        char text[32];
        u32 level = 0;
        const NkmEnemyRecord *enemy = nkmEnemyFindById((u16)id);
        if (enemy != NULL) {
            level = enemy->level;
        }
        const TextureTableEntryIV *levelBox;
        if (selected == 0) {
            levelBox = layoutFindTableEntry(&work->region, 0x105A);
        } else {
            levelBox = layoutFindTableEntry(&work->region, 0x106A);
        }
        s32 levelX = levelBox->x + x;
        s32 levelY = levelBox->y + y;
        u32 color = 0xFFFFFFFF;
        sprintf(text, "%2d", level);
        drawTextAtRelativePosition(&work->region, 0, levelX, levelY, 0, 7, color, depth, text);

        u32 money = 0;
        enemy = nkmEnemyFindById((u16)id);
        if (enemy != NULL) {
            money = enemy->money;
        }
        const TextureTableEntryIV *moneyBox;
        if (selected == 0) {
            moneyBox = layoutFindTableEntry(&work->region, 0x1064);
            color = 0x323232FF;
        } else {
            moneyBox = layoutFindTableEntry(&work->region, 0x1074);
        }
        s32 moneyX = x + moneyBox->x;
        s32 moneyY = moneyBox->y + y;
        sprintf(text, "%8d", money);
        drawTextAtRelativePosition(&work->region, 0, moneyX, moneyY, 0, 7, color, depth, text);
    }
}

} /* extern "C" */
