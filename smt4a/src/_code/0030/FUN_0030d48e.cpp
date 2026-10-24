#include "common.h"

struct SockAddrRef {
    /* 0x00 */ void *ref;
    /* 0x04 */ u8 addr[0x20];
};

extern "C" {

u8 *onlineSockAddrConstruct(u8 *addr);
void sharedRefAddRef(void *ref);
void onlineSockAddrCopy(u8 *dest, const u8 *source);

/* Copy-constructs a shared reference plus socket address pair and returns it. */
SockAddrRef *FUN_0030d48e(SockAddrRef *self, const SockAddrRef *source)
{
    void *ref = source->ref;
    SockAddrRef *result = (SockAddrRef *)(onlineSockAddrConstruct(self->addr) - 4);

    result->ref = ref;
    sharedRefAddRef(ref);
    onlineSockAddrCopy(result->addr, source->addr);
    return result;
}

} /* extern "C" */
