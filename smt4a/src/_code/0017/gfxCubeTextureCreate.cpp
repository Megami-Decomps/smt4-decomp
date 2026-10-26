#include "gfx/CubeTexture.h"
extern "C" {
void sysMemClear(void*, u32);
extern void* (*g_gfxAllocateCallback)(u32, u32, u32, u32);

// Allocates a cube texture with nearest filtering, repeated coordinates, and every face set to `parameter`.
GfxCubeTexture* gfxCubeTextureCreate(u32 parameter)
{
    GfxCubeTexture* texture;
    if (g_gfxAllocateCallback == NULL) {
        texture = NULL;
    } else {
        texture = (GfxCubeTexture*)g_gfxAllocateCallback(0x10000, 0x100, 0, sizeof(GfxCubeTexture));
        if (texture != NULL) {
            s32 i;

            sysMemClear(texture, sizeof(GfxCubeTexture));
            texture->filters[1] = 0x2600;
            texture->filters[0] = 0x2600;
            texture->wrapModes[0] = 0x2901;
            texture->wrapModes[1] = 0x2901;
            texture->unk24[1] = 0.0f;
            texture->unk24[0] = 0.0f;
            texture->unk2C = 0;
            texture->unk14 = -1000;
            texture->unk18[0] = texture->unk18[1] = texture->unk18[2] = 0.0f;
            for (i = 0; i < 6; i++) {
                texture->faces[i].parameter = parameter;
            }
        }
    }
    return texture;
}
}
