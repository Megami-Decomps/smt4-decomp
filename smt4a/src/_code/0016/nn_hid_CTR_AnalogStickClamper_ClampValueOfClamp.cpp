#include "common.h"

extern "C" {

typedef struct ClampValues {
    /* 0x00 */ s16 minA;
    /* 0x02 */ s16 minB;
    /* 0x04 */ s16 unk04;
    /* 0x06 */ s16 maxA;
    /* 0x08 */ s16 maxB;
    /* 0x0A */ s16 maxC;
} ClampValues;

/* Limits the clamp values to the supported ranges: the two minimums to at least 0x28 and 0x24, the three maximums to at most 0x91. */
void nn_hid_CTR_AnalogStickClamper_ClampValueOfClamp(ClampValues *clamp)
{
    if (clamp->minA < 0x28) {
        clamp->minA = 0x28;
    }
    if (clamp->minB < 0x24) {
        clamp->minB = 0x24;
    }
    if (clamp->maxA > 0x91) {
        clamp->maxA = 0x91;
    }
    if (clamp->maxB > 0x91) {
        clamp->maxB = 0x91;
    }
    if (clamp->maxC > 0x91) {
        clamp->maxC = 0x91;
    }
}

} /* extern "C" */
