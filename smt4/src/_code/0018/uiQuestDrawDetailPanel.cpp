/* NON_MATCHING: 150 lines (72 by shape). Retail's frame is 116 bytes against 92: it keeps a second copy of the
 * panel's x in its own slot (written with the first, read once for the top edge) beside five slots it never
 * uses, which reads like by-value parameters of an inlined draw helper this source does not have. It also
 * loads &g_uiQuest before clearing the four offsets, adds the opening y into the closing y's register (r6)
 * where the build takes a new one, and holds the first blend state's old value in r1 (built: r2). */
#include "runtime/Stdio.h"
#include "quest_center/QuestText.h"
#include "shard/W4_W4Match2_UiQuest.h"
#include "ui/UiSpriteApi.h"
#include "ui/AnimatedMessage.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "gfx/StereoParallax.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "util/BitsAndBytes.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTableEntry.h"

extern "C" {

void drawSkillCategoryLabel(u16 id, s32 x, s32 y, u32 layer);
void uiDrawTableTextureSized(s32 layer, s32 group, u32 sprite, s32 x, s32 y, s32 width, s32 height, s32 priority);
void effectRenderTransformedInstance(UiSpriteState *sprite, f32 horizontalOffset);

enum {
    QUEST_STATE_DETAIL_OPENING = 17,
    QUEST_STATE_DETAIL_SHOWN = 18,
    QUEST_STATE_DETAIL_CLOSING = 19,

    QUEST_TABLE = 0x29,
    QUEST_SPRITE_PANEL = 0,         /* UiQuest.sprites: the detail panel's slide, */
    QUEST_SPRITE_ARROWS = 5,        /* its page arrows */
    QUEST_SPRITE_OPENING = 6,       /* and its opening effect */

    DETAIL_BAND = 0x4B,             /* table entries: a background band, */
    DETAIL_TOP = 0x4C,              /* the panel's top edge, */
    DETAIL_BOTTOM = 0x4D,           /* bottom edge */
    DETAIL_BODY = 0x4E,             /* and body, */
    DETAIL_TOP_GLOW = 0x4F,
    DETAIL_BOTTOM_GLOW = 0x50,
    DETAIL_TITLE_PLATE = 0x51,
    DETAIL_ARROW_SHADOW_NEAR = 0x52,
    DETAIL_ARROW_SHADOW_FAR = 0x53,
    DETAIL_CATEGORY = 0x54,         /* the layout entries of the category label */
    DETAIL_TITLE = 0x55,            /* and of the title */

    DETAIL_BAND_COUNT = 7,
    DETAIL_OPEN_FRAMES = 6,         /* frames the body takes to unfold */
    DETAIL_FOLD_STEP = 5,           /* pixels each edge moves a frame */
    DETAIL_FOLDED_OFFSET = 31,      /* an edge's distance from its open place when folded */
    DETAIL_FOLDED_HEIGHT = 8        /* what the folded edges overlap by */
};

/* Draws the quest detail panel: its bands, the body unfolding or folding with the panel's timer, the
 * title and the category of the quest, and the opening effect. */
void uiQuestDrawDetailPanel(void)
{
    char title[0x44];
    UiQuest *quest = g_uiQuest;
    s32 x = 0;
    s32 y = 0;
    s32 openX = 0;
    s32 openY = 0;
    u16 questId = quest->questId;
    s32 i;
    s32 shift;
    s32 height;
    s32 offsetY;
    s32 drawX;
    TextureTableEntryIV *entry;

    if (quest->state == QUEST_STATE_DETAIL_OPENING) {
        openX = vec2GetXInt(&quest->sprites[QUEST_SPRITE_PANEL]);
        openY = vec2GetYInt(&quest->sprites[QUEST_SPRITE_PANEL]);
    }
    if (quest->state == QUEST_STATE_DETAIL_CLOSING) {
        x = vec2GetXInt(&quest->sprites[QUEST_SPRITE_PANEL]);
        y = vec2GetYInt(&quest->sprites[QUEST_SPRITE_PANEL]);
    }

    drawX = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.3f);
    if (quest->state >= QUEST_STATE_DETAIL_SHOWN) {
        if (quest->state == QUEST_STATE_DETAIL_CLOSING) {
            f32 alpha = 1.0f - (f32)quest->timer * 0.25f;
            if (alpha < 0.0f)
                alpha = 0.0f;
            efctSetSpeed(alpha);
        }
        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
        for (i = 0; i < DETAIL_BAND_COUNT; ++i)
            texDrawTableEntryAtStoredOrigin(2, QUEST_TABLE, DETAIL_BAND, drawX, quest->bandY[i], 0x92);
        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
        efctSetSpeed(1.0f);
    }

    shift = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.295f);
    entry = asdTMTexTableEntryAt(QUEST_TABLE, DETAIL_BODY);
    if (quest->state == QUEST_STATE_DETAIL_CLOSING) {
        height = entry->placement->height - quest->timer * (DETAIL_FOLD_STEP * 2);
        offsetY = quest->timer * DETAIL_FOLD_STEP;
    } else if (quest->state == QUEST_STATE_DETAIL_OPENING && quest->timer < DETAIL_OPEN_FRAMES) {
        offsetY = DETAIL_FOLDED_OFFSET - quest->timer * DETAIL_FOLD_STEP;
        height = quest->timer * (DETAIL_FOLD_STEP * 2) - DETAIL_FOLDED_HEIGHT;
    } else {
        offsetY = 0;
        height = entry->placement->height;
    }
    drawX = x + shift;
    uiDrawTableTextureSized(2, QUEST_TABLE, DETAIL_BODY, drawX, y + offsetY, entry->placement->width, height, 0x97);
    texDrawTableEntryAtStoredOrigin(2, QUEST_TABLE, DETAIL_TOP, drawX, y + offsetY, 0x9C);

    if (quest->state == QUEST_STATE_DETAIL_CLOSING)
        offsetY = DETAIL_FOLDED_OFFSET - quest->timer * DETAIL_FOLD_STEP;
    else if (quest->state == QUEST_STATE_DETAIL_OPENING && quest->timer < DETAIL_OPEN_FRAMES)
        offsetY = quest->timer * DETAIL_FOLD_STEP - DETAIL_FOLDED_OFFSET;
    else
        offsetY = 0;
    texDrawTableEntryAtStoredOrigin(2, QUEST_TABLE, DETAIL_BOTTOM, drawX, y + offsetY, 0x9C);

    if (quest->state != QUEST_STATE_DETAIL_OPENING || quest->timer > DETAIL_OPEN_FRAMES) {
        efctSetSpeed(vec2GetSpeed(&quest->sprites[QUEST_SPRITE_ARROWS]));
        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
        if (quest->state == QUEST_STATE_DETAIL_CLOSING)
            offsetY = quest->timer * DETAIL_FOLD_STEP;
        texDrawTableEntryAtStoredOrigin(2, QUEST_TABLE, DETAIL_TOP_GLOW, drawX, y + offsetY, 0x9C);
        if (quest->state == QUEST_STATE_DETAIL_CLOSING)
            offsetY = -quest->timer * DETAIL_FOLD_STEP;
        texDrawTableEntryAtStoredOrigin(2, QUEST_TABLE, DETAIL_BOTTOM_GLOW, drawX, y + offsetY, 0x9C);
        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
        efctSetSpeed(1.0f);

        shift = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.29f);
        if (uiSpriteGetCompletionState(&quest->sprites[QUEST_SPRITE_ARROWS]) != 0) {
            texDrawTableEntryAtStoredOrigin(2, QUEST_TABLE, DETAIL_ARROW_SHADOW_NEAR,
                                            quest->panelView.panel.detailFrames + (x + shift),
                                            quest->panelView.panel.detailFrames + y, 0xA1);
            shift = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.285f);
            texDrawTableEntryAtStoredOrigin(2, QUEST_TABLE, DETAIL_ARROW_SHADOW_FAR,
                                            x - quest->panelView.panel.detailFrames + shift,
                                            y - quest->panelView.panel.detailFrames, 0xA6);
        } else {
            effectRenderTransformedInstance(&quest->sprites[QUEST_SPRITE_ARROWS], (f32)shift);
        }

        shift = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.295f);
        y += openY;
        texDrawTableEntryAtStoredOrigin(2, QUEST_TABLE, DETAIL_TITLE_PLATE, x + openX + shift, y, 0xA1);
        entry = asdTMTexTableEntryAt(QUEST_TABLE, DETAIL_CATEGORY);
        drawSkillCategoryLabel(questId, entry->x + x + openX + shift, entry->y + y, 0xA6);
        entry = asdTMTexTableEntryAt(QUEST_TABLE, DETAIL_TITLE);
        __2sprintf(title, "%s", questGetTitleOrDescription(questId, 0));
        textDrawString((f32)(entry->x + x + openX + shift), (f32)(entry->y + y), 0.375f, 3, 0.0f, 0xFF, 1.0f, title);
        if (quest->state != QUEST_STATE_DETAIL_OPENING)
            return;
    }

    if (quest->panelView.panel.detailFrames >= 2 &&
        uiSpriteGetCompletionState(&quest->sprites[QUEST_SPRITE_OPENING]) == 0) {
        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
        effectRenderTransformedInstance(&quest->sprites[QUEST_SPRITE_OPENING], 0.0f);
        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
    }
}

} /* extern "C" */
