/* NON_MATCHING: color constant hoisting, VFP conversion registers, and background setup scheduling differ. */
#include "common.h"
#include <stddef.h>

struct MessageDebugEntry {
    u16 message;
    u8 unk02[2];
};
// Accessed prefix only: the variable-length message ID array follows at 0x3CC.
struct MessageDebugOverlayView {
    u32 flags;
    u8 unk004[0x354];
    u32 queueType;
    s32 count;
    s32 capacity;
    u8 unk364[0x68];
    const MessageDebugEntry *messages() const { return (const MessageDebugEntry *)((const u8 *)this + 0x3CC); }
};
typedef char MessageDebugOverlayOffsets[
    offsetof(MessageDebugOverlayView, queueType) == 0x358 &&
    offsetof(MessageDebugOverlayView, count) == 0x35C &&
    offsetof(MessageDebugOverlayView, capacity) == 0x360 && sizeof(MessageDebugOverlayView) == 0x3CC &&
    offsetof(MessageDebugEntry, message) == 0 && sizeof(MessageDebugEntry) == 4 ? 1 : -1];

extern "C" {
extern void *g_renderCtx;
extern const char DAT_00533528[];
extern const char DAT_00533560[];
void FUN_0016c4b8(void *context, u32 state);
void FUN_0014e314(u32 firstColor, u32 secondColor, u32 thirdColor, u32 fourthColor, f32 x, f32 y, f32 width, f32 height, f32 depth);
const char *FUN_00156850(u16 id, u32 variant);
s32 FUN_0031d174(const void *queue);
void FUN_00162790(u32 font, u32 color, const char *text, f32 x, f32 y, f32 depth, f32 scaleX, f32 scaleY);

// Show the bounded message list and its trailing diagnostic line over a translucent background.
void FUN_0046a108(MessageDebugOverlayView *overlay)
{
    if (!(overlay->flags & 0x20))
        return;
    FUN_0016c4b8(g_renderCtx, 0);
    FUN_0014e314(128, 128, 128, 128, 0.0f, 0.0f, 320.0f, 240.0f, 0.0f);
    s32 count = overlay->count;
    if (count > overlay->capacity)
        count = overlay->capacity;
    if (count == 0) {
        FUN_00162790(2, 0xFFFFFFFF, DAT_00533528, 8.0f, 8.0f, 0.0f, 1.0f, 1.0f);
        return;
    }
    for (s32 index = 0; index < count; ++index) {
        const char *text = FUN_00156850(overlay->messages()[index].message, 0);
        FUN_00162790(2, 0xFFFFFFFF, text, 24.0f, (f32)(index * 14 + 8), 0.0f, 1.0f, 1.0f);
    }
    s32 nextLine = FUN_0031d174(&overlay->queueType);
    FUN_00162790(2, 0xFFFFFFFF, DAT_00533560, 8.0f, (f32)(nextLine * 14 + 8), 0.0f, 1.0f, 1.0f);
}
}
