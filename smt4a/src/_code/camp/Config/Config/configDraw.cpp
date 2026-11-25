/* NON_MATCHING: 114 lines (64 by shape), registers and spill slots only; the frame size and
 * the block layout are retail's. The pass-flags push keeps the packed state in r2 (built: r0) and so numbers
 * its scratch registers differently; the first blend-state change of the glow swaps r1/r2; the three spilled
 * values sit at [sp, #28]/[sp, #40]/[sp, #44] (rows, first image, names) where the build has rows at 44, the
 * image at 28 and the names above the text buffer; the label's x and y sums end in r2/r0 (built: r0/r1). */
#include "camp/Config/Config.h"
#include "camp/RenderCtxA.h"
#include "shard/TextureDrawCall.h"
#include "util/BitsAndBytes.h"
#include "text/TextDraw.h"
#include "gamedata/DataTable.h"
#include "gamedata/GameDataAccess.h"
#include "ui/UiSpriteApi.h"
#include "ui/AnimatedMessage.h"
#include "code/Code002a_Smt4a.h"
#include "code/Code002a_VariantA.h"
#include "runtime/Stdio.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* The Config screen's texture table and its entries. */
enum {
    CONFIG_TABLE = 36,
    CONFIG_FRAME_BACK = 0,
    CONFIG_FRAME_FRONT = 13,
    CONFIG_ROW_GLOW_FIRST = 112,        /* four pieces of the selected row's glow */
    CONFIG_ROW_LABEL_AREA = 116,        /* the area a row's label is centred in */
    CONFIG_ROW_PRESSED_GLOW_FIRST = 145 /* the same four pieces while the row is touched */
};

extern "C" {
extern ConfigWorkA *g_config;

s32 uiListGetVisibleCount(const GridNavigation *cursor);
void skinObjectUpdateMatrices(RenderCtxA *context); // declcheck: local (called with the render context, as titleMainDraw and campDrawCurrentSubscreen do; the shared prototype names a SkinObject)
void renderCtxResetColorScale(RenderCtxA *context);
void configDrawRowFrame(s32 x, s32 y, s32 selected, s32 wide, s32 locked, f32 speed);
}

/* The value names (table 0x36, section 0); NULL when the table is empty. */
static __inline ConfigNameTableA *configNameTable(u32 index)
{
    void *table = dataTableGet(0x36, 0);
    ConfigNameTableA *entries = (ConfigNameTableA *)dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    if (index >= count)
        return NULL;
    return &entries[index];
}

/* Draws the selected row's four glow pieces additively at the row's opacity (the lit set while the row is
 * touched). Retail inlines it: it copies `pressed` into its own register after the row frame's call and looks
 * the row's image up again. */
static __inline void configDrawRowGlow(s32 image, s32 x, s32 y, s32 pressed, f32 speed)
{
    TextureTableEntryIV *glow = asdTMTexTableEntryAt(CONFIG_TABLE, image);
    renderCtxSetStackTop(g_renderCtx, RENDER_STACK_B, packNibblesAndByte(6, 1, 0));
    efctSetSpeed(speed);
    if (pressed != 0) {
        for (s32 j = 0; j < 4; j++) {
            texDrawTableEntryAtStoredOrigin(2, CONFIG_TABLE, j + CONFIG_ROW_PRESSED_GLOW_FIRST, glow->x + x,
                                            glow->y + y, 21);
        }
    } else {
        for (s32 j = 0; j < 4; j++) {
            texDrawTableEntryAtStoredOrigin(2, CONFIG_TABLE, j + CONFIG_ROW_GLOW_FIRST, glow->x + x,
                                            glow->y + y, 21);
        }
    }
    efctSetSpeed(1.0f);
    renderCtxSetStackTop(g_renderCtx, RENDER_STACK_B, packNibblesAndByte(6, 7, 0));
}

/* Draws the screen's frame and rows, leaving the opacity at `speed`. Retail inlines it with speed = 1.0f: the
 * constant is loaded into s18 where the call stood, ahead of the cursor queries, not at its first use. */
static __inline void configDrawRows(ConfigWorkA *config, f32 speed)
{
    resourceRunOperationIfUnblocked((Object *)&config->cursor);
    listCursorGetRowIfUnblocked(&config->cursor);

    s32 frameX = vec2GetXInt(&config->sprites[0]);
    s32 frameY = vec2GetYInt(&config->sprites[0]);
    efctSetSpeed(vec2GetSpeed(&config->sprites[0]));
    texDrawCompositeSprite(2, CONFIG_TABLE, CONFIG_FRAME_BACK, frameX, frameY, 11);
    texDrawCompositeSprite(2, CONFIG_TABLE, CONFIG_FRAME_FRONT, frameX, frameY, 11);
    efctSetSpeed(speed);

    if (configNameTable(0) != NULL) {
        s32 firstImage = config->firstRegionImage;
        s32 rows = uiListGetVisibleCount(&config->cursor);
        ConfigNameTableA *names = configNameTable(0);
        for (s32 i = 0; i < rows; i++) {
            char text[64];
            u32 color;
            TextureTableEntryIV *entry = asdTMTexTableEntryAt(CONFIG_TABLE, firstImage + i);
            s32 x = vec2GetXInt(&config->sprites[i + 1]);
            s32 y = vec2GetYInt(&config->sprites[i + 1]);
            f32 alpha = vec2GetSpeed(&config->sprites[i + 1]);
            s32 pressed = 0;
            s32 locked = 0;
            if (config->row == i) {
                color = 0x2bceffff;
                s32 mode = recordGetModeForId(config->regions[i]);
                if (mode == 1 || mode == 2 || mode == 6) { /* the row's touch region is held */
                    color = 0xf5ff9fff;
                    pressed = 1;
                }
                configDrawRowFrame(entry->x + x, entry->y + y, 1, pressed, 0, alpha);
                configDrawRowGlow(firstImage + i, x, y, pressed, alpha);
            } else {
                color = 0xffffffff;
                if (config->rows[i].value == config->initialValue && config->param != 0) {
                    color = 0xff;
                    locked = 1;
                }
                configDrawRowFrame(entry->x + x, entry->y + y, 0, 0, locked, alpha);
            }

            __2sprintf(text, "%s", names->names[config->rows[i].helpId]);
            TextureTableEntryIV *labelArea = asdTMTexTableEntryAt(CONFIG_TABLE, CONFIG_ROW_LABEL_AREA);
            s32 centred = labelArea->x + (labelArea->placement->width - fontMeasureLineAdvance(text, 2)) / 2;
            textDrawString((f32)(entry->x + (x + centred)), (f32)(entry->y + labelArea->y + y), 0.0f, 2, 0.0f, color, alpha,
                           text);
        }
    }
}

extern "C" {

/* Draws the Config screen: the frame, then each row's frame (lit while selected, greyed for the value in
 * effect when a change needs confirming) and the name of its value, centred. */
void configDraw(void)
{
    ConfigWorkA *config = g_config;
    if (config == NULL) {
        return;
    }
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));

    configDrawRows(config, 1.0f);
    efctSetSpeed(1.0f);
    renderCtxPopCounted(g_renderCtx, RENDER_STACK_A);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
}

} /* extern "C" */
