/* NON_MATCHING: packed-color initialization and overlay-alpha VFP scheduling differ. */
#include "shard/W6_W6Match2_TitleCommand.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern void *g_titleScene;
u32 asdTMTexTableGetNodeTexture(u32 group, u32 resource);
void FUN_002c1b64(void *context, u32 resource);
void FUN_002c1ac8(const f32 *first, const f32 *second, const f32 *third, const f32 *fourth,
                  f32 x, f32 y, f32 width, f32 height, f32 firstDepth, f32 secondDepth,
                  f32 firstScale, f32 secondScale, f32 rotation);
void FUN_002c198c(void *context);
void FUN_002c18e4(void *context);
void FUN_002c5030(u32 flags);

/* Draw and advance the temporary overlay used while leaving the active title loop. */
u32 FUN_001061ec()
{
    if (g_titleFlags.overlay.frame <= 0) {
        g_titleFlags.overlayActive = 0;
        g_titleFlags.overlay.frame = 0;
    } else {
        f32 color[4];
        color[0] = 1.0f;
        color[1] = 1.0f;
        color[2] = 1.0f;
        color[3] = 1.0f;
        if (g_titleFlags.overlay.frame > 83) {
            color[3] = (f32)(u32)(88 - g_titleFlags.overlay.frame) * 0.2f;
        } else if (g_titleFlags.overlay.frame < 22) {
            color[3] = (f32)(g_titleFlags.overlay.frame - 2) * 0.05f;
        }
        if (color[3] > 0.0f) {
            u32 resource = asdTMTexTableGetNodeTexture(0x2c, 0);
            FUN_002c1b64(g_titleScene, resource);
            FUN_002c1ac8(color, color, color, color, 128.0f, 88.0f, 64.0f, 64.0f,
                          0.0f, 0.0f, 1.0f, 1.0f, 0.0f);
            FUN_002c198c(g_titleScene);
            FUN_002c18e4(g_titleScene);
        }
        g_titleFlags.overlay.frame -= FUN_0010ec60() + 1;
    }
    FUN_002c5030(0x401);
    return 0;
}
}
