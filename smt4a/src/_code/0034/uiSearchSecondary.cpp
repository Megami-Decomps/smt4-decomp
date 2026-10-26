#include "common.h"

extern "C" {

struct SearchState {
    /* 0x00 */ u8 primary[0x28];
    /* 0x28 */ u8 secondary[0x3a];
    /* 0x62 */ u8 disabled;
};
s32 objectGetLengthField(void *state);

s32 uiSearchSecondary(SearchState *state)
{
    if (state->disabled != 0) {
        return 0;
    }
    return objectGetLengthField(state->secondary);
}

} /* extern "C" */
