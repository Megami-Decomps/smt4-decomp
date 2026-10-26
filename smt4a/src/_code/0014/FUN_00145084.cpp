/* Binds the requested render preset and its active color buffer unless rendering is suspended. */
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

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

extern "C" {
extern RenderPresetView g_asdGxPresets;
void FUN_0017d294(void);
void FUN_0017ce88(u32 location, u32 handle, u32 auxiliary, u32 target, u32 address,
    u32 width, u32 height, u32 parameter, u32 memoryMode, u32 zero, u32 alignment);

void FUN_00145084(u32 kind)
{
    TextureRecord *texture = NULL;
    Surface *surface = NULL;
    u32 activeIndex = 0;
    if (g_asdGxPresets.suspended != 1) {
        switch (kind) {
        case 0x400:
            surface = &g_asdGxPresets.surfaces[0];
            texture = &g_asdGxPresets.textures[0];
            break;
        case 0x401:
            activeIndex = 1;
            surface = &g_asdGxPresets.surfaces[2];
            texture = &g_asdGxPresets.textures[2];
            break;
        case 0x410:
            surface = &g_asdGxPresets.surfaces[1];
            texture = &g_asdGxPresets.textures[1];
            break;
        }
        u32 memoryMode = texture->memoryMode;
        u32 selected = surface->selected;
        if (!g_asdGxPresets.active[activeIndex]) {
            memoryMode = 0x500;
        }
        FUN_0017d294();
        FUN_0017ce88(texture->texture.location, texture->texture.handle,
            texture->texture.unk34, texture->texture.unk00, surface->addresses[selected],
            surface->width, surface->height, g_asdGxPresets.parameter, memoryMode, 0, 8);
    }
}
}
