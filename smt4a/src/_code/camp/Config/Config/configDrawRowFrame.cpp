#include "common.h"
#include "shard/TextureDrawCall.h"
#include "camp/Config/Config.h"
#include "shard/S1ListPanel.h"

extern "C" {

extern ConfigWorkA *g_config;
extern RenderCtxA *g_renderCtx;

void efctSetSpeed(f32 speed);
f32 vec2GetSpeed(const void *position);
u32 packNibblesAndByte(u32 first, u32 second, u32 byte);

// Draw one Config row's frame sprites (selected pair, plain pair or a four-segment bar) at (x, y).
void configDrawRowFrame(s32 x, s32 y, s32 selected, s32 wide, s32 locked, f32 speed)
{
    ConfigWorkA *config = g_config;
    efctSetSpeed(speed);
    if (selected != 0 && wide != 0) {
        FUN_001835b4(2, 36, 111, x, y, 11);
        FUN_001835b4(2, 36, 149, x, y, 11);
        FUN_001835b4(2, 36, 150, x, y, 11);
        efctSetSpeed(vec2GetSpeed(&config->draw) * speed);
        FUN_001835b4(2, 36, 151, x, y, 11);
        FUN_001835b4(2, 36, 152, x, y, 11);
    } else if (selected == 0) {
        if (locked != 0) {
            FUN_001835b4(2, 36, 172, x, y, 11);
        } else {
            FUN_001835b4(2, 36, 102, x, y, 11);
        }
        for (s32 i = 0; i < 4; i++) {
            FUN_001835b4(2, 36, i + 107, x, y, 18);
        }
    } else {
        FUN_001835b4(2, 36, 111, x, y, 11);
        FUN_001835b4(2, 36, 141, x, y, 11);
        FUN_001835b4(2, 36, 142, x, y, 11);
        efctSetSpeed(vec2GetSpeed(&config->draw) * speed);
        FUN_001835b4(2, 36, 143, x, y, 11);
        FUN_001835b4(2, 36, 144, x, y, 11);
    }
    RenderCtxA *context = g_renderCtx;
    u32 state = packNibblesAndByte(6, 7, 0);
    renderCtxSetB(context, state);
    efctSetSpeed(1.0f);
}

} /* extern "C" */
