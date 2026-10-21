#include "common.h"

extern "C" {

struct StateOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *handle;
};
extern StateOwner g_lazyScriptState;
s32 scrRunOpcodesStub(void *handle);

s32 engineIsResourceStateTwo(void)
{
    return scrRunOpcodesStub(g_lazyScriptState.handle) == 2;
}

} /* extern "C" */
