/* NON_MATCHING: 36 rows by shape in three places; the instructions, frame and block layout are retail's.
 * The early return sets its own r0 (`movne r0, #0`) and the last return copies the zero register after the
 * pass-flag pop (`mov r0, sl` before `add sp`), where this build shares one `mov r0, #0` in the epilogue.
 * That last pop keeps the old top in r0 and the restored state in r1 (`mov r0, r1` before the apply call);
 * built: the other way round, as in the blend pop above, which matches. The unselected entry's text loads
 * the entry's y into s1 and the frame's into s2 (built: s2 and s1, as retail does for the selected entry). */
#include "title/titleMain.h"
#include "camp/RenderCtxTitle.h"
#include "util/BitsAndBytes.h"
#include "text/TextDraw.h"
#include "ui/AnimatedMessage.h"
#include "gamedata/DataTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {

extern TitleMain *g_titleMain;

/* One row of data table 0x3A's section 0: a title menu entry's text. */
struct TitleMenuText {
    /* 0x00 */ char text[0x56];
};

enum {
    TITLE_MENU_SPRITES = 0x11,
    TITLE_MENU_ENTRIES = 4,
    TITLE_MENU_FONT = 4
};

/* The title screen's lower-screen draw task: the background, the version, and the four menu entries with the
 * cursor behind the selected one. */
s32 titleMainDrawLower(u32 handle)
{
    TitleMain *title = g_titleMain;
    if (title->menuHidden != 0) {
        return 0;
    }
    renderCtxSelectStereoLayout(g_titleScene);

    renderCtxPushB(g_titleScene, packNibblesAndByte(6, 1, 0));
    efctSetSpeed(title->menuAlpha);
    gxResetColorQuadToWhite();
    texDrawCompositeSprite(2, TITLE_MENU_SPRITES, 1, 0, 0, 2);
    renderCtxPopCounted(g_titleScene, RENDER_STACK_B);

    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
    efctSetSpeed(1.0f);
    gxResetColorQuadToWhite();

    f32 cursorAlpha = title->cursorAlpha;
    if (g_titleMain->unk61 != 0 || g_titleMain->unk62 != 0) {
        cursorAlpha = title->menuAlpha;
    }
    u32 color = 0xff;
    if (title->menuEnabled == 0) {
        color = 0x787878ff;
    }
    TextureTableEntryIV *frame = asdTMTexTableEntryAt(TITLE_MENU_SPRITES, 0x11);
    s32 frameWidth = frame->placement->width;
    textDrawString(264.0f, 177.0f, 0.0f, 2, 0.0f, 0xff, title->menuAlpha, "Version 1.1");

    for (s32 i = 0; i < TITLE_MENU_ENTRIES; i++) {
        TitleMenuText *texts = (TitleMenuText *)dataTableGetEntries(dataTableGet(0x3a, 0));
        const char *text = texts[i].text;
        f32 centring = (f32)(frameWidth - (s32)fontMeasureTextWidth(text, TITLE_MENU_FONT, 0.0f)) * 0.5f;
        if (title->cursor != i) {
            textDrawString((f32)(s32)((f32)frame->x + centring), title->entries[i].y + (f32)frame->y, 0.0f, 4,
                           0.0f, color, title->menuAlpha, text);
        } else {
            efctSetSpeed(title->menuAlpha);
            texDrawCompositeSprite(2, TITLE_MENU_SPRITES, 2, (s32)title->entries[i].x,
                                   (s32)title->entries[i].y, 2);
            efctSetSpeed(1.0f);
            efctSetSpeed(cursorAlpha);
            texDrawCompositeSprite(2, TITLE_MENU_SPRITES, 2, (s32)title->entries[i].x,
                                   (s32)title->entries[i].y, 2);
            efctSetSpeed(1.0f);
            textDrawString((f32)(s32)((f32)frame->x + centring), title->entries[i].y + (f32)frame->y, 0.0f, 4,
                           0.0f, 0x72e027ff, title->menuAlpha, text);
        }
    }
    renderCtxPopCounted(g_titleScene, RENDER_STACK_A);
    return 0;
}

} /* extern "C" */
