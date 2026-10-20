#include "common.h"

extern "C" {

int mwmomobiclipDecoderRelease(u32 decoder);
extern u8 DAT_00420ad0;

typedef struct Wrapper {
    /* 0x0 */ const void *vtbl;
    /* 0x4 */ u32 decoder;
} Wrapper;

/* Destructor-style: installs the vtable and releases the decoder. */
Wrapper *mobiclipDecoderWrapperDestroy(Wrapper *wrapper)
{
    wrapper->vtbl = &DAT_00420ad0;
    mwmomobiclipDecoderRelease(wrapper->decoder);
    return wrapper;
}

} /* extern "C" */
