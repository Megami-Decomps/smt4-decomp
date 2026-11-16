/* nn::fnd::TimeSpan: a duration in nanoseconds, passed by value (r0:r1) to the sleep and wait
 * calls that take one. */
#ifndef NN_FND_TIMESPAN_H
#define NN_FND_TIMESPAN_H

#include "common.h"

namespace nn {
namespace fnd {

class TimeSpan {
public:
    explicit TimeSpan(s64 nanoseconds) : nanoseconds(nanoseconds) {}
    /* 0x00 */ s64 nanoseconds;
};
typedef char TimeSpanSizeCheck[sizeof(TimeSpan) == 8 ? 1 : -1];

} // namespace fnd
} // namespace nn

#endif
