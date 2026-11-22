#include "nw/snd/BasicSound.h"
#include "classes/ObjectCommandRequests.h"

using namespace nw::snd::internal;

/* The driver commands a sound's update queues (ObjectCommand.kind). */
enum {
    DRIVER_COMMAND_PLAYER_START = 5,
    DRIVER_COMMAND_PLAYER_PAUSE = 7,    /* payload.bytes.flag: pause or resume */
    DRIVER_COMMAND_PLAYER_RELEASE = 12  /* a force-detached player gives its resources back */
};

extern "C" {

/* nw::snd::internal::BasicSound::Update: one frame of a sound. Finalizes it once its player has finished or
 * its fade-out is over; otherwise starts the player when the sound is prepared, advances its counters and
 * fades, lets the ambient callbacks and the actor refresh its parameters, and queues the driver's start and
 * pause commands as the pause and mute states settle. */
void nw_snd_internal_BasicSound_Update(BasicSoundA *sound)
{
    BasicSoundPlayerStateA *player = sound->GetBasicSoundPlayerHandle();
    if (sound->playerAvailable && sound->GetBasicSoundPlayerHandle()->finishFlag) {
        sound->Finalize();
        return;
    }
    if (player->finalizedForceDetach) {
        ObjectCommandQueue *queue = objectCommandQueueGet();
        ObjectCommand *command = objectCommandBegin(queue, 5);
        command->kind = DRIVER_COMMAND_PLAYER_RELEASE;
        command->owner = (u32)sound->GetBasicSoundPlayerHandle();
        listAppendNode(queue, command);
        sound->Finalize();
        return;
    }

    if (!sound->IsPrepared()) {
        return;
    }

    if (sound->autoStopFlag) {
        if (sound->autoStopCounter == 0) {
            if (sound->pauseState == BasicSoundA::PAUSE_STATE_NORMAL ||
                sound->pauseState == BasicSoundA::PAUSE_STATE_UNPAUSING) {
                sound->Stop(0);
                return;
            }
        } else {
            --sound->autoStopCounter;
        }
    }

    bool playerStartFlag = false;
    if (!sound->startedFlag) {
        if (!sound->startFlag) {
            return;
        }
        if (!sound->IsPrepared()) {
            return;
        }
        sound->playerState = BasicSoundA::PLAYER_STATE_PLAY;
        playerStartFlag = true;
    }

    if (sound->playerState == BasicSoundA::PLAYER_STATE_PLAY) {
        if (sound->updateCounter < 0xFFFFFFFF) {
            sound->updateCounter++;
        }
        if (sound->pauseState != BasicSoundA::PAUSE_STATE_PAUSED && sound->playingCounter < 0xFFFFFFFF) {
            sound->playingCounter++;
        }
    }

    switch (sound->pauseState) {
    case BasicSoundA::PAUSE_STATE_PAUSING:
        sound->pauseFadeVolume.Update();
        break;
    case BasicSoundA::PAUSE_STATE_UNPAUSING:
        sound->pauseFadeVolume.Update();
        /* fall through */
    case BasicSoundA::PAUSE_STATE_NORMAL:
        sound->UpdateMoveValue();
        break;
    }

    if (sound->ambientArgUpdateCallback != NULL) {
        sound->ambientArgUpdateCallback->at_AmbientArgUpdate(sound->ambientArg, sound);
    }
    if (sound->ambientParamUpdateCallback != NULL) {
        SoundAmbientParam ambientParam;
        if (sound->updateCounter > 0) {
            ambientParam.volume = sound->ambientParam.volume;
            ambientParam.pitch = sound->ambientParam.pitch;
            ambientParam.pan = sound->ambientParam.pan;
            ambientParam.span = sound->ambientParam.span;
            ambientParam.fxSend = sound->ambientParam.fxSend;
            ambientParam.lpf = sound->ambientParam.lpf;
            ambientParam.biquadFilterValue = sound->ambientParam.biquadFilterValue;
            ambientParam.biquadFilterType = sound->ambientParam.biquadFilterType;
            ambientParam.priority = sound->ambientParam.priority;
            ambientParam.userData = sound->ambientParam.userData;
        }
        sound->ambientParamUpdateCallback->at_AmbientParamUpdate(sound->ambientArg, sound->id, &ambientParam);
        sound->ambientParam.volume = ambientParam.volume;
        sound->ambientParam.pitch = ambientParam.pitch;
        sound->ambientParam.pan = ambientParam.pan;
        sound->ambientParam.span = ambientParam.span;
        sound->ambientParam.fxSend = ambientParam.fxSend;
        sound->ambientParam.lpf = ambientParam.lpf;
        sound->ambientParam.biquadFilterValue = ambientParam.biquadFilterValue;
        sound->ambientParam.biquadFilterType = ambientParam.biquadFilterType;
        sound->ambientParam.priority = ambientParam.priority;
        sound->ambientParam.userData = ambientParam.userData;
    }
    if (sound->soundActor != NULL) {
        sound->actorParam = sound->soundActor->actorParam;
    }

    sound->UpdateParam();

    if (sound->fadeOutFlag && sound->fadeVolume.IsFinished()) {
        sound->fadeOutFlag = false;
        sound->Finalize();
        return;
    }

    ObjectCommandQueue *queue = objectCommandQueueGet();
    if (playerStartFlag) {
        ObjectCommand *command = objectCommandBegin(queue, 6);
        command->kind = DRIVER_COMMAND_PLAYER_START;
        command->owner = (u32)sound->GetBasicSoundPlayerHandle();
        listAppendNode(queue, command);
        sound->startedFlag = true;
        sound->startFlag = false;
    }

    if (sound->pauseState == BasicSoundA::PAUSE_STATE_PAUSING) {
        if (sound->pauseFadeVolume.IsFinished()) {
            ObjectCommand *command = objectCommandBegin(queue, 6);
            command->kind = DRIVER_COMMAND_PLAYER_PAUSE;
            command->owner = (u32)sound->GetBasicSoundPlayerHandle();
            command->payload.bytes.flag = true;
            listAppendNode(queue, command);
            sound->pauseState = BasicSoundA::PAUSE_STATE_PAUSED;
        }
    } else if (sound->pauseState == BasicSoundA::PAUSE_STATE_UNPAUSING) {
        if (sound->pauseFadeVolume.IsFinished()) {
            sound->pauseState = BasicSoundA::PAUSE_STATE_NORMAL;
        }
    }

    if (sound->unPauseFlag) {
        ObjectCommand *command = objectCommandBegin(queue, 6);
        command->kind = DRIVER_COMMAND_PLAYER_PAUSE;
        command->owner = (u32)sound->GetBasicSoundPlayerHandle();
        command->payload.bytes.flag = false;
        listAppendNode(queue, command);
        sound->unPauseFlag = false;
    }

    if (sound->muteState == BasicSoundA::MUTE_STATE_MUTING) {
        if (sound->muteFadeVolume.IsFinished()) {
            sound->muteState = BasicSoundA::MUTE_STATE_MUTED;
        }
    } else if (sound->muteState == BasicSoundA::MUTE_STATE_UNMUTING) {
        if (sound->muteFadeVolume.IsFinished()) {
            sound->muteState = BasicSoundA::MUTE_STATE_NORMAL;
        }
    }
}

} /* extern "C" */
