/* NON_MATCHING: retail keeps the badge dispatch and the atlas-selection dispatch separate. The
 * compiler combines parts of them here and assigns the row coordinates and score to other registers. */
#include "runtime/Stdio.h"
#include "camp/CampCec/CampCecRanking.h"
#include "camp/CampMenuEntry.h"
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
    RANKING_ENABLED_FLAG = 0x4F6,
    RANKING_HIDDEN_STATE = 6,
    RANKING_TEXTURE_TABLE = 0x2E,
    RANKING_DRAW_SLOT = 0x65,
    RANKING_ROWS_PER_PAGE = 10
};

/* Draws the ranking screen and the first page of the player scores. */
extern "C" s32 campCecRankingDrawPlayers(void)
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
    texDrawTableEntryAtStoredOrigin(2, RANKING_TEXTURE_TABLE, 0x44D, x, y, RANKING_DRAW_SLOT);
    texDrawCompositeSprite(2, RANKING_TEXTURE_TABLE, 0x1A, x, y, RANKING_DRAW_SLOT);
    for (s32 row = 0; row < RANKING_ROWS_PER_PAGE; ++row) {
        const s32 score = ranking->players[row].score;
        const u16 id = ranking->players[row].id;
        bool empty = false;
        if (id == 0 || score == 0) {
            empty = true;
        }
        const s32 rank = ranking->players[row].rank;
        const TextureTableEntryIV *position = asdTMTexTableEntryAt(RANKING_TEXTURE_TABLE, row + 0x443);
        const s32 dx = position->x;
        const s32 dy = position->y;
        if (empty) {
            texDrawCompositeSprite(2, RANKING_TEXTURE_TABLE, 0x1E, dx + x, dy + y, RANKING_DRAW_SLOT);
        } else {
            if (rank == 1) {
                texDrawCompositeSprite(2, RANKING_TEXTURE_TABLE, 0x1B, dx + x, dy + y, RANKING_DRAW_SLOT);
            } else if (rank == 2) {
                texDrawCompositeSprite(2, RANKING_TEXTURE_TABLE, 0x1C, dx + x, dy + y, RANKING_DRAW_SLOT);
            } else if (rank == 3) {
                texDrawCompositeSprite(2, RANKING_TEXTURE_TABLE, 0x1D, dx + x, dy + y, RANKING_DRAW_SLOT);
            } else {
                texDrawCompositeSprite(2, RANKING_TEXTURE_TABLE, 0x1E, dx + x, dy + y, RANKING_DRAW_SLOT);
                const TextureTableEntryIV *rankPosition = asdTMTexTableEntryAt(RANKING_TEXTURE_TABLE, 0x43C);
                texDrawTableEntryAtStoredOrigin(2, RANKING_TEXTURE_TABLE, rank + 0x421,
                                              dx + rankPosition->x + x, dy + rankPosition->y + y, RANKING_DRAW_SLOT);
            }

            s32 icon, name, separator, scorePosition, scoreAnchor;
            switch (rank) {
            case 1:
                icon = 0x3F7;
                name = 0x3F8;
                separator = 0x3F9;
                scorePosition = 0x3FC;
                scoreAnchor = 0x3FA;
                break;
            case 2:
                icon = 0x408;
                name = 0x409;
                separator = 0x40A;
                scorePosition = 0x40D;
                scoreAnchor = 0x40B;
                break;
            case 3:
                icon = 0x419;
                name = 0x41A;
                separator = 0x41B;
                scorePosition = 0x41E;
                scoreAnchor = 0x41C;
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
            uiObjectSetColorRgb(ranking->playerText[row], color);
            textDrawFaded((const void *)ranking->playerText[row], nameX + x, nameY + y, RANKING_DRAW_SLOT, alpha);

            const TextureTableEntryIV *separatorPosition = asdTMTexTableEntryAt(RANKING_TEXTURE_TABLE, separator);
            texDrawTableEntryAtStoredOrigin(2, RANKING_TEXTURE_TABLE, 0x4A5,
                                          dx + separatorPosition->x + x, dy + separatorPosition->y + y, RANKING_DRAW_SLOT);
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
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    return 0;
}
