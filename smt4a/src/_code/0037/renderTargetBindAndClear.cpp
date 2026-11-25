#include "gfx/RenderTargetClear.h"
#include "gfx/RenderTargetBind.h"

extern "C" {

void asdGxSetViewport(s32 x, s32 y, s32 width, s32 height);

/* Binds the render target, clamps its viewport and clears its buffers (zero RGBA if no colour was supplied). */
void renderTargetBindAndClear(RenderTargetClearBinding *target, const AsdGxClearColor *color)
{
    s32 width;
    s32 height;

    FUN_00154d68(target->color, target->depth, target->size->width, target->size->height);
    width = target->size->width;
    height = target->size->height;
    if (width > CLEAR_VIEWPORT_MAX_WIDTH) {
        width = CLEAR_VIEWPORT_MAX_WIDTH;
    }
    if (height > CLEAR_VIEWPORT_MAX_HEIGHT) {
        height = CLEAR_VIEWPORT_MAX_HEIGHT;
    }
    asdGxSetViewport(CLEAR_VIEWPORT_ORIGIN, CLEAR_VIEWPORT_ORIGIN, width, height);
    if (color != NULL) {
        renderFillScreenColor(color->rgb.red, color->rgb.green, color->rgb.blue, color->alpha,
                              CLEAR_DISPLAY_MODE, CLEAR_DISPLAY_BUFFERS, 1.0f);
        return;
    }
    renderFillScreenColor(0.0f, 0.0f, 0.0f, 0.0f, CLEAR_DISPLAY_MODE, CLEAR_DISPLAY_BUFFERS, 1.0f);
}

} /* extern "C" */
