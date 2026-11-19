/* NON_MATCHING: only the loop's textDrawString argument schedule differs: retail converts the line's y in s1 and
 * sets x (s0 = 24.0f) early; this build converts through s0 and sets x last. */
#include "common.h"
#include "gfx/ColoredQuad.h"
#include <stddef.h>
#include "text/TextDraw.h"
#include "camp/RenderCtxA.h"

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
extern const char DAT_00533528[];
extern const char DAT_00533560[];
const char *FUN_00156850(u16 id, u32 variant);
s32 FUN_0031d174(const void *queue);

// Show the bounded message list and its trailing diagnostic line over a translucent background.
void FUN_0046a108(MessageDebugOverlayView *overlay)
{
    if (!(overlay->flags & 0x20))
        return;
    renderCtxSelectTexture(g_renderCtx, 0);
    gxSubmitDrawZeroExtraParams(0.0f, 0.0f, 320.0f, 240.0f, 128, 128, 128, 0.0f, 128);
    u32 color = 0xFFFFFFFF;
    s32 count = overlay->count;
    if (count > overlay->capacity)
        count = overlay->capacity;
    if (count == 0) {
        textDrawString(8.0f, 8.0f, 0.0f, 2, 1.0f, color, 1.0f, DAT_00533528);
        return;
    }
    for (s32 index = 0; index < count; ++index) {
        const char *text = FUN_00156850(overlay->messages()[index].message, 0);
        textDrawString(24.0f, (f32)(index * 14 + 8), 0.0f, 2, 1.0f, color, 1.0f, text);
    }
    s32 nextLine = FUN_0031d174(&overlay->queueType);
    textDrawString(8.0f, (f32)(nextLine * 14 + 8), 0.0f, 2, 1.0f, color, 1.0f, DAT_00533560);
}
}
