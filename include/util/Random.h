/* Random.h */
#ifndef INCLUDE_UTIL_RANDOM_H
#define INCLUDE_UTIL_RANDOM_H

#include "common.h"

/* How the signed-magnitude helpers (randomSignedRatio, randomSignedScaledRange) sign their result. */
enum {
    RANDOM_SIGN_POSITIVE = 0,
    RANDOM_SIGN_NEGATIVE = 1,
    RANDOM_SIGN_RANDOM = 2     /* positive or negative with equal chance */
};

#ifdef __cplusplus
extern "C" {
#endif
/* The game RNG: returns a value in 0..limit. */
u32 randNextInRange(int limit);
#ifdef __cplusplus
}
#endif


extern "C" {

u32 lcgRandomRange(s32 limit);

u32 randNextInRange(int limit);

u32 randRange(int range);

} /* extern "C" */
#endif
