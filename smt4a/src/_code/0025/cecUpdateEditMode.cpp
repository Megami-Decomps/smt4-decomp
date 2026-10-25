#include "shard/Shard0032.h"

struct CecEditInput {
    u8 prefix[0x22];
    u8 selection;
};
struct CecEditLinkHolder {
    u8 prefix[0x1C];
    u32 valueHandle;
};

extern "C" {
extern StateAtF4 *g_campCecEdit;
void linkHolderApplyFlag(u32 holder, s32 flags);
f32 uiGetFloatValue(u32 holder);
void gfxAdvanceTextureRequestQueue(u32 handle, s32 selection);
void slotTargetApplyActiveValue(u32 handle, f32 value);

u32 cecUpdateEditMode(void)
{
    /* The image padding starts at odd offset 0x25, so a word overlay would shift it. */
    struct ModeResetView {
        u8 prefix[0x1C];
        u32 first;
        u8 firstFlag;
        u8 padding21[0xF];
        u32 second;
        u8 secondFlag;
    };
    StateAtF4 *edit = g_campCecEdit;
    s32 (*callback)(StateAtF4 *) = edit->dispatch.callbacks[edit->mode];
    if (callback) {
        s32 result = callback(edit);
        if (result == 3) {
            if (edit->phase != -1) {
                edit->dispatch.previousMode = edit->mode;
                edit->mode = edit->phase;
                edit->phase = -1;
                if (edit->mode == 9) {
                    ModeResetView *reset = reinterpret_cast<ModeResetView *>(edit);
                    reset->first = 0;
                    reset->firstFlag = 0;
                    reset->second = 0;
                    reset->secondFlag = 0;
                }
            }
            edit->frameCounter = 0;
        } else if (result == 1) {
            linkHolderApplyFlag(edit->unk04, 0);
            edit->unk10F = 1;
        }
    }
    const CecEditInput *input = reinterpret_cast<const CecEditInput *>(edit->unk08);
    gfxAdvanceTextureRequestQueue(reinterpret_cast<u32>(edit->unk0C), input->selection);
    if (edit->unk04) {
        f32 value = uiGetFloatValue(edit->unk04);
        CecEditLinkHolder *holder = reinterpret_cast<CecEditLinkHolder *>(edit->unk04);
        slotTargetApplyActiveValue(holder->valueHandle, value);
    }
    ++edit->frameCounter;
    return 0;
}
}
