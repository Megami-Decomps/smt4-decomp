/* NON_MATCHING: 25 lines off: retail copies FUN_0039a1b8's three stack words (0x118, 0x120, 0x124) through integer
 * registers (ldr, ldm, stm), the build through VFP registers; the rest matches. */
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* unit-local: the part of the camp CEC edit work from 0x100 on that holds the detail settings (IV's draw reaches
 * its visibility flags through such a pointer too: CampCecEditVisibility in campCecEditDrawContents). */
struct CampCecEditDetail {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u8 visible;
    /* 0x15 */ u8 unk15[3];
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 listFlags;
    /* 0x20 */ s32 unk20;
    /* 0x24 */ s32 unk24;
    /* 0x28 */ s32 unk28;
    /* 0x2C */ u8 unk2C;
    /* 0x2D */ s8 detailShown;
    /* 0x2E */ u8 unk2E[2];
    /* 0x30 */ s32 unk30;
    /* 0x34 */ s32 unk34;
    /* 0x38 */ s8 unk38;
    /* 0x39 */ u8 unk39[0x13];
    /* 0x4C */ s32 mode;
    /* 0x50 */ s32 unk50;
};

/* unit-local: the camp CEC edit screen work as this draw reads it (IV's view is CampCecEditWork, another layout). */
struct CampCecEdit {
    /* 0x000 */ u8 unk000[0x38];
    /* 0x038 */ f32 alpha;          /* the sprite screen starts here (its first field is the opacity) */
    /* 0x03C */ s32 x;
    /* 0x040 */ s32 y;
    /* 0x044 */ u8 unk044[0x14];
    /* 0x058 */ u32 unk058;
    /* 0x05C */ u32 unk05C;
    /* 0x060 */ u8 unk060[0xA0];
    /* 0x100 */ CampCecEditDetail detail;
};

extern "C" {
extern CampCecEdit *g_campCecEdit;
void renderCtxSelectDisplayAreaForStereoMode(RenderCtxA *context);
s32 renderCtxPackPassFlags(u32 kind, bool enabled);
void texDrawCompositeSprite(u32 screen, u32 table, u32 frame, s32 x, s32 y, u32 priority);
void efctSetSpeed(f32 speed);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);
void gxResetColorQuadToWhite(void);
void uiSpawnSlotMarkers(void *screen, s32 a, s32 b, s32 c, s32 d, s32 e);
void uiDrawDirectoryRowsByKind(void *screen, u32 a, u32 b, s32 c, s32 d, s32 e, s32 f);
void FUN_0036cb0c(u32 a, u32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i);
void FUN_0039a1b8(void *screen, s32 a, s32 b, u32 c, u32 d, u32 e, u32 f, s32 g, s32 h, s32 i);
}

/* Draw the camp CEC edit screen: its frame sprite for the current mode, markers and detail widgets. */
extern "C" u32 FUN_002e1d1c(void)
{
    CampCecEdit *edit = g_campCecEdit;
    asdTMTexTableEntryAt(0x2E, 0xCF);
    s32 height = edit->detail.unk24;
    CampCecEditDetail *detail = &edit->detail;
    if (edit->detail.visible != 0) {
        s32 x = edit->x;
        s32 y = edit->y;
        efctSetSpeed(edit->alpha);
        renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
        gxResetColorQuadToWhite();
        renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, false));
        /* retail lays the mode 1 frame out last, after the other cases */
        switch (edit->detail.mode) {
        case 2:
            texDrawCompositeSprite(2, 0x2E, 0x16, x, y, 0xB);
            break;
        case 5:
            texDrawCompositeSprite(2, 0x2E, 0x17, x, y, 0xB);
            break;
        case 7:
            texDrawCompositeSprite(2, 0x2E, 0x12, x, y, 0xB);
            break;
        case 1:
            texDrawCompositeSprite(2, 0x2E, 0x15, x, y, 0xB);
            break;
        }
        s32 variant = 0;
        s32 extra = 0;
        switch (edit->detail.mode) {
        case 1:
            variant = 2;
            extra = edit->detail.unk34;
            break;
        case 2:
            variant = 1;
            break;
        case 5:
            variant = 3;
            extra = edit->detail.unk34;
            break;
        case 7:
            extra = edit->detail.unk34;
            break;
        }
        uiDrawDirectoryRowsByKind(&edit->alpha, edit->unk05C, edit->unk058, edit->detail.unk24, edit->detail.unk20, extra, variant);
        if (height < 11)
            height = 11;
        if (edit->detail.mode != 5 && edit->detail.mode != 1) {
            u32 flags = edit->detail.listFlags;
            FUN_0039a1b8(&edit->alpha, 0, 0, flags & 1, (flags & 2) >> 1, (flags & 4) >> 2, edit->detail.unk18, edit->detail.unk20,
                         height, edit->detail.unk24);
        }
        if (detail->detailShown != 0) {
            FUN_0036cb0c(edit->unk05C, edit->unk058, edit->detail.unk20, extra, edit->detail.unk28, detail->unk38, edit->detail.unk30,
                         variant, edit->detail.unk50);
        }
        uiSpawnSlotMarkers(&edit->alpha, edit->detail.unk24, edit->detail.unk20, extra, edit->detail.unk28, variant);
        renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
        skinObjectUpdateMatrices(g_renderCtx);
        renderCtxResetColorScale(g_renderCtx);
    }
    efctSetSpeed(1.0f);
    return 0;
}
