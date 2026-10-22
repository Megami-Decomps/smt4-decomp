/* NON_MATCHING: preset selection and command-argument setup use different saved registers. */
/* Binds the requested render preset and its active color buffer unless rendering is suspended. */
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" {
extern u8 g_asdGxPresets;
void FUN_0017d294(void);
void FUN_0017ce88(u32 location, u32 handle, u32 auxiliary, u32 target, u32 address,
    u32 width, u32 height, u32 parameter, u32 memoryMode, u32 zero, u32 alignment);

void FUN_00145084(u32 kind)
{
    struct Surface {
        u32 unk00[5];
        u32 selected;
        u32 width;
        u32 height;
        u32 addresses[3];
    };
    /* The memory mode trails the shared texture prefix; do not enlarge that type. */
    struct TextureRecord {
        AsdGxTexture texture;
        u32 memoryMode;
    };
    struct RenderPresetView {
        Surface surfaces[3];
        u8 unk084[4];
        TextureRecord textures[3];
        u8 unk13C[0xB8];
        u32 suspended;
        u32 unk1F8;
        u32 parameter;
        u8 active[2];
    };
    RenderPresetView *presets = (RenderPresetView *)&g_asdGxPresets;
    if (presets->suspended != 1) {
        TextureRecord *texture = NULL;
        Surface *surface = NULL;
        u32 activeIndex = 0;
        if (kind == 0x400) {
            texture = &presets->textures[0];
            surface = &presets->surfaces[0];
        } else if (kind == 0x401) {
            activeIndex = 1;
            texture = &presets->textures[2];
            surface = &presets->surfaces[2];
        } else if (kind == 0x410) {
            texture = &presets->textures[1];
            surface = &presets->surfaces[1];
        }
        u32 memoryMode = texture->memoryMode;
        u32 selected = surface->selected;
        if (!presets->active[activeIndex]) {
            memoryMode = 0x500;
        }
        FUN_0017d294();
        FUN_0017ce88(texture->texture.location, texture->texture.handle,
            texture->texture.unk34, texture->texture.target, surface->addresses[selected],
            surface->width, surface->height, presets->parameter, memoryMode, 0, 8);
    }
}
}
