/* NON_MATCHING: graphics preset branches and stack argument scheduling differ from retail. */
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" {
extern AsdGxPresets g_asdGxPresets;
void FUN_0017ce88(u32 handle, u32 first, u32 second, u32 format, u32 value,
                  u32 commandFirst, u32 commandSecond, u32 state, u32 mode, u32 flags, u32 size);
}

/* Emit a draw command using the preset selected by its target and alternate-pass flag. */
extern "C" void FUN_00154ca4(const AsdGxDrawCommand *command, s32 alternate)
{
    /* The draw-state suffix extends beyond the shared fixed preset-table prefix. */
    struct RenderPassView {
        u32 format;
        u32 unk04;
        u32 handle;
        u8 unk0C[0x24];
        u32 first;
        u32 second;
        u32 mode;
    };
    struct DrawPresetStateView {
        u8 unk000[0x84];
        s32 usePrimary;
        RenderPassView passes[3];
        u8 unk13C[0xC0];
        u32 state;
        u8 enabled[2];
    };
    DrawPresetStateView *presets = reinterpret_cast<DrawPresetStateView *>(&g_asdGxPresets);
    const RenderPassView *pass = NULL;
    s32 bank = 0;
    if (command->target != 0x400) {
        if (command->target == 0x401) {
            bank = 1;
            pass = presets->usePrimary ? &presets->passes[0] : &presets->passes[2];
        } else if (command->target == 0x410) {
            pass = alternate ? &presets->passes[1] : &presets->passes[0];
        }
    } else {
        pass = &presets->passes[0];
    }
    u32 mode = pass->mode;
    if (!presets->enabled[bank]) {
        mode = 0x500;
    }
    FUN_0017ce88(pass->handle, pass->first, pass->second, pass->format,
                 command->values[command->index], command->first, command->second,
                 presets->state, mode, 0, 8);
}
