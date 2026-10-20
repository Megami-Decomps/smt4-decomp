/* Passes the state block at +0x2460 of the global object on (a tail call), or returns 1 when there is no object. */
#include "common.h"

extern "C" {

struct Global003adc3c {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u8 *object;
};

extern Global003adc3c DAT_00439c88;

u32 FUN_0028c600(u8 *state);

u32 stateBlockCall(void)
{
    u8 *object = DAT_00439c88.object;

    if (object == NULL) {
        return 1;
    }
    return FUN_0028c600(object + 0x2460);
}

}
