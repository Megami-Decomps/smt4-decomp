#include "common.h"

extern "C" {

/* Raises the lower limits to 0x28/0x24 and lowers the upper limits (indices 3..5) to 0x91. */
void nn_hid_CTR_AnalogStickClamper_ClampValueOfClamp(s16 *clamp)
{
    if (clamp[0] < 0x28) {
        clamp[0] = 0x28;
    }
    if (clamp[1] < 0x24) {
        clamp[1] = 0x24;
    }
    if (clamp[3] > 0x91) {
        clamp[3] = 0x91;
    }
    if (clamp[4] > 0x91) {
        clamp[4] = 0x91;
    }
    if (clamp[5] > 0x91) {
        clamp[5] = 0x91;
    }
}

} /* extern "C" */
