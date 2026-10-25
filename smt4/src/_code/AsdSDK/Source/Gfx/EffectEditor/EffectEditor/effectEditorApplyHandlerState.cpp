/* NON_MATCHING: POD vector copies use integer rather than VFP transfers, temporary slots and control-block relocation differ; -O2 candidate. */
#include "shard/W6_W6Match6_EffectRender.h"

extern "C" {
extern EffectRenderSettings g_effectEditorInitialVector;
extern EffectRenderGlobals DAT_004ea81c;
void FUN_002496cc(EffectEditorSnapshot *);
void requestHandlerDispatch(EffectHandlerRequest *, const EffectRenderVector *);
void FUN_00249678();
void FUN_0025c8f0(EffectEditorSnapshot *, const EffectRenderVector *, EffectEditorWords *);
void FUN_002a2c00();
void handlerTableCallWithValueB(EffectHandlerRequest *, const EffectRenderVector *);
void handlerTableCall(EffectHandlerRequest *, f32);
void FUN_0021a4dc(EffectHandlerRequest *, const EffectRenderVector *);
void handlerTableCallWithValue(EffectHandlerRequest *, u32);

void effectEditorApplyHandlerState(EffectHandlerRequest *request)
{
    EffectRenderSettings *settings = &g_effectEditorInitialVector;
    EffectRenderGlobals *globals = &DAT_004ea81c;
    EffectRenderControls *controls = &settings->controls;
    FUN_002496cc(&controls->snapshot);
    EffectRenderVector initial = globals->current;
    requestHandlerDispatch(request, &initial);
    if (controls->parameters.flags & 0x60) {
        globals->current = settings->initial;
        globals->vector = effectRenderSource()->origin;
        FUN_00249678();
        EffectRenderVector transformed = globals->current;
        EffectEditorWords words;
        FUN_0025c8f0(&controls->snapshot, &transformed, &words);
        globals->current = effectRenderSource()->position;
        globals->words = words;
        FUN_002a2c00();
    } else {
        globals->current = effectRenderSource()->position;
        globals->words = controls->parameters.fallback;
        FUN_002a2c00();
    }
    EffectRenderVector position = globals->current;
    handlerTableCallWithValueB(request, &position);
    handlerTableCall(request, controls->parameters.scale * effectRenderSource()->scale);
    if (controls->parameters.flags & 0x100) {
        globals->current = controls->parameters.tint;
        f32 scale = controls->parameters.scale * effectRenderSource()->scale;
        globals->current.x *= scale;
        globals->current.y *= scale;
        globals->current.z *= scale;
        globals->current.w *= scale;
        EffectRenderVector tint = globals->current;
        FUN_0021a4dc(request, &tint);
    }
    handlerTableCallWithValue(request, controls->parameters.value);
}
}
