#include "common.h"
#include "code/Code002a_Smt4.h"

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
    /* 0x000 */ u8 unk000[0x260];
    /* 0x260 */ Provider *provider;
} Owner;

/* Reads four words of the provider's entry (when its flag 0x20000000 is set) into the non-NULL outputs. */
void FUN_002a8638(Owner *owner, u32 *a, u32 *b, u32 *c, u32 *d)
{
    u32 *entry = owner->provider->vtbl->getEntry(owner->provider);

    if (entry != NULL && (*entry & 0x20000000) == 0) {
        entry = NULL;
    }
    if (a != NULL) {
        *a = entry[4];
    }
    if (b != NULL) {
        *b = entry[3];
    }
    if (c != NULL) {
        *c = entry[1];
    }
    if (d != NULL) {
        *d = entry[2];
    }
}

} /* extern "C" */
