#ifndef SHARD_W6_W6MATCH2_LONG_DIVISION_H
#define SHARD_W6_W6MATCH2_LONG_DIVISION_H

#include "common.h"

// The runtime divider returns quotient in r0:r1 and remainder in r2:r3.
struct LongDivisionResult {
    u64 quotient;
    u64 remainder;
};

#endif
