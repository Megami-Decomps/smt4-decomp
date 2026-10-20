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

/* Returns the payload (entry + 8) of the provider's entry when its flag 0x20000000 is set. */
u32 *FUN_002a86a4(Owner *owner)
{
    u32 *entry = owner->provider->vtbl->getEntry(owner->provider);

    if (entry != NULL && (*entry & 0x20000000) == 0) {
        entry = NULL;
    }
    return entry + 2;
}

} /* extern "C" */
