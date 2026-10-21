#ifndef W6_W6MATCH3_BATTLE_TIMING_H
#define W6_W6MATCH3_BATTLE_TIMING_H

#include "common.h"

struct BtlActorRef;
struct BtlCommand;

extern "C" void btlCommandExtendAnimationWindow(BtlActorRef* actor, BtlCommand* command,
    s32 animation, s32 baseFrame, s32 startOffset, s32 endOffset);

#endif
