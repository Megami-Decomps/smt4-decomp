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

/* Steps the LCG and returns a value in 0..range. Unsigned, as the definition computes it and as callers that
 * convert it to float unsigned (btlRollAilmentChance) use it; callers that compare it signed convert it with
 * (s32), callers that narrow the bound pass it as (u16). */
u32 randRange(int range);

} /* extern "C" */
#endif
