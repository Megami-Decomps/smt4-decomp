/* NON_MATCHING: 108 vs 107 rows (61 diff lines): volume 1.0f baseline, aux 0.0f accumulation and command setup match retail; mid-function pitch/pan/ownerPan VFP scheduling and pool order of 0.0f/1.0f differ. */
#include "sound/SoundParameterCommand.h"

extern "C" {
f32 interpolationStateEvaluate(const SoundFadeState *fade);
SoundParameterQueue *objectCommandQueueGet(void);
SoundParameterCommand *objectCommandReserveWords(SoundParameterQueue *queue, u32 words);
void listAppendNode(SoundParameterQueue *queue, SoundParameterCommand *command);

/* Reserves a command node and stamps the queue context (same helper pattern as objectCommandBegin in ObjectCommandRequests.h). */
static __inline SoundParameterCommand *reserveSoundCommand(SoundParameterQueue *queue, u32 words)
{
    SoundParameterCommand *command = objectCommandReserveWords(queue, words);
    command->context = queue->context;
    return command;
}

void FUN_0045f478(SoundParameterVoice *voice)
{
    voice->vtable->update(voice);
    f32 volume = 1.0f;
    if (voice->mode != 2) {
        volume = voice->volumeMultiplier * volume;
        volume = voice->owner->volume * volume;
        volume = interpolationStateEvaluate(&voice->fade) * volume;
        volume = interpolationStateEvaluate(&voice->fades[0]) * volume;
        volume = interpolationStateEvaluate(&voice->fades[1]) * volume;
        volume = interpolationStateEvaluate(&voice->fades[2]) * volume;
        volume = voice->volume * volume;
        volume = voice->volumeScale * volume;
    } else {
        volume = 0.0f;
    }
    SoundParameterOwner *owner = voice->owner;
    f32 pan = voice->panOffset + (voice->pan + voice->panAdjustment);
    f32 surroundPan = voice->surroundPan + voice->surroundPanAdjustment;
    f32 pitch = voice->pitchScale * (voice->pitch * voice->pitchMultiplier);
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
    f32 aux[2];
    for (s32 i = 0; i < 2; ++i) {
        aux[i] = 0.0f;
    }
    aux[0] += voice->auxiliaryAAdjustment;
    aux[1] += voice->auxiliaryBAdjustment;
    for (s32 i = 0; i < 2; ++i) {
        aux[i] += (&owner->auxiliaryA)[i];
    }
    aux[0] += voice->lowPass;
    f32 auxiliaryA = aux[0];
    f32 auxiliaryB = aux[1];
    SoundParameterQueue *queue = objectCommandQueueGet();
    SoundParameterCommand *command = reserveSoundCommand(queue, 15);
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
} /* extern "C" */
