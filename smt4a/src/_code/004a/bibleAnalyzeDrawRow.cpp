#include <stdio.h>
#include "shard/Shard004A.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "ui/UiSpriteApi.h"
#include "ui/UiControl.h"
#include "camp/RenderCtxA.h"
#include "ui/AnimatedMessage.h"
#include "code/Code0049_Smt4a.h"
#include "gamedata/GameDataAccess_VariantF.h"
#include "gamedata/NkmEnemyLookup.h"
#include "addon/LookupRecord.h"

extern "C" {
void uiDrawSizedTextureAtRegionEnd(const ScreenRect *rect, u32 image, s32 offsetX, s32 offsetY, u32 color, u32 flags);
void renderSetClippedScissor(s32 x, s32 y, s32 width, s32 height);
void devilDrawIconRelative(const ScreenRect *rect, u32 demon, s32 x, s32 y, u32 style);
s32 textMeasureOnLayer(const char *text, u32 layer);
f32 drawTextAtSnappedRectangle(const ScreenRect *rect, f32 x, f32 y, f32 depth, f32 spacing, u32 layer,
                               u32 color, f32 opacity, const char *text);

/* Draws one row of the analyze list: the selected row's frame and scrolling band, then the demon's icon, its race
 * (centred in its box), its name, its level and the money it carries. An id of 0 leaves the row empty. */
void bibleAnalyzeDrawRow(Screen4A *screen, s32 index, s32 selected, s32 id)
{
    s32 depth = screen->transition.slide;
    if (selected) {
        depth++;
    }
    f32 z = (f32)(256 - depth) * 0.00390625f;
    const TextureTableEntryIV *origin;
    if (!selected) {
        origin = layoutFindTableEntry(&screen->layout.rect, index + 0x102F);
    } else {
        origin = layoutFindTableEntry(&screen->layout.rect, index + 0x1042);
    }
    s32 x = origin->x;
    s32 y = origin->y;

    if (selected) {
        efctSetSpeed(vec2GetSpeed(&screen->parts.sprites[0]));
        uiDrawTableTextureAtRectCorner(&screen->layout.rect, 0x103A, x, y, depth);
        uiDrawTableTextureAtRectCorner(&screen->layout.rect, 0x103B, x, y, depth);
        uiDrawTableTextureAtRectCorner(&screen->layout.rect, 0x103C, x, y, depth);
        efctSetSpeed(1.0f);
        uiDrawSizedTextureAtRegionEnd(&screen->layout.rect, 0x103D, x, y, depth, 1);
        uiDrawSizedTextureAtRegionEnd(&screen->layout.rect, 0x103E, x, y, depth, 1);
        const TextureTableEntryIV *clip = layoutFindTableEntry(&screen->layout.rect, 0x1041);
        s32 clipX = clip->x + x;
        s32 clipY = clip->y + y;
        s32 clipWidth = clip->placement->width;
        s32 clipHeight = clip->placement->height;
        renderSetClippedScissor(clipX, clipY, clipWidth, clipHeight);
        const TextureTableEntryIV *band = layoutFindTableEntry(&screen->layout.rect, 0x1040);
        UiSpriteState *scroll = &screen->parts.sprites[1];
        s32 bandX = vec2GetXInt(scroll) + x - (band->width & 0x7FFF);
        s32 bandY = vec2GetYInt(scroll) + y;
        uiDrawSizedTextureAtRegionEnd(&screen->layout.rect, 0x1040, bandX, bandY, depth, 1);
        renderStackSet(g_renderCtx->stacks + RENDER_STACK_SCISSOR, 0);
    }
    if (id != 0) {
        const TextureTableEntryIV *icon;
        if (selected == 0) {
            icon = layoutFindTableEntry(&screen->layout.rect, 0x1058);
        } else {
            icon = layoutFindTableEntry(&screen->layout.rect, 0x1068);
        }
        s32 iconX = icon->x + x;
        s32 iconY = icon->y + y;
        devilDrawIconRelative(&screen->layout.rect, (s16)id, iconX, iconY, depth);

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
        const TextureTableEntryIV *raceBox = layoutFindTableEntry(&screen->layout.rect, raceSprite);
        s32 raceX = x + raceBox->placement->width / 2 + raceBox->x - raceWidth / 2;
        s32 raceY = raceBox->y + y;
        drawTextAtSnappedRectangle(&screen->layout.rect, (f32)raceX, (f32)raceY, z, 0.0f, layer, raceColor, 1.0f, race);

        const char *name = (const char *)dataTable01GetRecordWithAocOverride((u16)id);
        u32 nameColor;
        u32 nameSprite;
        if (!selected) {
            nameSprite = 0x105C;
            nameColor = 0xFF;
        } else {
            nameSprite = 0x106C;
            nameColor = 0xFFFFFFFF;
        }
        const TextureTableEntryIV *nameBox = layoutFindTableEntry(&screen->layout.rect, nameSprite);
        s32 nameX = nameBox->x + x;
        s32 nameY = nameBox->y + y;
        drawTextAtSnappedRectangle(&screen->layout.rect, (f32)nameX, (f32)nameY, z, 0.0f, layer, nameColor, 1.0f, name);

        char text[32];
        u32 level = 0;
        const NkmEnemyRecordA *enemy = nkmEnemyFindById((u16)id);
        if (enemy != NULL) {
            level = enemy->level & 0x7FFF;
        }
        const TextureTableEntryIV *levelBox;
        if (selected == 0) {
            levelBox = layoutFindTableEntry(&screen->layout.rect, 0x105A);
        } else {
            levelBox = layoutFindTableEntry(&screen->layout.rect, 0x106A);
        }
        s32 levelX = levelBox->x + x;
        s32 levelY = levelBox->y + y;
        u32 color = 0xFFFFFFFF;
        sprintf(text, "%2d", level);
        drawTextAtRelativePosition(&screen->layout.rect, 0, levelX, levelY, 0, 7, color, depth, text);

        u32 money = 0;
        enemy = nkmEnemyFindById((u16)id);
        if (enemy != NULL) {
            money = enemy->money;
        }
        const TextureTableEntryIV *moneyBox;
        if (selected == 0) {
            moneyBox = layoutFindTableEntry(&screen->layout.rect, 0x1064);
            color = 0x323232FF;
        } else {
            moneyBox = layoutFindTableEntry(&screen->layout.rect, 0x1074);
        }
        s32 moneyX = x + moneyBox->x;
        s32 moneyY = moneyBox->y + y;
        sprintf(text, "%8d", money);
        drawTextAtRelativePosition(&screen->layout.rect, 0, moneyX, moneyY, 0, 7, color, depth, text);
    }
}

} /* extern "C" */
