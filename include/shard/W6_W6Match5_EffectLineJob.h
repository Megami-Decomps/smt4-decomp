#ifndef SHARD_W6_W6MATCH5_EFFECTLINEJOB_H
#define SHARD_W6_W6MATCH5_EFFECTLINEJOB_H

#include "common.h"

// Native virtual interface used by the effect-line job; intervening slots are unknown.
class BustupEffectLineObject {
public:
    virtual ~BustupEffectLineObject(); // Vtable offsets 0x00 and 0x04.
    virtual void update() = 0;         // 0x08
    virtual void reserved0c() = 0;
    virtual void reserved10() = 0;
    virtual void reserved14() = 0;
    virtual s32 isReady() = 0;         // 0x18
};

struct EffectLineJobWork {
    BustupEffectLineObject *object; // 0x00
    f32 elapsed;                   // 0x04
    f32 duration;                  // 0x08
};

#endif
