#include "common.h"

extern "C" {

int allocatorFreeBlock(u32 decoder);
extern u8 DAT_00420a88;

typedef struct Wrapper {
    /* 0x0 */ const void *vtbl;
    /* 0x4 */ u32 decoder;
} Wrapper;

/* Destructor-style: installs the vtable and releases the decoder. */
Wrapper *FUN_00351b70(Wrapper *wrapper)
{
    wrapper->vtbl = &DAT_00420a88;
    allocatorFreeBlock(wrapper->decoder);
    return wrapper;
}

} /* extern "C" */
