/* NON_MATCHING: 4 lines, one instruction order. The portrait row's textDrawFaded call sets x (mov r1, #118)
 * before the scale and the fade in retail (r0, r1, s0, r3, then y's vmov r2), after them here (r0, s0, r3, r1).
 * No parameter order of textDrawFaded gives retail's: scale before fade gives r0, r1, r3, s0 here and loses three
 * other callers. Tried without effect: s16/u8/u32 argument types, block locals for x, the fade, the scale or the
 * text object, default arguments; y converted into a local first is worse (8 lines), and x or the scale as a
 * function-level local takes a register. The buffers are cleared through the unaligned entry in retail: memset
 * on the arrays calls the word-aligned one.
 * The prologue (g_bustupViewer's address loaded before the first clear's size) needs <stdio.h>'s sprintf: with
 * __2sprintf called as a plain variadic function the two are swapped. */
#include <stdio.h>
#include "test/BustupViewerState.h"
#include "text/TextDraw.h"

extern "C" {

char *libc_strcpy(char *destination, const char *source); // declcheck: local (the shared header keeps the decompiler's word-pointer view)
void rt_aeabi_memclr(void *memory, u32 size);

extern BustupViewerState *g_bustupViewer;
/* The position ids the POSITION row steps through in 3D mode (26) and in 3D_2 mode (30); from 100 on a
 * position is behind the character. */
extern s32 g_bustupViewerPositions3d[];
extern s32 g_bustupViewerPositions3d2[];
/* The positions' names. */
extern const char *g_bustupViewerPositionNames[];

/* The name of a position id: "FRONT_" or "BACK_" and the position's own name. Inlined in retail: it builds the
 * name in a static buffer of its own, which the caller then copies out. */
static __inline const char *bustupViewerPositionName(s32 position)
{
    static char name[128];

    rt_aeabi_memclr(name, sizeof(name));
    bool back = position >= 100;
    if (back) {
        position -= 100;
    }
    if (back) {
        sprintf(name, "BACK_%s", g_bustupViewerPositionNames[position]);
    } else {
        sprintf(name, "FRONT_%s", g_bustupViewerPositionNames[position]);
    }
    return name;
}

/* Whether the menu leaves `row` out in `mode`. Inlined in retail: every row reloads g_bustupViewer for it,
 * though only the DOT rows read it, and the 3D_2 and SWIN cases work on a copy of `row`. */
static __inline bool bustupViewerRowIsHidden(u32 mode, s32 row)
{
    BustupViewerState *viewer = g_bustupViewer;

    switch (mode) {
    case BUSTUP_VIEWER_MODE_2D:
        switch (row) {
        case BUSTUP_VIEWER_ROW_SELECTION:
        case BUSTUP_VIEWER_ROW_KIND:
        case BUSTUP_VIEWER_ROW_PORTRAIT:
        case BUSTUP_VIEWER_ROW_SUB_WINDOW:
        case BUSTUP_VIEWER_ROW_PARAM_A:
        case BUSTUP_VIEWER_ROW_PARAM_B:
        case BUSTUP_VIEWER_ROW_PARTNER:
        case BUSTUP_VIEWER_ROW_PARTNER_VARIANT:
        case BUSTUP_VIEWER_ROW_PARTNER_PARAM_A:
        case BUSTUP_VIEWER_ROW_PARTNER_PARAM_B:
        case BUSTUP_VIEWER_ROW_POSITION:
        case BUSTUP_VIEWER_ROW_SCALE:
            return true;
        }
        break;
    case BUSTUP_VIEWER_MODE_3D:
        switch (row) {
        case BUSTUP_VIEWER_ROW_SELECTION:
        case BUSTUP_VIEWER_ROW_KIND:
        case BUSTUP_VIEWER_ROW_PORTRAIT:
        case BUSTUP_VIEWER_ROW_SUB_WINDOW:
        case BUSTUP_VIEWER_ROW_PARTNER:
        case BUSTUP_VIEWER_ROW_PARTNER_VARIANT:
        case BUSTUP_VIEWER_ROW_PARTNER_PARAM_A:
        case BUSTUP_VIEWER_ROW_PARTNER_PARAM_B:
        case BUSTUP_VIEWER_ROW_SCALE:
            return true;
        }
        break;
    case BUSTUP_VIEWER_MODE_3D_2:
        switch (row) {
        case BUSTUP_VIEWER_ROW_SELECTION:
        case BUSTUP_VIEWER_ROW_KIND:
        case BUSTUP_VIEWER_ROW_PORTRAIT:
        case BUSTUP_VIEWER_ROW_SUB_WINDOW:
        case BUSTUP_VIEWER_ROW_SCALE:
            return true;
        }
        break;
    case BUSTUP_VIEWER_MODE_DOT:
        switch (row) {
        case BUSTUP_VIEWER_ROW_CHARACTER:
            if (!viewer->isNpc[viewer->selection]) {
                return true;
            }
            break;
        case BUSTUP_VIEWER_ROW_PORTRAIT:
            if (viewer->isNpc[viewer->selection]) {
                return true;
            }
            break;
        case BUSTUP_VIEWER_ROW_VARIANT:
        case BUSTUP_VIEWER_ROW_SUB_WINDOW:
        case BUSTUP_VIEWER_ROW_PARTNER:
        case BUSTUP_VIEWER_ROW_PARTNER_VARIANT:
        case BUSTUP_VIEWER_ROW_PARTNER_PARAM_A:
        case BUSTUP_VIEWER_ROW_PARTNER_PARAM_B:
        case BUSTUP_VIEWER_ROW_POSITION:
            return true;
        }
        break;
    case BUSTUP_VIEWER_MODE_SWIN:
        switch (row) {
        case BUSTUP_VIEWER_ROW_MODE:
        case BUSTUP_VIEWER_ROW_BACKGROUND:
        case BUSTUP_VIEWER_ROW_SUB_WINDOW:
            break;
        default:
            return true;
        }
        break;
    }
    return false;
}

/* The viewer's draw task: formats the value of each menu row the current mode shows, sixteen dots apart, the
 * highlighted row in yellow. Only the DOT mode's portrait row is drawn here (the viewer's own text object);
 * the release build formats the other rows and draws nothing. */
s32 bustupViewerDraw(u32 handle)
{
    BustupViewerState *viewer = g_bustupViewer;
    char text[256];
    char name[256];

    rt_aeabi_memclr(text, sizeof(text));
    rt_aeabi_memclr(name, sizeof(name));
    f32 lineHeight = 16.0f;
    f32 y = 17.0f;
    for (s32 row = 0; row < BUSTUP_VIEWER_ROW_COUNT; row++) {
        if (bustupViewerRowIsHidden(viewer->mode, row)) {
            continue;
        }

        u32 color;
        if (viewer->menuRow == row) {
            color = 0xffff00ff;
        } else {
            color = 0xffffffff;
        }

        switch (row) {
        case BUSTUP_VIEWER_ROW_MODE:
            if (viewer->mode == BUSTUP_VIEWER_MODE_2D) {
                sprintf(text, "<2D>");
            } else if (viewer->mode == BUSTUP_VIEWER_MODE_3D) {
                sprintf(text, "<3D>");
            } else if (viewer->mode == BUSTUP_VIEWER_MODE_3D_2) {
                sprintf(text, "<3D_2>");
            } else if (viewer->mode == BUSTUP_VIEWER_MODE_DOT) {
                sprintf(text, "<DOT>");
            } else {
                sprintf(text, "<SWIN>");
            }
            break;
        case BUSTUP_VIEWER_ROW_BACKGROUND:
            if (viewer->backgroundId == 0) {
                sprintf(text, "<None>");
            } else if (viewer->mode == BUSTUP_VIEWER_MODE_2D || viewer->mode == BUSTUP_VIEWER_MODE_DOT ||
                       viewer->mode == BUSTUP_VIEWER_MODE_SWIN) {
                sprintf(text, "<BG_2D_%03d>", viewer->backgroundId);
            } else {
                sprintf(text, "<BG_3D_%03d>", viewer->backgroundId);
            }
            break;
        case BUSTUP_VIEWER_ROW_SELECTION:
            sprintf(text, "<%d>", viewer->selection);
            break;
        case BUSTUP_VIEWER_ROW_KIND:
            if (viewer->isNpc[viewer->selection]) {
                sprintf(text, "<NPC>");
            } else {
                sprintf(text, "<ENEMY>");
            }
            break;
        case BUSTUP_VIEWER_ROW_CHARACTER:
        case BUSTUP_VIEWER_ROW_PARTNER: {
            s32 id = viewer->characterId;
            if (viewer->mode == BUSTUP_VIEWER_MODE_DOT) {
                id = viewer->portraitIds[viewer->selection];
            }
            if (row == BUSTUP_VIEWER_ROW_PARTNER) {
                id = viewer->partnerId;
            }
            if (id == 0) {
                sprintf(text, "<None>");
            } else if (id > 300) {
                sprintf(text, "<CHARID_B%03d>", id - 300);
            } else if (id >= 200) {
                sprintf(text, "<CHARID_BOSS_%03d>", id - 199);
            } else {
                sprintf(text, "<CHARID_%03d>", id);
            }
            break;
        }
        case BUSTUP_VIEWER_ROW_PORTRAIT:
            sprintf(text, "<%03d>", viewer->portraitIds[viewer->selection]);
            uiObjectSetColorRgb(viewer->text, color);
            textDrawFaded((const void *)viewer->text, 118, (s32)y, 101, 1.0f);
            break;
        case BUSTUP_VIEWER_ROW_VARIANT:
        case BUSTUP_VIEWER_ROW_PARTNER_VARIANT: {
            u32 value = viewer->characterVariant;
            if (row == BUSTUP_VIEWER_ROW_PARTNER_VARIANT) {
                value = viewer->partnerVariant;
            }
            sprintf(text, "<%d>", value);
            break;
        }
        case BUSTUP_VIEWER_ROW_SUB_WINDOW:
            sprintf(text, "<%d>", viewer->subWindowId);
            break;
        case BUSTUP_VIEWER_ROW_PARAM_A:
        case BUSTUP_VIEWER_ROW_PARAM_B:
        case BUSTUP_VIEWER_ROW_PARTNER_PARAM_A:
        case BUSTUP_VIEWER_ROW_PARTNER_PARAM_B: {
            u32 value = 0;
            if (row == BUSTUP_VIEWER_ROW_PARAM_A) {
                if (viewer->mode == BUSTUP_VIEWER_MODE_DOT) {
                    value = viewer->paramA[viewer->selection];
                } else {
                    value = viewer->characterParamA;
                }
            } else if (row == BUSTUP_VIEWER_ROW_PARAM_B) {
                if (viewer->mode == BUSTUP_VIEWER_MODE_DOT) {
                    value = viewer->paramB[viewer->selection];
                } else {
                    value = viewer->characterParamB;
                }
            } else if (row == BUSTUP_VIEWER_ROW_PARTNER_PARAM_A) {
                value = viewer->partnerParamA;
            } else if (row == BUSTUP_VIEWER_ROW_PARTNER_PARAM_B) {
                value = viewer->partnerParamB;
            }
            sprintf(text, "<%d>", value);
            break;
        }
        case BUSTUP_VIEWER_ROW_POSITION: {
            /* The position has a caption line of its own above it. */
            y += lineHeight;
            u32 index = viewer->positionIndex;
            s32 position;
            if (viewer->mode == BUSTUP_VIEWER_MODE_3D) {
                position = g_bustupViewerPositions3d[index];
            } else if (viewer->mode == BUSTUP_VIEWER_MODE_3D_2) {
                position = g_bustupViewerPositions3d2[index];
            } else {
                position = 0;
            }
            libc_strcpy(name, bustupViewerPositionName(position));
            sprintf(text, "<%s>", name);
            break;
        }
        case BUSTUP_VIEWER_ROW_SCALE:
            sprintf(text, "<%d%%>", (s32)(viewer->scale[viewer->selection] * 100.0f));
            break;
        }
        y += lineHeight;
    }
    return 0;
}

} /* extern "C" */
