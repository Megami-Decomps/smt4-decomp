/* nn::fnd::TimeSpan: a duration in nanoseconds, passed by value (r0:r1) to the sleep and wait
 * calls that take one. A sleep in a loop written with FromMilliSeconds/FromMicroSeconds reloads
 * its constant at the call, as retail does; a plain s64 literal gets hoisted out of the loop. */
#ifndef NN_FND_TIMESPAN_H
#define NN_FND_TIMESPAN_H

#include "common.h"

namespace nn {
namespace fnd {

class TimeSpan {
public:
    explicit TimeSpan(s64 nanoseconds) : nanoseconds(nanoseconds) {}
    static TimeSpan FromNanoSeconds(s64 nanoseconds) { return TimeSpan(nanoseconds); }
    static TimeSpan FromMicroSeconds(s64 microseconds) { return TimeSpan(microseconds * 1000); }
    static TimeSpan FromMilliSeconds(s64 milliseconds) { return TimeSpan(milliseconds * 1000000); }
    /* 0x00 */ s64 nanoseconds;
};
typedef char TimeSpanSizeCheck[sizeof(TimeSpan) == 8 ? 1 : -1];

} // namespace fnd
} // namespace nn

#endif
