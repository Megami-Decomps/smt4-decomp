/* nn::os light-weight sync primitives built on exclusive loads and the address arbiter svc. */
#ifndef SHARD_S1NNOS_H
#define SHARD_S1NNOS_H

#include "common.h"

/* nn::os::LightEvent: state 0 = cleared, 1 = signaled (auto-clear), -1/-2 = set/clearing. */
typedef struct LightEvent {
    /* 0x00 */ volatile s32 state;
    /* 0x04 */ s32 lock; /* SimpleLock word */
} LightEvent;

/* Work block passed to the applet parameter registration helper. */
typedef struct AppletParameterState {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 parameter;
} AppletParameterState;

#endif
