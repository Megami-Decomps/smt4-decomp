#include "common.h"
#include "Model/MoriModelShadowMap.h"

extern "C" {

int FUN_00187a84(RenderCtxA *context, void *area, s32 arg, void *state);
int FUN_00187d90(void *handle, void *target);

/* Switches the context to the display area for its mode (modes 0 and 1 use area A, mode 2 uses area B)
 * and records the mode shown. */
void FUN_00157558(RenderCtxA *context)
{
    void *area = NULL;
    u8 shown;

    switch (context->stereoMode) {
    case 0:
    case 1:
        shown = 1;
        area = context->displayAreas.areaA;
        break;
    case 2:
        shown = 2;
        area = context->displayAreas.areaB;
        break;
    default:
        shown = 0;
        break;
    }
    if (context->shownMode != shown) {
        FUN_00187a84(context, area, 0, context->colorTarget.unk0534);
        FUN_00187d90(context->colorTarget.colorScaleTarget, context->display.target);
        context->shownMode = shown;
    }
}

} /* extern "C" */
