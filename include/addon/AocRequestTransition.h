#ifndef ADDON_AOCREQUESTTRANSITION_H
#define ADDON_AOCREQUESTTRANSITION_H

#include "shard/ScreenTransitionState.h"
#include "shard/W6_W6Match5_QueuedRequest.h"

/* Request parameters lie beyond the common transition prefix. */
struct AocRequestTransition {
    ScreenTransitionState transition;
    u8 unk20C[0x18];
    RequestParameters parameters; /* 0x224 */
};
typedef char AocRequestTransitionLayoutCheck[
    offsetof(AocRequestTransition, parameters) == 0x224 &&
    sizeof(AocRequestTransition) == 0x238 ? 1 : -1];

#endif
