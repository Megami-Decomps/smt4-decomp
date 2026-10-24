/* NON_MATCHING: byte-for-byte except VFP register choice inside the two inlined MoveValue::GetValue ramps (retail cvt/mul/div use fresh s-registers; armcc allocates in place). */
#include "nw/snd/BasicSound.h"

using namespace nw::snd::internal;

extern "C" {

/* Stops the sound: at once when no fade is wanted (or it can't fade), else by ramping its fade volume to silence. */
void FUN_002bda30(BasicSound *sound, s32 fadeFrames)
{
    if (fadeFrames == 0 || sound->pauseState == 2 || (sound->startFlag == 0 && sound->unk86 == 0)) {
        sound->shutdown();
        return;
    }
    s32 frames = (s32)(sound->fadeVolume.GetValue() * (f32)fadeFrames);
    sound->fadeVolume.SetTarget(0.0f, frames);
    sound->SetPlayerPriority(0);
    sound->unk87 = 0;
    sound->pauseState = 0;
    sound->unk8C = 0;
    sound->fadeOutFlag = 1;
}

} /* extern "C" */
