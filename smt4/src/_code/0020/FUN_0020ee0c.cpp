/* NON_MATCHING: overlay render-state stack handling shares the zero result differently and changes the early-return sequence. */
/* Draws the active battle-effect overlay with a temporary title-scene render state. */
#include "battle/btlEffect.h"
#include "camp/RenderCtx.h"

extern "C" {
extern BtlEffectGlobals g_btlEffect;
extern RenderCtx *g_titleScene;
void *jobGetWork(u32 process);
s32 FUN_002865c0(u32 state, f32 value);
void FUN_002c198c(RenderCtx *context);
void FUN_002c18e4(RenderCtx *context);

u32 FUN_0020ee0c(u32 process)
{
    struct DrawObject;
    struct DrawMethods {
        void *unk00[3];
        void (*draw)(DrawObject *object);
    };
    struct DrawObject { DrawMethods *methods; };
    struct EffectOverlayView {
        u8 unk0000[0x3028];
        u32 flags;
        u8 unk302C[8];
        DrawObject *object;
    };
    jobGetWork(process);
    EffectOverlayView *effect = (EffectOverlayView *)g_btlEffect.data;
    if (effect != NULL && (effect->flags & 2) && effect->object != NULL) {
        RenderCtx *context = g_titleScene;
        s32 state = FUN_002865c0(6, 0.0f);
        RenderStateStack *stack = &context->additional.stackC;
        s32 oldState = stack->entries[stack->count];
        ++stack->count;
        stack->entries[stack->count] = state;
        if (stack->dirty || oldState != state) {
            stack->apply(state);
            stack->dirty = 0;
        }
        effect->object->methods->draw(effect->object);
        context = g_titleScene;
        stack = &context->additional.stackC;
        oldState = stack->entries[stack->count];
        --stack->count;
        state = stack->entries[stack->count];
        if (stack->dirty || oldState != state) {
            stack->apply(state);
            stack->dirty = 0;
        }
        FUN_002c198c(g_titleScene);
        FUN_002c18e4(g_titleScene);
    }
    return 0;
}
}
