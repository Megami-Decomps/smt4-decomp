/* Filesystem (nn::fs, module 17) result ranges: the SDK's result-range tests (a module compare and
 * a description range), each written with the bound form the SDK used, which decides whether armcc
 * compares against the last description or the one after it. */
#ifndef NN_FSRESULT_H
#define NN_FSRESULT_H

#include "nn/Result.h"

#ifdef __cplusplus
/* Filesystem result descriptions 100-179. */
static __inline bool fsResultInRange100(nn::Result result)
{
    return nnResultModule(result) == 17 && nnResultDescriptionBits(result) >= 100 && nnResultDescriptionBits(result) <= 179;
}

/* Filesystem result descriptions 180-199. */
static __inline bool fsResultInRange180(nn::Result result)
{
    return nnResultModule(result) == 17 && nnResultDescriptionBits(result) >= 180 && nnResultDescriptionBits(result) <= 199;
}

/* Filesystem result descriptions 200-219. */
static __inline bool fsResultInRange200(nn::Result result)
{
    return nnResultModule(result) == 17 && nnResultDescriptionBits(result) >= 200 && nnResultDescriptionBits(result) <= 219;
}

/* Filesystem result descriptions 220-229. */
static __inline bool fsResultInRange220(nn::Result result)
{
    return nnResultModule(result) == 17 && nnResultDescriptionBits(result) >= 220 && nnResultDescriptionBits(result) <= 229;
}

/* Filesystem result descriptions 230-339. */
static __inline bool fsResultInRange230(nn::Result result)
{
    return nnResultModule(result) == 17 && nnResultDescriptionBits(result) >= 230 && nnResultDescriptionBits(result) < 340;
}

/* Filesystem result descriptions 340-359. */
static __inline bool fsResultInRange340(nn::Result result)
{
    return nnResultModule(result) == 17 && nnResultDescriptionBits(result) >= 340 && nnResultDescriptionBits(result) < 360;
}

/* Filesystem result descriptions 360-389. */
static __inline bool fsResultInRange360(nn::Result result)
{
    return nnResultModule(result) == 17 && nnResultDescriptionBits(result) >= 360 && nnResultDescriptionBits(result) <= 389;
}

/* Filesystem result descriptions 390-399. */
static __inline bool fsResultInRange390(nn::Result result)
{
    return nnResultModule(result) == 17 && nnResultDescriptionBits(result) >= 390 && nnResultDescriptionBits(result) < 400;
}

#endif

#endif
