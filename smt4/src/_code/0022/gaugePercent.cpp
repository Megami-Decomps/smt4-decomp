#include "common.h"
#include "code/Code0022_Smt4.h"

extern "C" {

typedef struct GaugeOwner0022e0b0 {
    /* 0x0000 */ s16 value;
    /* 0x0002 */ u8 unk0002[0xa004];
    /* 0xa006 */ s16 maxValue;
} GaugeOwner0022e0b0;

/* Gauge fill in percent: 0 when the maximum is not positive, at least 1 while the value is positive, at most 100. */
u8 gaugePercent(GaugeOwner0022e0b0 *owner)
{
    s32 value = owner->value;
    u8 percent;

    if (owner->maxValue <= 0) {
        percent = 0;
    } else {
        percent = value * 100 / owner->maxValue;
        if (percent == 0) {
            if (value > 0) {
                percent = 1;
            }
        } else if (percent > 100) {
            percent = 100;
        }
    }
    return percent;
}

} /* extern "C" */
