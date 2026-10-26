#include "common.h"

extern "C" {

typedef struct Gauge {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ f32 limit;
    /* 0x3C */ u8 unk3C[0xC];
    /* 0x48 */ f32 value;
} Gauge;

static __inline bool gaugeExceeded(const Gauge *gauge)
{
    return gauge != NULL && gauge->limit < gauge->value;
}

typedef struct GaugePair {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ Gauge *first;
    /* 0x18 */ u8 unk18[8];
    /* 0x20 */ Gauge *second;
    /* 0x24 */ u8 unk24[8];
    /* 0x2C */ s32 mode;
} GaugePair;

u32 gaugePairIsWithinLimits(GaugePair *pair)
{
    u32 result;

    if (pair->mode == 5) {
        result = 1;
        if (gaugeExceeded(pair->first)) {
            result = 0;
        }
        if (gaugeExceeded(pair->second)) {
            result = 0;
        }
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
