/* NON_MATCHING: palette copy grouping, diagnostic-list base caching and quad argument registers differ. */
#include "camp/RenderCtx.h"
#include "status/StatusCamera.h"
#include <string.h>

struct DiagnosticQuadBounds {
    Vec3 first;
    Vec3 second;
    u8 unk18[8];
};
struct DiagnosticQuadList {
    DiagnosticQuadBounds bounds[144];
    s32 count;
};
extern "C" {
extern DiagnosticQuadList DAT_004be698;
extern const u32 DAT_0040490c[12];
extern RenderCtx *g_titleScene;
s32 FUN_002c5d80(u32 kind, u32 mode);
void FUN_002c1b64(RenderCtx *context, s32 mode);
void FUN_00296dc4(u32 first, u32 second, u32 third, u32 fourth,
                  Vec3 p0, Vec3 p1, Vec3 p2, Vec3 p3);

// Draw the queued diagnostic bounds in cycling translucent colors on a horizontal plane.
void FUN_002f484c(f32 depth)
{
    u32 palette[12];
    memcpy(palette, DAT_0040490c, sizeof(palette));
    if (DAT_004be698.count != 0) {
        renderCtxPushA(g_titleScene, FUN_002c5d80(5, 1));
        FUN_002c1b64(g_titleScene, 0);
        if (DAT_004be698.count > 0) {
            depth += 100.0f;
            for (s32 index = 0; index < DAT_004be698.count; ++index) {
                const DiagnosticQuadBounds *bounds = &DAT_004be698.bounds[index];
                Vec3 p0 = { bounds->first.x, depth, bounds->first.z };
                Vec3 p1 = { bounds->first.x, depth, bounds->second.z };
                Vec3 p2 = { bounds->second.x, depth, bounds->first.z };
                Vec3 p3 = { bounds->second.x, depth, bounds->second.z };
                u32 color = palette[index % 12] | 0x70;
                FUN_00296dc4(color, color, color, color, p0, p1, p2, p3);
            }
        }
        renderStackPop(&g_titleScene->stackA);
    }
}
}
