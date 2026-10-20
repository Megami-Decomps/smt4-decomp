#include "common.h"

extern "C" {

struct Provider;
typedef struct ProviderVtbl {
    /* 0x00 */ void *unk00[5];
    /* 0x14 */ u32 *(*getEntry)(struct Provider *provider);
} ProviderVtbl;

typedef struct Provider {
    /* 0x0 */ ProviderVtbl *vtbl;
} Provider;

typedef struct Owner {
    /* 0x000 */ u8 unk000[0x258];
    /* 0x258 */ Provider *provider;
} Owner;

/* Returns the payload (entry + 0x14) of the provider's entry when its flag 0x40000000 is set. */
u32 *FUN_0014cfe8(Owner *owner)
{
    Provider *provider = owner->provider;
    u32 *entry = provider->vtbl->getEntry(provider);

    if (entry != NULL && (*entry & 0x40000000) == 0) {
        entry = NULL;
    }
    return entry + 5;
}

} /* extern "C" */
