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

/* Returns the address two words into the provider's block, treating a block without bit 29 set as missing (NULL + 8). */
u32 *FUN_001a777c(Owner *owner)
{
    u32 *block;

    block = owner->provider->vtbl->getBlock(owner->provider);
    if ((block != NULL) && ((*block & 0x20000000) == 0)) {
        block = NULL;
    }
    return block + 2;
}

} /* extern "C" */
