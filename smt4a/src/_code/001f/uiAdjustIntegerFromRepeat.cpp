#include "common.h"

extern "C" {
s32 padButtonRepeat(u32 button);

u32 uiAdjustIntegerFromRepeat(s32 *value, s32 minimum, s32 maximum, s32 wrap, s32 mode, s32 step)
{
    s32 initial = *value;
    s32 direction = 0;
    switch (mode) {
    case 0:
        if (padButtonRepeat(5)) {
            direction = -1;
        } else if (padButtonRepeat(6)) {
            direction = 1;
        }
        break;
    case 2:
        if (padButtonRepeat(5)) {
            direction = 1;
        } else if (padButtonRepeat(6)) {
            direction = -1;
        }
        break;
    case 1:
        if (padButtonRepeat(4)) {
            direction = -1;
        } else if (padButtonRepeat(3)) {
            direction = 1;
        }
        break;
    case 3:
        if (padButtonRepeat(4)) {
            direction = 1;
        } else if (padButtonRepeat(3)) {
            direction = -1;
        }
        break;
    }
    if (direction == 0) {
        return 0;
    }

    s32 range = maximum - minimum;
    s32 next = direction * step + initial;
    if (next < minimum) {
        if (wrap && range != -1) {
            do {
                next = next + range + 1;
            } while (next < minimum);
        } else {
            next = minimum;
        }
    } else if (next > maximum) {
        if (wrap && range != -1) {
            do {
                next = next - range - 1;
            } while (next > maximum);
        } else {
            next = maximum;
        }
    }
    if (*value != next) {
        *value = next;
        return 1;
    }
    return ~0u;
}
}
