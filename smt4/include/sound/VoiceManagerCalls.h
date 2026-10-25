/* Calls into the sound voice manager singleton (smt4). */
#ifndef SMT4_SOUND_VOICEMANAGERCALLS_H
#define SMT4_SOUND_VOICEMANAGERCALLS_H

#include "common.h"

extern "C" {

/* Forwards its three arguments to the voice manager's request function; returns its result. */
s32 FUN_002bd29c(u32 first, u32 second, u32 third);

} /* extern "C" */

#endif
