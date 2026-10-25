/* NON_MATCHING: completion-byte signedness, cached display bases and state/animation register allocation differ. */
#include "ui/UiSpriteState.h"

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
void FUN_00163aa4(UiSpriteState *, f32);
void __aeabi_memcpy4(void *, const void *, u32);
void FUN_00203b40(BufferedRowsDisplay *, u32, u32, u32, u32, u32);

void FUN_002007f4(BufferedRowsWork *work)
{
    switch (work->state) {
    case 0:
        for (s32 index = 0; index < 5; ++index)
            FUN_00163aa4(&work->rows[index], 1.0f);
        if (!work->rows[4].animationFlags.completed)
            return;
        work->state = 1;
        break;
    case 1:
        break;
    case 2:
        for (s32 index = 0; index < 5; ++index)
            FUN_00163aa4(&work->rows[index], 1.0f);
        if (!work->rows[4].animationFlags.completed)
            return;
        work->state = 3;
        // fall through
    case 3:
        work->display.finished = 1;
        work->state = 0;
        return;
    default:
        return;
    }
    work->display.activeBuffer = !work->display.activeBuffer;
    __aeabi_memcpy4(work->display.primaryData,
                work->buffers[work->display.activeBuffer].primaryData, 200);
    __aeabi_memcpy4(work->display.secondaryData,
                work->buffers[work->display.activeBuffer].secondaryData, 100);
    FUN_00203b40(&work->display, work->buffers[work->display.activeBuffer].source, 5, 1, 0, 1);
    s16 animation = work->selected ? 0 : 2;
    for (s32 index = 0; index < 5; ++index)
        uiSpriteSelectAnim(&work->rows[index], animation);
    work->state = 2;
}
}
