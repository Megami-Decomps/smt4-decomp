#ifndef NN_FND_DATETIME_H
#define NN_FND_DATETIME_H

#include "common.h"

namespace nn {
namespace fnd {

class DateTime {
public:
    DateTime() : milliseconds(0) {}
    DateTime(s32 year, s32 month, s32 day, s32 hour, s32 minute, s32 second, s32 millisecond);

    s64 milliseconds;
};
typedef char DateTimeSize[sizeof(DateTime) == 8 ? 1 : -1];

} // namespace fnd
} // namespace nn

#endif
