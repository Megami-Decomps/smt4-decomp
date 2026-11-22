/* nw::snd::internal::MoveValue<T, U>: a value that ramps linearly from its origin to a target over
 * a frame count; the owner advances the counter once per frame. */
#ifndef NW_SND_MOVEVALUE_H
#define NW_SND_MOVEVALUE_H

#include "common.h"

namespace nw {
namespace snd {
namespace internal {

template <typename T, typename U>
class MoveValue {
public:
    /* The current value: the target once the counter has run out, else the point on the ramp. */
    T GetValue() const
    {
        if (counter >= frames) {
            return target;
        }
        return (target - origin) * (T)counter / (T)frames + origin;
    }

    /* Starts a new ramp from where the value is now. */
    void SetTarget(T newTarget, U newFrames)
    {
        origin = GetValue();
        target = newTarget;
        frames = newFrames;
        counter = 0;
    }

    /* Advances the ramp by one frame. */
    void Update()
    {
        if (counter < frames) {
            counter++;
        }
    }

    /* Whether the ramp has reached its target. */
    bool IsFinished() const
    {
        return counter >= frames;
    }

    /* 0x00 */ T origin;
    /* 0x04 */ T target;
    /* 0x08 */ U frames;
    /* 0x0C */ U counter;
};

} /* namespace internal */
} /* namespace snd */
} /* namespace nw */

#endif
