#ifndef SOUND_AMBIENT_SOUND_H
#define SOUND_AMBIENT_SOUND_H

#include "AsdSDK/Source/Snd/SoundActorQueue.h"

/* Enqueues a positional sound, starting it immediately if kind is zero. */
extern "C" void soundQueuePositionalRequest(u32 soundId, s32 kind, SoundActorQueuePosition position);

#endif
