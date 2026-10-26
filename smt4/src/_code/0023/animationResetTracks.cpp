/* NON_MATCHING: track/owner pointer registers (r4/r5), the VFP constant registers (s16/s17) and the callback pointer load order inside the reset differ. */
#include "common.h"
extern "C" {
typedef f32 (*AnimationPolicy)(void *context, f32 start, f32 end, f32 frame);
struct AnimationState { u8 unk00[0x38]; f32 frame; f32 previous; f32 speed; f32 start; f32 end; AnimationPolicy policy; void *context; u8 unk54[4]; u8 dirty; };
struct AnimationOwner { u8 unk00[12]; AnimationState *primary[3]; AnimationState *secondary[3]; };
f32 mathClampFloat(void *context, f32 start, f32 end, f32 frame);
f32 nw_anim_PlayPolicy_Loop(void *context, f32 start, f32 end, f32 frame);
static __inline void resetAnimation(AnimationState *state)
{
    f32 frame = state->policy(state->context, state->start, state->end, 0.0f);
    state->previous = state->frame;
    state->frame = frame;
    state->dirty = 1;
}
static void setPlaybackPolicy(AnimationState *state, AnimationPolicy policy)
{
    state->policy = policy;
    state->dirty = 1;
}
/* Reset both indexed animation tracks and select their playback policy. */
void animationResetTracks(AnimationOwner *owner, u32 index, s32 loop)
{
    AnimationState *primary = owner->primary[index];
    if (primary != NULL) {
        resetAnimation(primary);
        owner->primary[index]->speed = 1.0f;
        setPlaybackPolicy(owner->primary[index], loop == 0 ? mathClampFloat : nw_anim_PlayPolicy_Loop);
    }
    AnimationState *secondary = owner->secondary[index];
    if (secondary != NULL) {
        resetAnimation(secondary);
        owner->secondary[index]->speed = 1.0f;
        setPlaybackPolicy(owner->secondary[index], loop == 0 ? mathClampFloat : nw_anim_PlayPolicy_Loop);
    }
}
}
