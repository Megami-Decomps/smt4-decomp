#ifndef CLASSES_ONLINERESULT_H
#define CLASSES_ONLINERESULT_H

#include "common.h"

/* The online library's call result (OnlineCore Result.cpp): a result code and the source location
 * that produced it. Functions return it by value, through the caller's result slot. */
struct OnlineResult {
    OnlineResult(const OnlineResult &other);
    /* Builds the result for `resultCode`; records where it was made (Result.cpp). */
    OnlineResult(const u32 &resultCode);

    /* 0x00 */ u32 code;
    /* 0x04 */ const char *file;
    /* 0x08 */ s32 line;
};

#endif
