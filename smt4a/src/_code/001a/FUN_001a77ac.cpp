#include "common.h"

extern "C" {

typedef struct Provider Provider;
typedef struct ProviderVtbl {
    /* 0x00 */ void *unk00[5];
    /* 0x14 */ u32 *(*getBlock)(Provider *provider);
} ProviderVtbl;
struct Provider {
    /* 0x00 */ const ProviderVtbl *vtbl;
};

typedef struct Owner {
    /* 0x000 */ u8 unk000[0x260];
    /* 0x260 */ Provider *provider;
} Owner;

/* Reads four words out of the provider's block (NULL-ed when bit 29 is not set) into the non-NULL outputs. */
void FUN_001a77ac(Owner *owner, u32 *out4, u32 *out3, u32 *out1, u32 *out2)
{
    u32 *block;

    block = owner->provider->vtbl->getBlock(owner->provider);
    if ((block != NULL) && ((*block & 0x20000000) == 0)) {
        block = NULL;
    }
    if (out4 != NULL) {
        *out4 = block[4];
    }
    if (out3 != NULL) {
        *out3 = block[3];
    }
    if (out1 != NULL) {
        *out1 = block[1];
    }
    if (out2 != NULL) {
        *out2 = block[2];
    }
}

} /* extern "C" */
