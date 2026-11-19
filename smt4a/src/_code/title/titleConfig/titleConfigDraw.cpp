/* NON_MATCHING: 24 rows, registers only (same instructions, frame and block layout as retail). Retail keeps the
 * row frame's x sum in r0 (spilled and reloaded into r3) and its y sum in r1 where this build swaps them; in the
 * cursor's two blend-state changes the stack slot address and the previous state take r2/r1 (built: r1/r2); the
 * label position's y and x sums take r1/r0 (built: r0/r1). */
#include "ui/UiSpriteApi.h"
#include "title/titleConfig.h"
#include "camp/RenderCtxA.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match2_FormattedTextSource.h"
#include "util/BitsAndBytes.h"
#include "text/TextDraw.h"
#include "gamedata/DataTable.h"
#include "gamedata/GameDataAccess.h"
#include "ui/AnimatedMessage.h"
#include "code/Code002a_Smt4a.h"
#include "code/Code002a_VariantA.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include <string.h>

extern "C" {

extern TitleConfigA *g_titleConfig;

s32 uiSearchPrimary(const void *controller);
f32 jobGetScalarValue(void);

/* Draws a row's frame, and the pulsing cursor over the selected one. Retail inlines this and
 * titleConfigDrawSlider (it re-reads g_titleConfig inside each and shares one spill slot between their x
 * arguments: written in place the frame is 0x84 bytes, not retail's 0x5C); smt4's FUN_002cb054 has the same two. */
static void titleConfigDrawRowFrame(s32 rowX, s32 rowY, bool isSelected)
{
    TitleConfigA *menu = g_titleConfig;
    if (!isSelected) {
        texDrawTableEntryAtStoredOrigin(2, 0x24, 0xc, rowX, rowY, 0xb);
    } else {
        texDrawTableEntryAtStoredOrigin(2, 0x24, 0xd, rowX, rowY, 0xb);
    }
    texDrawCompositeSprite(2, 0x24, 1, rowX, rowY, 0x10);
    if (isSelected) {
        renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
        f32 speed = jobGetScalarValue();
        efctSetSpeed(menu->cursorScale * speed);
        texDrawCompositeSprite(2, 0x24, 2, rowX, rowY, 0x15);
        efctSetSpeed(speed);
        renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
    }
}

/* Draws a row's slider with its knob at `level`; the selected row's arrows and knob light up while touched. */
static void titleConfigDrawSlider(s32 rowX, s32 rowY, s32 level, bool isSelected)
{
    TitleConfigA *menu = g_titleConfig;
    s32 mode;
    texDrawCompositeSprite(2, 0x24, 3, rowX, rowY, 0x1f);
    TextureTableEntryIV *knob = asdTMTexTableEntryAt(0x24, level + 0x5b);
    if (isSelected) {
        mode = recordGetModeForId(menu->touchRegions[1]);
        if (mode == 1 || mode == 2 || mode == 6) {
            texDrawCompositeSprite(2, 0x24, 5, rowX, rowY, 0x15);
        } else {
            texDrawCompositeSprite(2, 0x24, 4, rowX, rowY, 0x1f);
        }
        mode = recordGetModeForId(menu->touchRegions[2]);
        if (mode == 1 || mode == 2 || mode == 6) {
            texDrawCompositeSprite(2, 0x24, 7, rowX, rowY, 0x15);
        } else {
            texDrawCompositeSprite(2, 0x24, 6, rowX, rowY, 0x1f);
        }
        mode = recordGetModeForId(menu->touchRegions[3]);
        if (mode != 1 && mode != 2 && mode != 6) {
            texDrawTableEntryAtStoredOrigin(2, 0x24, 0x31, knob->x + rowX, knob->y + rowY, 0x29);
        } else {
            texDrawTableEntryAtStoredOrigin(2, 0x24, 0x32, knob->x + rowX, knob->y + rowY, 0x29);
        }
    } else {
        texDrawCompositeSprite(2, 0x24, 4, rowX, rowY, 0x1f);
        texDrawCompositeSprite(2, 0x24, 6, rowX, rowY, 0x1f);
        texDrawTableEntryAtStoredOrigin(2, 0x24, 0x31, knob->x + rowX, knob->y + rowY, 0x29);
    }
}

/* The config menu's draw task: the window, then one row per visible setting (its frame, label, the reset
 * button of the selected row, and the slider with its arrows and knob). */
s32 titleConfigDraw(void)
{
    TitleConfigA *config = g_titleConfig;
    s32 x = vec2GetXInt(&config->window);
    s32 y = vec2GetYInt(&config->window);
    f32 alpha = vec2GetSpeed(&config->window);
    s32 editing = 0;
    if (config->state == 1) {
        editing = 1;
    }
    char text[64] = {0};

    efctSetSpeed(alpha);
    texDrawCompositeSprite(2, 0x24, 0xc, x, y, 0xb);
    s32 selected = resourceRunOperationIfUnblocked((Object *)config->cursor) + listCursorGetRowIfUnblocked(config->cursor);
    for (s32 row = 0; row < uiSearchPrimary(config->cursor); row++) {
        memset(text, 0, sizeof(text));
        bool isSelected = false;
        s32 mode;
        u32 color = 0x9fddddff;
        if (editing && resourceRunOperationIfUnblocked((Object *)config->cursor) + row == selected) {
            isSelected = true;
            color = 0x2bceffff;
        }
        TextureTableEntryIV *entry = asdTMTexTableEntryAt(0x24, row + 0x1f);

        titleConfigDrawRowFrame(entry->x + x, entry->y + y, isSelected);

        TextureTableEntryIV *labelEntry = asdTMTexTableEntryAt(0x24, 0x1a);
        u32 setting = resourceRunOperationIfUnblocked((Object *)config->cursor) + row;
        if (setting < 3) {
            TitleConfigLabelA *labels = (TitleConfigLabelA *)dataTableGetEntries(dataTableGet(0x3a, 1));
            __2sprintf(text, "%s", labels[setting].text);
            textDrawString((f32)(entry->x + labelEntry->x + x), (f32)(entry->y + labelEntry->y + y), 0.0f, 2, 0.0f, color,
                           alpha, text);
        }

        if (isSelected) {
            texDrawTableEntryAtStoredOrigin(2, 0x24, 0x1c, entry->x + x, entry->y + y, 0x1f);
            mode = recordGetModeForId(config->touchRegions[0]);
            if (mode == 1 || mode == 2 || mode == 6) {
                renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
                texDrawTableEntryAtStoredOrigin(2, 0x24, 0x1d, entry->x + x, entry->y + y, 0x1f);
                renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
            }
        } else {
            texDrawTableEntryAtStoredOrigin(2, 0x24, 0x1b, entry->x + x, entry->y + y, 0x1f);
        }

        titleConfigDrawSlider(entry->x + x, entry->y + y,
                              config->settingIndex[resourceRunOperationIfUnblocked((Object *)config->cursor) + row], isSelected);
    }
    efctSetSpeed(1.0f);
    return 0;
}

} /* extern "C" */
