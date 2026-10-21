#include "shard/JobWork.h"

struct SurfaceBlit {
    f32 width;  // 0x00
    f32 height; // 0x04
    u8 unk08[8]; // 0x08
    JobSurface* surface; // 0x10
};

extern "C" {
extern void* g_titleScene;
void FUN_002c1b64(void* context, JobSurface* surface);
void FUN_002b7d30(f32 x, f32 y, f32 width, f32 height, f32 u0, f32 v0,
                  f32 u1, f32 v1, f32 depth);

// Binds the source surface and draws its requested extent with scaled texture coordinates.
void asdGxBlitScaledSurface(SurfaceBlit* blit)
{
    FUN_002c1b64(g_titleScene, blit->surface);
    FUN_002b7d30(0.0f, 0.0f, blit->width, blit->height, 0.0f, 0.0f,
                  blit->width / blit->surface->width, blit->height / blit->surface->height, 0.5f);
}
}
