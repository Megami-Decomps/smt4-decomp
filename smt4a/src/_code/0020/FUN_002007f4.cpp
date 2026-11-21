/* NON_MATCHING: retail keeps 1 in r7 and 0 in r6 (this build swaps them) and materialises the 1 for display.finished separately in state 3. */
#include "ui/UiSpriteApi.h"

struct BufferedRowsDisplay {
    u8 unk00[0x68];
    u32 finished;
    u8 unk6c[0x14];
    u8 primaryData[200];
    u8 secondaryData[100];
    u8 unk1ac;
    u8 activeBuffer;
    u8 unk1ae[2];
};
struct BufferedRowsPayload {
    u32 source;
    u8 primaryData[200];
    u8 secondaryData[100];
};
struct BufferedRowsWork {
    u8 unk000[0x20];
    UiSpriteState rows[5];
    BufferedRowsDisplay display;
    BufferedRowsPayload buffers[2];
    u32 state;
    u8 selected;
};
typedef char BufferedRowsOffsets[
    offsetof(BufferedRowsWork, display) == 0x2dc &&
    offsetof(BufferedRowsWork, display.finished) == 0x344 &&
    offsetof(BufferedRowsWork, display.primaryData) == 0x35c &&
    offsetof(BufferedRowsWork, display.secondaryData) == 0x424 &&
    offsetof(BufferedRowsWork, display.activeBuffer) == 0x489 &&
    offsetof(BufferedRowsWork, buffers) == 0x48c &&
    offsetof(BufferedRowsWork, state) == 0x6ec &&
    offsetof(BufferedRowsWork, selected) == 0x6f0 &&
    sizeof(BufferedRowsPayload) == 0x130 ? 1 : -1];
extern "C" {
void __aeabi_memcpy4(void *, const void *, u32);
void gridNavigationConfigure(BufferedRowsDisplay *, u32, u32, u32, u32, u32);

/* Steps the buffered rows: animates them in, swaps the display to the other buffer and replays the rows,
 * then marks the display finished. */
void FUN_002007f4(BufferedRowsWork *work)
{
    switch (work->state) {
    case 0:
        for (s32 index = 0; index < 5; ++index)
            uiSpriteAdvanceAnimation(&work->rows[index], 1.0f);
        if (!uiSpriteGetCompletionState(&work->rows[4]))
            return;
        work->state = 1;
        break;
    case 1:
        break;
    case 2:
        for (s32 index = 0; index < 5; ++index)
            uiSpriteAdvanceAnimation(&work->rows[index], 1.0f);
        if (!uiSpriteGetCompletionState(&work->rows[4]))
            return;
        work->state = 3;
        /* fall through */
    case 3:
        work->display.finished = 1;
        work->state = 0;
        return;
    default:
        return;
    }
    if (work->display.activeBuffer == 0)
        work->display.activeBuffer = 1;
    else
        work->display.activeBuffer = 0;
    __aeabi_memcpy4(work->display.primaryData,
                work->buffers[work->display.activeBuffer].primaryData, 200);
    __aeabi_memcpy4(work->display.secondaryData,
                work->buffers[work->display.activeBuffer].secondaryData, 100);
    gridNavigationConfigure(&work->display, work->buffers[work->display.activeBuffer].source, 5, 1, 0, 1);
    s32 animation = 0;
    if (!work->selected)
        animation = 2;
    for (s32 index = 0; index < 5; ++index)
        uiSpriteSelectAnim(&work->rows[index], animation);
    work->state = 2;
}
}
