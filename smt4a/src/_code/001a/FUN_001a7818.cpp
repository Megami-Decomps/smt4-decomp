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
    /* 0x000 */ u8 unk000[0x258];
    /* 0x258 */ Provider *provider;
} Owner;

/* Returns the address five words into the provider's block, treating a block without bit 30 set as missing (NULL + 20). */
u32 *FUN_001a7818(Owner *owner)
{
    u32 *block;
    Provider *provider = owner->provider;

    block = provider->vtbl->getBlock(provider);
    if ((block != NULL) && ((*block & 0x40000000) == 0)) {
        block = NULL;
    }
    return block + 5;
}

} /* extern "C" */
