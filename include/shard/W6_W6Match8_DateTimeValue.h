#ifndef SHARD_W6_W6MATCH8_DATETIMEVALUE_H
#define SHARD_W6_W6MATCH8_DATETIMEVALUE_H

#include "common.h"

struct DateTimeValue {
    s64 milliseconds;
};
struct Archive;
extern "C" void archiveReadNewsSinceDateTime(DateTimeValue *output, const Archive *source);

#endif
