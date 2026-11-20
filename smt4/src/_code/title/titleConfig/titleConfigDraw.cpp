/* NON_MATCHING: 28 rows in three places, registers and scheduling only (same instructions, frame and block
 * layout as retail). Entering the row frame, retail loads g_titleScene through r0 after spilling the frame's x
 * sum (built: through r2, before the sums); in the cursor's first blend-state change the stack slot address and
 * the previous state take r2/r1 (built: r1/r2); for the label position retail loads the row entry's halfwords
 * before the label entry's (built: the label's first; written `entry->x + labelEntry->x` the sums go through
 * s0/s2 instead of straight into s1/s0). The knob's touch test is the negative one (untouched knob first): written
 * the other way round armcc shares the untouched knob's draw with the unselected row's. */
#include "ui/UiSpriteApi.h"
#include "title/titleConfig.h"
#include "camp/RenderCtxTitle.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match2_FormattedTextSource.h"
#include "util/BitsAndBytes.h"
#include "text/TextDraw.h"
#include "gfx/SpritePartDraw.h"
#include "gamedata/DataTable.h"
#include "code/Code0029.h"
#include "code/Code002a_VariantA.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include <string.h>

extern "C" {

extern TitleConfigCallbackView *g_titleConfig;

s32 resourceRunOperationIfUnblocked(const void *list);
u8 ifTouchGetSelectionModeForRegion(int id);

/* Draws a row's frame, and the additive cursor over the selected one. */
static __inline void titleConfigDrawRowFrame(s32 rowX, s32 rowY, bool isSelected)
{
    renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
    if (!isSelected) {
        texDrawTableEntryAtStoredOrigin(2, 0x2f, 0xc, rowX, rowY, 0xb);
    } else {
        texDrawTableEntryAtStoredOrigin(2, 0x2f, 0xd, rowX, rowY, 0xb);
    }
    renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
    texDrawCompositeSprite(2, 0x2f, 1, rowX, rowY, 0x10);
    if (isSelected) {
        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
        texDrawCompositeSprite(2, 0x2f, 2, rowX, rowY, 0x15);
        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
    }
}

/* Draws a row's slider with its knob at `level`; the selected row's arrows and knob light up while touched. */
static __inline void titleConfigDrawSlider(s32 rowX, s32 rowY, s32 level, bool isSelected)
{
    TitleConfigCallbackView *menu = g_titleConfig;
    s32 mode;
    texDrawCompositeSprite(2, 0x2f, 3, rowX, rowY, 0x1f);
    TextureTableEntryIV *knob = asdTMTexTableEntryAt(0x2f, level + 0x5b);
    if (isSelected) {
        mode = ifTouchGetSelectionModeForRegion(menu->leftButton);
        if (mode == 1 || mode == 2 || mode == 6) {
            texDrawCompositeSprite(2, 0x2f, 5, rowX, rowY, 0x15);
        } else {
            texDrawCompositeSprite(2, 0x2f, 4, rowX, rowY, 0x1f);
        }
        mode = ifTouchGetSelectionModeForRegion(menu->rightButton);
        if (mode == 1 || mode == 2 || mode == 6) {
            texDrawCompositeSprite(2, 0x2f, 7, rowX, rowY, 0x15);
        } else {
            texDrawCompositeSprite(2, 0x2f, 6, rowX, rowY, 0x1f);
        }
        mode = ifTouchGetSelectionModeForRegion(menu->slider);
        if (mode != 1 && mode != 2 && mode != 6) {
            texDrawTableEntryAtStoredOrigin(2, 0x2f, 0x31, knob->x + rowX, knob->y + rowY, 0x29);
        } else {
            texDrawTableEntryAtStoredOrigin(2, 0x2f, 0x32, knob->x + rowX, knob->y + rowY, 0x29);
        }
    } else {
        texDrawCompositeSprite(2, 0x2f, 4, rowX, rowY, 0x1f);
        texDrawCompositeSprite(2, 0x2f, 6, rowX, rowY, 0x1f);
        texDrawTableEntryAtStoredOrigin(2, 0x2f, 0x31, knob->x + rowX, knob->y + rowY, 0x29);
    }
}

/* The config menu's draw task: the window, then one row per visible setting (its frame, label, the reset
 * button of the selected row, and the slider with its arrows and knob). */
s32 titleConfigDraw(void)
{
    TitleConfigCallbackView *config = g_titleConfig;
    s32 x = vec2GetXInt(&config->window);
    s32 y = vec2GetYInt(&config->window);
    s32 editing = 0;
    if (config->state == 1) {
        editing = 1;
    }
    char text[64] = {0};

    texDrawCompositeSprite(2, 0x2f, 0xc, x, y, 0xb);
    s32 selected = resourceRunOperationIfUnblocked(config->cursor) + listCursorGetRowIfUnblocked(config->cursor);
    for (s32 row = 0; row < (s32)uiListGetVisibleCount(config->cursor); row++) {
        memset(text, 0, sizeof(text));
        bool isSelected = false;
        u32 color = 0xe09800ff;
        if (editing && resourceRunOperationIfUnblocked(config->cursor) + row == selected) {
            isSelected = true;
            color = 0x72e027ff;
        }
        TextureTableEntryIV *entry = asdTMTexTableEntryAt(0x2f, row + 0x1f);

        titleConfigDrawRowFrame(entry->x + x, entry->y + y, isSelected);

        TextureTableEntryIV *labelEntry = asdTMTexTableEntryAt(0x2f, 0x1a);
        u32 setting = resourceRunOperationIfUnblocked(config->cursor) + row;
        if (setting < 3) {
            TitleConfigHelpEntry *labels = (TitleConfigHelpEntry *)dataTableGetEntries(dataTableGet(0x3a, 1));
            __2sprintf(text, "%s", &labels[setting]);
            textDrawString((f32)(labelEntry->x + entry->x + x), (f32)(labelEntry->y + entry->y + y), 0.0f, 2, 0.0f, color,
                           1.0f, text);
        }

        if (isSelected) {
            texDrawTableEntryAtStoredOrigin(2, 0x2f, 0x1c, entry->x + x, entry->y + y, 0x1f);
            s32 mode = ifTouchGetSelectionModeForRegion(config->resetButton);
            if (mode == 1 || mode == 2 || mode == 6) {
                renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
                texDrawTableEntryAtStoredOrigin(2, 0x2f, 0x1d, entry->x + x, entry->y + y, 0x1f);
                renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
            }
        } else {
            texDrawTableEntryAtStoredOrigin(2, 0x2f, 0x1b, entry->x + x, entry->y + y, 0x1f);
        }

        titleConfigDrawSlider(entry->x + x, entry->y + y,
                              config->settings[resourceRunOperationIfUnblocked(config->cursor) + row], isSelected);
    }
    return 0;
}

} /* extern "C" */
