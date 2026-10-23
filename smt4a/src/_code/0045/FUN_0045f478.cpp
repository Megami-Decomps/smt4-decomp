/* NON_MATCHING: retail retains unit/zero parameter baselines, while the compiler folds them and allocates combined float parameters differently. */
#include "sound/SoundParameterCommand.h"

extern "C" {
f32 FUN_0017fc38(const SoundFadeState *fade);
SoundParameterQueue *objectCommandQueueGet(void);
SoundParameterCommand *objectCommandReserveWords(SoundParameterQueue *queue, u32 words);
void listAppendNode(SoundParameterQueue *queue, SoundParameterCommand *command);

void FUN_0045f478(SoundParameterVoice *voice)
{
    voice->vtable->update(voice);
    f32 volume;
    if (voice->mode == 2) {
        volume = 0.0f;
    } else {
        volume = voice->owner->volume * voice->volumeMultiplier;
        volume = FUN_0017fc38(&voice->fade) * volume;
        volume = FUN_0017fc38(&voice->fades[0]) * volume;
        volume = FUN_0017fc38(&voice->fades[1]) * volume;
        volume = FUN_0017fc38(&voice->fades[2]) * volume;
        volume = voice->volume * volume;
        volume = voice->volumeScale * volume;
    }
    SoundParameterOwner *owner = voice->owner;
    f32 surroundPan = voice->surroundPan + voice->surroundPanAdjustment;
    f32 pitch = voice->pitchScale * (voice->pitch * voice->pitchMultiplier);
    f32 pan = voice->panOffset + (voice->pan + voice->panAdjustment);
    f32 ownerPan = voice->ownerPanOffset + (owner->pan + (voice->ownerPan + voice->ownerPanAdjustment));
    s32 filterType = voice->filterOverride;
    f32 filterValue = voice->filterAdjustment;
    if (filterType == -1) {
        filterType = owner->filterType;
        filterValue = owner->filterValue;
        if (filterType == -1) {
            filterType = voice->filterType;
            filterValue = voice->filterValue;
        }
    }
    f32 send = owner->send + voice->sendAdjustment;
    f32 auxiliaryB = voice->auxiliaryBAdjustment + owner->auxiliaryB;
    f32 auxiliaryA = (voice->auxiliaryAAdjustment + owner->auxiliaryA) + voice->lowPass;
    SoundParameterQueue *queue = objectCommandQueueGet();
    SoundParameterCommand *command = objectCommandReserveWords(queue, 15);
    command->context = queue->context;
    command->kind = 8;
    command->voiceId = voice->vtable->getId(voice);
    command->volume = volume;
    command->pitch = pitch;
    command->ownerPan = ownerPan;
    command->pan = pan;
    command->surroundPan = surroundPan;
    command->filterType = filterType;
    command->filterValue = filterValue;
    command->send = send;
    command->auxiliaryA = auxiliaryA;
    command->auxiliaryB = auxiliaryB;
    listAppendNode(queue, command);
}
}
