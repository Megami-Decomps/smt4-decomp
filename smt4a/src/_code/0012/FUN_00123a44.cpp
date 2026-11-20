#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u32 value;
} Entry;

Entry *objectRegistryGetOwnerForCurrent(void);

/* Returns the field at 0x0C of the entry objectRegistryGetOwnerForCurrent returns. */
u32 FUN_00123a44(void)
{
    Entry *entry = objectRegistryGetOwnerForCurrent();
    return entry->value;
}

} /* extern "C" */
