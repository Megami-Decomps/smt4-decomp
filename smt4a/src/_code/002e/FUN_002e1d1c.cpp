/* NON_MATCHING: retail copies the sprite y word through a VFP register (s16) and keeps edit+0x100 in r8, the build uses integer registers and a different saved set; draw sequence and arguments are the same. */
#include "camp/RenderCtx.h"

/* The camp CEC edit screen work (accessed fields). */
struct CampCecEdit {
    u8 unk00[0x38];
    f32 alpha;              // 0x38
    s32 x;                  // 0x3C
    s32 y;                  // 0x40
    u8 unk44[0x14];
    u32 unk58;
    u32 unk5C;
    u8 unk60[0xB4];
    u32 style;              // 0x114
};

extern "C" {
extern CampCecEdit *g_campCecEdit;
extern RenderCtxA *g_renderCtx;
void FUN_00157558(RenderCtxA *context);
s32 FUN_001692ac(u32 kind, bool enabled);
void FUN_00164b5c(u32 screen, u32 table, u32 frame, s32 x, s32 y, u32 priority);
void efctSetSpeed(f32 speed);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);
void asdTMTexTableEntryAt(u32 table, u32 frame);
void FUN_00183bb0(void);
void uiSpawnSlotMarkers(void *screen, s32 a, s32 b, s32 c, s32 d, s32 e);
void FUN_003426c0(void *screen, u32 a, u32 b, s32 c, s32 d, s32 e, s32 f);
void FUN_0036cb0c(u32 a, u32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i);
void FUN_0039a1b8(void *screen, s32 a, s32 b, u32 c, u32 d, u32 e, u32 f, s32 g, s32 h, s32 i);
}

#define CEC_AT(edit, type, offset) (*reinterpret_cast<type *>(reinterpret_cast<u8 *>(edit) + (offset)))

/* Draw the camp CEC edit screen: its frame sprite for the current mode, markers and detail widgets. */
extern "C" u32 FUN_002e1d1c(void)
{
    CampCecEdit *edit = g_campCecEdit;
    asdTMTexTableEntryAt(0x2E, 0xCF);
    s32 height = CEC_AT(edit, s32, 0x124);
    if (CEC_AT(edit, u8, 0x114) == 0) {
        efctSetSpeed(1.0f);
        return 0;
    }
    s32 x = edit->x;
    s32 y = edit->y;
    efctSetSpeed(edit->alpha);
    FUN_00157558(g_renderCtx);
    FUN_00183bb0();
    renderCtxPushA(g_renderCtx, FUN_001692ac(1, false));
    s32 mode = CEC_AT(edit, s32, 0x14C);
    if (mode == 1)
        FUN_00164b5c(2, 0x2E, 0x15, x, y, 0xB);
    else if (mode == 2)
        FUN_00164b5c(2, 0x2E, 0x16, x, y, 0xB);
    else if (mode == 5)
        FUN_00164b5c(2, 0x2E, 0x17, x, y, 0xB);
    else if (mode == 7)
        FUN_00164b5c(2, 0x2E, 0x12, x, y, 0xB);
    mode = CEC_AT(edit, s32, 0x14C);
    s32 variant = 0;
    s32 extra = 0;
    if (mode == 1) {
        variant = 2;
        extra = CEC_AT(edit, s32, 0x134);
    } else if (mode == 2) {
        variant = 1;
    } else {
        if (mode == 5)
            variant = 3;
        if (mode == 5 || mode == 7)
            extra = CEC_AT(edit, s32, 0x134);
    }
    FUN_003426c0(reinterpret_cast<u8 *>(edit) + 0x38, edit->unk5C, edit->unk58, CEC_AT(edit, s32, 0x124),
                 CEC_AT(edit, s32, 0x120), extra, variant);
    if (height < 11)
        height = 11;
    if (CEC_AT(edit, s32, 0x14C) != 5 && CEC_AT(edit, s32, 0x14C) != 1) {
        u32 flags = CEC_AT(edit, u32, 0x11C);
        FUN_0039a1b8(reinterpret_cast<u8 *>(edit) + 0x38, 0, 0, flags & 1, (flags & 2) >> 1, (flags & 4) >> 2,
                     CEC_AT(edit, u32, 0x118), CEC_AT(edit, s32, 0x120), height, CEC_AT(edit, s32, 0x124));
    }
    if (CEC_AT(edit, u8, 0x12D) != 0) {
        FUN_0036cb0c(edit->unk5C, edit->unk58, CEC_AT(edit, s32, 0x120), extra, CEC_AT(edit, s32, 0x128),
                     CEC_AT(edit, s8, 0x138), CEC_AT(edit, s32, 0x130), variant, CEC_AT(edit, s32, 0x150));
    }
    uiSpawnSlotMarkers(reinterpret_cast<u8 *>(edit) + 0x38, CEC_AT(edit, s32, 0x124), CEC_AT(edit, s32, 0x120), extra,
                       CEC_AT(edit, s32, 0x128), variant);
    renderStackPop(&g_renderCtx->stackA);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    efctSetSpeed(1.0f);
    return 0;
}
