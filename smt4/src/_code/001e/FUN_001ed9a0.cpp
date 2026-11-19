/* NON_MATCHING: near (209 rows against 209): same flow, constants, render-target push/pop and float maths; retail reads `visible` through a pointer to a 0x300 sub-block of the save/load UI (add r0,r4,#768; ldrb [r0,#84]) and the entry-lock byte as (ui+index)+844, keeps the zero constant in r7 instead of r6, and loads the three globals in a different order, which a flat struct does not reproduce */
#include "gamedata/SaveLoadUITable.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;

extern "C" {

/* Render-target stack of the title scene (observed fields only). */
struct RenderTargetStack {
    s32 depth;                 /* 0x00 */
    s32 pad04;
    s32 entry[4];              /* 0x08 */
    u8 dirty;                  /* 0x18 */
    u8 pad19[3];
    void (*apply)(void);       /* 0x1C: re-applies the current top entry */
};

struct TitleScene {
    u8 pad0000[0x124C];
    RenderTargetStack targets; /* 0x124C */
};

/* Save/load screen globals (observed fields only). */
struct SaveLoadUI {
    u8 pad00[0x49];
    u8 hasCursor;              /* 0x49 */
    u8 pad4A[0x55 - 0x4A];
    u8 shaded;                 /* 0x55: screen shading requested */
    u8 pad56[0x70 - 0x56];
    u8 titleShown;             /* 0x70 */
    u8 titleBusy;              /* 0x71 */
    u8 cursorBusy;             /* 0x72 */
    u8 pad73[0x34C - 0x73];
    u8 entryLocked[1];         /* 0x34C: indexed by the current entry */
    u8 pad34D[0x354 - 0x34D];
    u8 visible;                /* 0x354 */
    u8 pad355[0x374 - 0x355];
    f32 speed;                 /* 0x374 */
    u8 closing;                /* 0x378 */
};

struct SaveLoadGlobals {
    u32 pad00;
    SaveLoadUI *ui;            /* 0x04 */
    s32 entryIndex;            /* 0x08 */
};

struct CaptionRecord {
    u8 pad00[0x54];
};

extern SaveLoadGlobals g_saveLoadUI;   /* 0x44de2c */
extern TitleScene *g_titleScene;       /* 0x44ea00 */

s32 FUN_002996d8(s32 arg);
void gxResetColorQuadToWhite(void);
u32 renderCtxPackPassFlags(s32 a, s32 b);
void efctSetSpeed(f32 speed);
f32 renderCtxCalculateStereoParallax(TitleScene *scene, f32 scale);
s32 texDrawCompositeSprite(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 libc_strlen(const char *text);
s32 gxSetUniformQuadColors(f32 *color);
s32 screenDrawShadedRect(s32 x, s32 y, s32 w, s32 h, s32 depth);

/* Pushes `value` onto the render-target stack, re-applying it when it changed. */
static void renderTargetPush(TitleScene *scene, u32 value)
{
    RenderTargetStack *stack = &scene->targets;
    s32 previous = stack->entry[stack->depth];

    stack->depth = stack->depth + 1;
    stack->entry[stack->depth] = value;
    if (stack->dirty != 0 || previous != (s32)value) {
        stack->apply();
        stack->dirty = 0;
    }
}

/* Pops the render-target stack, re-applying the entry underneath when it differs. */
static void renderTargetPop(TitleScene *scene)
{
    RenderTargetStack *stack = &scene->targets;
    s32 top = stack->entry[stack->depth];

    stack->depth = stack->depth - 1;
    if (stack->dirty != 0 || top != stack->entry[stack->depth]) {
        stack->apply();
        stack->dirty = 0;
    }
}

/* Draws the save/load screen's title caption and the shading overlay; always returns 0. */
u8 FUN_001ed9a0(void)
{
    SaveLoadUI *ui = g_saveLoadUI.ui;

    if (ui->closing == 0 && ui->visible != 0) {
        if (ui->entryLocked[g_saveLoadUI.entryIndex] == 0) {
            FUN_0029dfc0(0);
            FUN_002996d8(0);
            if (ui->titleShown != 0 && ui->titleBusy == 0) {
                SaveLoadUI *cursorUi = g_saveLoadUI.ui;
                gxResetColorQuadToWhite();
                renderTargetPush(g_titleScene, renderCtxPackPassFlags(1, 0));
                efctSetSpeed(1.0f);
                asdTMTexTableEntryAt(0x36, 0x56);
                TextureTableEntryIV *caption = asdTMTexTableEntryAt(0x36, 0x59);
                s32 parallax = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.305f);
                texDrawCompositeSprite(2, 0x36, 7, parallax, 0, 0xF1);
                s32 entry = cursorUi->hasCursor;
                s32 width = caption->placement->width;
                s32 height = caption->placement->height;
                const char *text = saveLoadUIRecords()[entry].caption;
                s32 length = libc_strlen(text);
                s32 half = (s32)((f32)(length * height) * 0.5f);
                f32 x = (f32)caption->x + (f32)(width - half) * 0.5f + (f32)parallax;
                textDrawString(x, (f32)caption->y, 0.0f, 4, 0.0f, -1, 1.0f, text);
                renderTargetPop(g_titleScene);
                efctSetSpeed(1.0f);
            }
        }
        if (ui->shaded != 0 && (ui->hasCursor == 0 || ui->cursorBusy == 0)) {
            renderTargetPush(g_titleScene, renderCtxPackPassFlags(1, 0));
            efctSetSpeed(ui->speed);
            f32 color[4];
            color[0] = 0.0f;
            color[1] = 0.0f;
            color[2] = 0.0f;
            color[3] = 1.0f;
            gxSetUniformQuadColors(color);
            screenDrawShadedRect(0, 0, 400, 240, 245);
            renderTargetPop(g_titleScene);
            efctSetSpeed(1.0f);
            gxResetColorQuadToWhite();
        }
    }
    return 0;
}

} /* extern "C" */
