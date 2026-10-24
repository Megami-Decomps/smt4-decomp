#ifndef CLASSES_ONLINETIMESTAMP_H
#define CLASSES_ONLINETIMESTAMP_H

#include "common.h"

/* A point in time from the online library's clock (onlineTimeGetNow), 8 bytes. The default
 * constructor reads the clock. */
struct OnlineTimestamp {
    OnlineTimestamp();

    /* 0x00 */ u64 ticks;
};

/* The interval between two timestamps (64-bit difference). */
s64 operator-(const OnlineTimestamp &later, const OnlineTimestamp &earlier);

#endif
