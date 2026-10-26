#pragma once
#include "common.h"

/* SoundPlayerPriority (declarations migrated from callers). */
struct SoundObject;
extern "C" {

void asdSoundObjectStop(SoundObject *object, s32 frames);

} /* extern "C" */
