/* NON_MATCHING: counter clamps are folded into branched stores and the widget's global pointer reload is eliminated; 103 vs 102 instructions. */
#include "ui/MessageMain.h"

extern "C" {
extern MessageGlobals g_messageMain;
void FUN_002bee58(void *widget, u32 animation);
void titleOverlaySetModeAnimation(void *overlay, u32 mode);
}
namespace {
inline void commitCounter(MessagePanel *panel, s32 maximum)
{
    panel->unk6C = panel->unk78 + panel->unk70;
    panel->unk64 = 10;
    panel->unk74 = 0;
    panel->unk78 = panel->unk6C;
    if (static_cast<s32>(panel->unk6C) <= 0)
        panel->unk6C = 0;
    if (static_cast<s32>(panel->unk6C) > maximum)
        panel->unk6C = maximum;
    panel->unk7C = 0;
}
inline void closeOverlay(void *overlay)
{
    MessageObject *object = static_cast<MessageObject *>(overlay);
    if (object && object->close.state) {
        titleOverlaySetModeAnimation(object, object->close.mode);
        object->close.state = 3;
        object->close.pending = 0;
    }
}
}
extern "C" {
// Finish an active numeric counter and advance its widget or close both message overlays.
u32 FUN_0029cc44(s32 closeMessage)
{
    MessagePanel *panel = g_messageMain.banner;
    if (panel->unk7C == 3) {
        if (panel->unk7D)
            commitCounter(panel, 999999999);
        if (panel->unk7E)
            commitCounter(panel, 99);
    }
    void *widget = g_messageMain.banner->widget754;
    if (closeMessage && panel->mode == 11 && panel->state) {
        if (panel->unk7C == 0 || panel->unk7C == 2) {
            panel->unk7C = 4;
            FUN_002bee58(widget, panel->unk7F ? 2 : 7);
            closeOverlay(g_messageMain.state);
            closeOverlay(panel);
        }
        return 0;
    }
    if (panel->unk7C == 0 || panel->unk7C == 2 || panel->unk7C == 1) {
        panel->unk7C = 4;
        FUN_002bee58(widget, panel->unk7F ? 2 : 7);
    }
    return 1;
}
}
