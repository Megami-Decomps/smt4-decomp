/* NON_MATCHING: track and owner register allocation, callback argument loads, and policy-address scheduling differ. */
#include "common.h"
extern "C" {
typedef f32 (*AnimationPolicy)(void *context, f32 start, f32 end, f32 frame);
struct AnimationState { u8 unk00[0x38]; f32 frame; f32 previous; f32 speed; f32 start; f32 end; AnimationPolicy policy; void *context; u8 unk54[4]; u8 dirty; };
struct AnimationOwner { u8 unk00[12]; AnimationState *primary[3]; AnimationState *secondary[3]; };
f32 FUN_00155650(void *context, f32 start, f32 end, f32 frame);
f32 nw_anim_PlayPolicy_Loop(void *context, f32 start, f32 end, f32 frame);
static __inline void resetAnimation(AnimationState *state)
{
    f32 frame = state->policy(state->context, state->start, state->end, 0.0f);
    state->previous = state->frame;
    state->frame = frame;
    state->dirty = 1;
}
/* Reset both indexed animation tracks and select their playback policy. */
void animationResetTracks(AnimationOwner *owner, u32 index, s32 loop)
{
    AnimationState *state = owner->primary[index];
    if (state != NULL) {
        resetAnimation(state);
        owner->primary[index]->speed = 1.0f;
        owner->primary[index]->policy = loop ? nw_anim_PlayPolicy_Loop : FUN_00155650;
        owner->primary[index]->dirty = 1;
    }
    state = owner->secondary[index];
    if (state != NULL) {
        resetAnimation(state);
        owner->secondary[index]->speed = 1.0f;
        owner->secondary[index]->policy = loop ? nw_anim_PlayPolicy_Loop : FUN_00155650;
        owner->secondary[index]->dirty = 1;
    }
}
}
