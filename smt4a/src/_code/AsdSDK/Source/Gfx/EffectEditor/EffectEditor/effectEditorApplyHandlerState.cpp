/* NON_MATCHING: POD vector copies use integer rather than VFP transfers, temporary slots and control-block relocation differ; -O2 candidate. */
#include "shard/W6_W6Match6_EffectRender.h"

extern "C" {
extern EffectRenderSettings DAT_00634c90;
extern EffectRenderGlobals DAT_006471dc;
void FUN_00390038(EffectEditorSnapshot *);
void FUN_003008c4(EffectHandlerRequest *, const EffectRenderVector *);
void FUN_002f8794();
void FUN_001ad5ec(EffectEditorSnapshot *, const EffectRenderVector *, EffectEditorWords *);
void FUN_001bc3e4();
void handlerTableCallWithValueB(EffectHandlerRequest *, const EffectRenderVector *);
void handlerTableCall(EffectHandlerRequest *, f32);
void FUN_00300908(EffectHandlerRequest *, const EffectRenderVector *);
void handlerTableCallWithValue(EffectHandlerRequest *, u32);

void effectEditorApplyHandlerState(EffectHandlerRequest *request)
{
    EffectRenderSettings *settings = &DAT_00634c90;
    EffectRenderGlobals *globals = &DAT_006471dc;
    EffectRenderControls *controls = &settings->controls;
    FUN_00390038(&controls->snapshot);
    EffectRenderVector initial = globals->current;
    FUN_003008c4(request, &initial);
    if (controls->parameters.flags & 0x60) {
        globals->current = settings->initial;
        globals->vector = effectRenderSource()->origin;
        FUN_002f8794();
        EffectRenderVector transformed = globals->current;
        EffectEditorWords words;
        FUN_001ad5ec(&controls->snapshot, &transformed, &words);
        globals->current = effectRenderSource()->position;
        globals->words = words;
        FUN_001bc3e4();
    } else {
        globals->current = effectRenderSource()->position;
        globals->words = controls->parameters.fallback;
        FUN_001bc3e4();
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
        FUN_00300908(request, &tint);
    }
    handlerTableCallWithValue(request, controls->parameters.value);
}
}
