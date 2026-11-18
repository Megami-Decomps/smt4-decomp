#ifndef SMT4_BATTLE_CAMERA_TRANSITION_API_H
#define SMT4_BATTLE_CAMERA_TRANSITION_API_H

#include "common.h"

struct BattleVectorTransition;
struct SecondaryVectorTransitionView;
struct BattleCameraTimerState;
extern "C" {
void FUN_003d6df0(BattleCameraTimerState *state, f32 start, f32 end, f32 frames);
void btlSetVectorTransitionTarget(BattleVectorTransition *state, s32 target, s32 mode,
                                  f32 x, f32 y, f32 z);
void FUN_003d64dc(SecondaryVectorTransitionView *transition, s32 duration, s32 mode,
                  f32 x, f32 y, f32 z);
}

#endif
