/* NON_MATCHING: guide positions and modes reconstructed; constant hoisting and VFP allocation differ. */
#include "gfx/DebugGuides.h"
#include "title/titleMain.h"

extern "C" {
extern TitleScene *g_titleScene;
s32 padIsButtonPressed(u32 button);
void FUN_002c1b64(TitleScene *scene, s32 layer);
void FUN_002c0944(u32 color0, u32 color1, u32 color2, u32 color3,
                  f32 x, f32 y, f32 width, f32 height, f32 z);

// Cycle between no guides, a center guide, and quarter-screen guides.
u32 FUN_003d8e24(DebugGuidesWork *work)
{
    if (padIsButtonPressed(9) != 0) {
        ++work->mode;
        if (work->mode >= 3)
            work->mode = 0;
    }
    FUN_002c1b64(g_titleScene, 0);
    switch (work->mode) {
    case 1:
        FUN_002c0944(0xFF7F, 0xFF7F, 0xFF7F, 0xFF7F,
                     200.0f, 0.0f, 1.0f, 240.0f, 0.0f);
        break;
    case 2:
        FUN_002c0944(0xFF7F, 0xFF7F, 0xFF7F, 0xFF7F,
                     100.0f, 0.0f, 1.0f, 240.0f, 0.0f);
        FUN_002c0944(0xFF7F, 0xFF7F, 0xFF7F, 0xFF7F,
                     200.0f, 0.0f, 1.0f, 240.0f, 0.0f);
        FUN_002c0944(0xFF7F, 0xFF7F, 0xFF7F, 0xFF7F,
                     300.0f, 0.0f, 1.0f, 240.0f, 0.0f);
        break;
    }
    return 0;
}
}
