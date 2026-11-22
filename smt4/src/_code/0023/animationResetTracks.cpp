/* NON_MATCHING: only the owner-slot and track pointers swap registers (retail r4/r5, the build r5/r4). */
#include "common.h"
extern "C" {
typedef f32 (*AnimationPolicy)(f32 start, f32 end, f32 frame, void *context);
struct AnimationState { u8 unk00[0x38]; f32 frame; f32 previous; f32 speed; f32 start; f32 end; AnimationPolicy policy; void *context; u8 unk54[4]; u8 dirty; };
struct AnimationOwner { u8 unk00[12]; AnimationState *primary[3]; AnimationState *secondary[3]; };
f32 mathClampFloat(f32 start, f32 end, f32 frame, void *context); // declcheck: local (stored as a four-argument AnimationPolicy, nw::anim's play-policy signature)
f32 nw_anim_PlayPolicy_Loop(f32 start, f32 end, f32 frame, void *context);
/* Sets the frame through the play policy (nw::anim's frame controller SetFrame), keeping the previous one. */
static __inline void setFrame(AnimationState *state, f32 frame)
{
    f32 value = state->policy(state->start, state->end, frame, state->context);
    state->previous = state->frame;
    state->frame = value;
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
        setFrame(primary, 0.0f);
        owner->primary[index]->speed = 1.0f;
        setPlaybackPolicy(owner->primary[index], loop == 0 ? mathClampFloat : nw_anim_PlayPolicy_Loop);
    }
    AnimationState *secondary = owner->secondary[index];
    if (secondary != NULL) {
        setFrame(secondary, 0.0f);
        owner->secondary[index]->speed = 1.0f;
        setPlaybackPolicy(owner->secondary[index], loop == 0 ? mathClampFloat : nw_anim_PlayPolicy_Loop);
    }
}
}
