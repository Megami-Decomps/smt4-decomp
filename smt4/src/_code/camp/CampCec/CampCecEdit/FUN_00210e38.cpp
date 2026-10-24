/* NON_MATCHING: two instruction-order differences only: `add r7, r4, #256` (the visibility-flag base) is scheduled after rather than before `mov r8, #0`, and the render-stack push computes the entry address before the second add; 148 rows each. */
#include "camp/RenderCtx.h"

/* The edit screen's layout work (observed fields). */
struct CampCecEditWork {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ u32 headerImage;
    /* 0x00C */ u32 headerLayer;
    /* 0x010 */ u32 titleText;
    /* 0x014 */ u8 unk014[0x28];
    /* 0x03C */ u8 panel[0x14];
    /* 0x050 */ u8 titleArea[0x14];
    /* 0x064 */ u8 headerArea[0x14];
    /* 0x078 */ u8 cursorArea[0x14];
    /* 0x08C */ u8 list[4];
    /* 0x090 */ s32 listX;
    /* 0x094 */ s32 listY;
    /* 0x098 */ u8 unk098[0x14];
    /* 0x0AC */ u32 rowsTop;
    /* 0x0B0 */ u32 rowsLeft;
    /* 0x0B4 */ u8 unk0B4[0x58];
    /* 0x10C */ s32 cursorShown;
    /* 0x110 */ u8 unk110[0x18];
    /* 0x128 */ u8 headerVisible;
    /* 0x129 */ u8 unk129;
    /* 0x12A */ u8 unk12A;
    /* 0x12B */ u8 unk12B;
    /* 0x12C */ u32 rowHeight;
    /* 0x130 */ u32 listFlags;
    /* 0x134 */ u32 rowCount;
    /* 0x138 */ s32 firstRow;
    /* 0x13C */ u32 scrollTop;
    /* 0x140 */ u8 unk140;
    /* 0x141 */ u8 unk141;
    /* 0x142 */ u8 unk142[2];
    /* 0x144 */ u32 scrollHeight;
    /* 0x148 */ u32 columnWidth;
    /* 0x14C */ u32 scrollKnob;
};

/* The part of the work from 0x100 on that holds the visibility flags. */
struct CampCecEditVisibility {
    /* 0x00 */ u8 unk00[0x2A];
    /* 0x2A */ u8 listVisible;
    /* 0x2B */ u8 unk2B[0x16];
    /* 0x41 */ u8 scrollbarVisible;
};

/* An image placement record (offsets 8 and 10 hold the position). */
struct ImagePlacement {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
};

extern "C" {

extern CampCecEditWork *g_campCecEdit;
extern RenderCtx *g_titleScene;

ImagePlacement *FUN_002bf4f8(s32 group, s32 image);
u32 FUN_0025981c(void);
void uiDrawPanelWithValue(void *panel, s32 a, s32 b, u32 value, s32 c);
void uiDrawCenteredResourceText(u32 text, void *area, s32 a, s32 b);
void FUN_001eb874(u32 layer, u32 image, void *area, s32 x, s32 y, s32 flag);
void FUN_002e15f8(void *area, s32 x, s32 y);
void FUN_002c39a4(RenderCtx *context);
void FUN_002bed3c(void);
s32 FUN_002c5d80(u32 mode, u32 option);
void FUN_002bf380(s32 layer, s32 group, s32 image, s32 x, s32 y, s32 mode);
void uiDrawDirectoryRows(void *list, u32 left, u32 top, s32 firstRow, u32 rowCount, u32 columnWidth);
void FUN_00309ec8(void *list, s32 a, s32 b, u32 first, u32 second, u32 third, u32 rowHeight, u32 rowCount, s32 visibleRows);
void FUN_002ec2e0(u32 left, u32 top, u32 rowCount, u32 columnWidth, u32 scrollTop, u32 knob, u32 scrollHeight);
void FUN_002c198c(RenderCtx *context);
void FUN_002c18e4(RenderCtx *context);

/* Draws the camp CEC edit screen: the header panel and then the scrolling list with its rows. */
u32 FUN_00210e38(void)
{
    CampCecEditWork *work = g_campCecEdit;
    ImagePlacement *placement;
    s32 firstRow;

    FUN_002bf4f8(0x39, 0xCF);
    firstRow = work->firstRow;
    placement = FUN_002bf4f8(0x39, 0x97);
    CampCecEditVisibility *visibility = (CampCecEditVisibility *)((u8 *)work + 0x100);

    if (work->headerVisible != 0) {
        uiDrawPanelWithValue(work->panel, 0, 0, FUN_0025981c(), 1);
        uiDrawCenteredResourceText(work->titleText, work->titleArea, 0, 0);
        FUN_001eb874(work->headerLayer, work->headerImage, work->headerArea, placement->x, placement->y, 0);
        if (work->cursorShown == 1) {
            FUN_002e15f8(work->cursorArea, placement->x, placement->y);
        }
    }
    if (visibility->listVisible != 0) {
        s32 listX = work->listX;
        s32 listY = work->listY;

        FUN_002c39a4(g_titleScene);
        FUN_002bed3c();
        renderCtxPushA(g_titleScene, FUN_002c5d80(1, 0));
        FUN_002bf380(2, 0x39, 0x12, listX, listY, 0xB);
        uiDrawDirectoryRows(work->list, work->rowsLeft, work->rowsTop, work->firstRow, work->rowCount, work->columnWidth);
        if (firstRow < 11) {
            firstRow = 11;
        }
        FUN_00309ec8(work->list, 0, 0, work->listFlags & 1, (work->listFlags & 2) >> 1,
                     (work->listFlags & 4) >> 2, work->rowHeight, work->rowCount, firstRow);
        if (visibility->scrollbarVisible != 0) {
            FUN_002ec2e0(work->rowsLeft, work->rowsTop, work->rowCount, work->columnWidth,
                         work->scrollTop, work->scrollKnob, work->scrollHeight);
        }
        renderStackPop(&g_titleScene->stackA);
        FUN_002c198c(g_titleScene);
        FUN_002c18e4(g_titleScene);
    }
    return 0;
}

} /* extern "C" */
