/* NON_MATCHING: only controller and initial-count saved registers are swapped (r6/r7); instructions otherwise match. */
#include "camp/CampState.h"

extern "C" {
extern CampStateA *g_camp;
u16 FUN_001643b4(u32 table, u32 image);
s32 objectApplyIfUnblocked(const void *controller);
s32 uiSearchPrimary(const void *controller);

void FUN_002cb278(const void *controller, s32 mode)
{
    // The glyph arrays extend beyond the shared camp-state prefix.
    struct GlyphView {
        CampStateA prefix;
        u8 unk1B24[0x10];
        u16 header[3];
        u16 footer[2];
        u16 entries[1];
    };
    typedef char LayoutCheck[offsetof(GlyphView, header) == 0x1b34 &&
        offsetof(GlyphView, entries) == 0x1b3e ? 1 : -1];
    GlyphView *state = reinterpret_cast<GlyphView *>(g_camp);
    s32 count = objectApplyIfUnblocked(controller);
    s32 visible = uiSearchPrimary(controller);
    if (visible < count) {
        if (mode == 0) {
            state->header[0] = FUN_001643b4(20, 0x572);
            state->header[1] = FUN_001643b4(20, 0x570);
            state->header[2] = FUN_001643b4(20, 0x571);
        } else {
            state->header[0] = FUN_001643b4(20, 0x56d);
            state->header[1] = FUN_001643b4(20, 0x56e);
            state->header[2] = FUN_001643b4(20, 0x56f);
        }
    }
    if (mode == 0) {
        for (s32 index = 0; index < uiSearchPrimary(controller); ++index) {
            if (index >= objectApplyIfUnblocked(controller)) {
                break;
            }
            state->entries[index] = FUN_001643b4(20, index + 0x40f);
        }
        state->footer[0] = FUN_001643b4(20, 0x576);
        state->footer[1] = FUN_001643b4(20, 0x577);
    } else {
        for (s32 index = 0; index < uiSearchPrimary(controller); ++index) {
            if (index >= objectApplyIfUnblocked(controller)) {
                return;
            }
            state->entries[index] = FUN_001643b4(20, index + 0x40d);
        }
    }
}
}
