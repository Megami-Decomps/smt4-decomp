#include "common.h"
#include "code/Code0023_Smt4.h"

extern "C" {

struct Provider;
typedef struct ProviderVtbl {
    /* 0x00 */ void *unk00[4];
    /* 0x10 */ u32 *(*getEntry)(struct Provider *provider);
} ProviderVtbl;

typedef struct Provider {
    /* 0x0 */ ProviderVtbl *vtbl;
} Provider;

typedef struct Owner {
    /* 0x000 */ u8 unk000[0x258];
    /* 0x258 */ Provider *provider;
} Owner;

/* Copies a 3-word vector into the provider's entry (when its flag 0x20000000 is set). */
void providerEntrySetVector(Owner *owner, u32 *vector)
{
    u32 *entry = owner->provider->vtbl->getEntry(owner->provider);
    u32 y;
    u32 z;

    if (entry != NULL && (*entry & 0x20000000) == 0) {
        entry = NULL;
    }
    y = vector[1];
    z = vector[2];
    entry[2] = *vector;
    entry[3] = y;
    entry[4] = z;
}

} /* extern "C" */
