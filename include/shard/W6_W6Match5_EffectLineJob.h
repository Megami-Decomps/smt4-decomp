#ifndef SHARD_W6_W6MATCH5_EFFECTLINEJOB_H
#define SHARD_W6_W6MATCH5_EFFECTLINEJOB_H

#include "common.h"
#include <stddef.h>

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
    void setLifetime(f32 start, f32 frames) { elapsed = start; duration = frames; }

    BustupEffectLineObject *object; // 0x00
    f32 elapsed;                   // 0x04
    f32 duration;                  // 0x08
};
typedef char EffectLineJobWorkLayoutCheck[sizeof(EffectLineJobWork) == 0xc &&
    offsetof(EffectLineJobWork, elapsed) == 4 && offsetof(EffectLineJobWork, duration) == 8 ? 1 : -1];

#endif
