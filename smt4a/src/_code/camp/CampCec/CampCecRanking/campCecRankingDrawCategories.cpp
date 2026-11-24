/* NON_MATCHING: the badge/atlas dispatches, coordinate allocation and number-buffer stack slot
 * differ, as in the player rankings. */
#include "runtime/Stdio.h"
#include "camp/CampCec/CampCecRanking.h"
#include "camp/CampMenuEntry.h"
#include "code/Code0019.h"
#include "shard/W6_W6Match3_UnitStatusRequest.h"
#include "gamedata/NkmBaseRecordA.h"
#include "shard/TextureDrawCall.h"
#include "ui/AnimatedMessage.h"
#include "ui/UiSpriteApi.h"

extern "C" {
void FUN_00169a1c(s32 icon, s32 x, s32 y, s32 z);
void drawSetColorFromRGBA8(u32 color);
void numberFontDrawFormatted(s32 kind, s32 x, s32 y, s32 align, s32 digits, u32 slot, const char *format, ...);
}

enum {
    RANKING_ENABLED_FLAG = 0x4F7,
    RANKING_HIDDEN_STATE = 6,
    RANKING_TEXTURE_TABLE = 0x2E,
    RANKING_DRAW_SLOT = 0x65,
    RANKING_ROWS_PER_PAGE = RANK_CATEGORIES
};

/* Draws the ranking screen and the category scores. */
extern "C" s32 campCecRankingDrawCategories(void)
{
    CampCecRanking *ranking = g_campCecRanking;
    if (!gameFlagIsSet(RANKING_ENABLED_FLAG) || ranking->state == 0) {
        return 0;
    }
    if (ranking->state == RANKING_HIDDEN_STATE) {
        return 0;
    }
    if (!asdTMTexTableNodeIsLoaded(RANKING_TEXTURE_TABLE, 1)) {
        return 0;
    }

    const s32 x = vec2GetXInt(&ranking->sprite);
    const s32 y = vec2GetYInt(&ranking->sprite);
    const f32 alpha = vec2GetSpeed(&ranking->sprite);
    efctSetSpeed(alpha);
    texDrawCompositeSprite(2, RANKING_TEXTURE_TABLE, 0x1F, x, y, RANKING_DRAW_SLOT);
    for (s32 row = 0; row < RANKING_ROWS_PER_PAGE; ++row) {
        const u16 category = ranking->categories[row].id;
        u16 id = 0;
        if ((u32)(category - 1) < 8) {
            id = dataTable10FindValue((u16)FUN_0036fcd0(category, 0));
        }
        const s32 score = ranking->categories[row].score;
        bool empty = false;
        if (id == 0 || score == 0) {
            empty = true;
        }
        const s32 rank = ranking->categories[row].rank;
        const TextureTableEntryIV *position = asdTMTexTableEntryAt(RANKING_TEXTURE_TABLE, row + 0x49E);
        const s32 dx = position->x;
        const s32 dy = position->y;
        if (empty) {
            texDrawCompositeSprite(2, RANKING_TEXTURE_TABLE, 0x23, dx + x, dy + y, RANKING_DRAW_SLOT);
        } else {
            if (rank == 1) {
                texDrawCompositeSprite(2, RANKING_TEXTURE_TABLE, 0x20, dx + x, dy + y, RANKING_DRAW_SLOT);
            } else if (rank == 2) {
                texDrawCompositeSprite(2, RANKING_TEXTURE_TABLE, 0x21, dx + x, dy + y, RANKING_DRAW_SLOT);
            } else if (rank == 3) {
                texDrawCompositeSprite(2, RANKING_TEXTURE_TABLE, 0x22, dx + x, dy + y, RANKING_DRAW_SLOT);
            } else {
                texDrawCompositeSprite(2, RANKING_TEXTURE_TABLE, 0x23, dx + x, dy + y, RANKING_DRAW_SLOT);
                const TextureTableEntryIV *rankPosition = asdTMTexTableEntryAt(RANKING_TEXTURE_TABLE, 0x43C);
                texDrawTableEntryAtStoredOrigin(2, RANKING_TEXTURE_TABLE, rank + 0x421,
                                              dx + rankPosition->x + x, dy + rankPosition->y + y, RANKING_DRAW_SLOT);
            }

            s32 icon, name, separator, scorePosition, scoreAnchor;
            switch (rank) {
            case 1:
                icon = 0x45F;
                name = 0x460;
                separator = 0x461;
                scorePosition = 0x464;
                scoreAnchor = 0x462;
                break;
            case 2:
                icon = 0x470;
                name = 0x471;
                separator = 0x472;
                scorePosition = 0x475;
                scoreAnchor = 0x473;
                break;
            case 3:
                icon = 0x481;
                name = 0x482;
                separator = 0x483;
                scorePosition = 0x486;
                scoreAnchor = 0x484;
                break;
            default:
                icon = 0x43D;
                name = 0x43E;
                separator = 0x43F;
                scorePosition = 0x442;
                scoreAnchor = 0x440;
                break;
            }
            if (id != 0) {
                const NkmBaseRecordA *record = nkmBaseGetRecord(id);
                const TextureTableEntryIV *iconPosition = asdTMTexTableEntryAt(RANKING_TEXTURE_TABLE, icon);
                FUN_00169a1c(record->model, dx + iconPosition->x + x, dy + iconPosition->y + y, RANKING_DRAW_SLOT);
            }

            u32 color;
            if (rank == 1) {
                color = 0x34220600;
            } else if (rank == 2) {
                color = 0x2B373700;
            } else if (rank == 3) {
                color = 0x3D1E0900;
            } else {
                color = 0xFFFFFF00;
            }
            const TextureTableEntryIV *namePosition = asdTMTexTableEntryAt(RANKING_TEXTURE_TABLE, name);
            const s32 nameX = dx + namePosition->x;
            const s32 nameY = dy + namePosition->y;
            uiObjectSetColorRgb(ranking->categoryText[row], color);
            textDrawFaded((const void *)ranking->categoryText[row], nameX + x, nameY + y, RANKING_DRAW_SLOT, alpha);

            if (rank < 4) {
                const TextureTableEntryIV *separatorPosition = asdTMTexTableEntryAt(RANKING_TEXTURE_TABLE, separator);
                texDrawTableEntryAtStoredOrigin(2, RANKING_TEXTURE_TABLE, 0x4A5,
                                              dx + separatorPosition->x + x, dy + separatorPosition->y + y, RANKING_DRAW_SLOT);
            }
            const TextureTableEntryIV *numberPosition = asdTMTexTableEntryAt(RANKING_TEXTURE_TABLE, scorePosition);
            /* Retail queries the second score anchor without using its return value. */
            asdTMTexTableEntryAt(RANKING_TEXTURE_TABLE, scoreAnchor);
            const s32 numberX = dx + numberPosition->x;
            const s32 numberY = dy + numberPosition->y;
            drawSetColorFromRGBA8(0xFFFFFFFF);
            char number[128];
            __2sprintf(number, "%d", score);
            numberFontDrawFormatted(6, numberX + x, numberY + y, 1, 3, RANKING_DRAW_SLOT, number);
            gxResetColorQuadToWhite();
        }
    }
    efctSetSpeed(1.0f);
    return 0;
}
