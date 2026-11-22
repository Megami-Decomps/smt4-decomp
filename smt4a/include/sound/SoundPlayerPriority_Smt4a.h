#pragma once
#include "common.h"

/* SoundPlayerPriority (declarations migrated from callers). */
struct SoundObject;
extern "C" {

void nw_snd_internal_BasicSound_Stop(SoundObject *object, s32 frames);

} /* extern "C" */
