/* NON_MATCHING: The decoded value, storage result, and copied argument use different stack slots and saved registers. */
#include "shard/Shard0051.h"
#include "sys/VariantToken.h"

namespace {
struct VariantStorageEntry {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Variant value;
};
struct VariantStorageOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 storage[1];
};
}
extern "C" {
void FUN_004352b0(void **value, VariantToken **cursor);
void FUN_00515618(VariantStorageEntry **entry, void *storage);
void variantSetByteB(Variant *variant, void **value, u32 type);

/* Inserts the decoded value into variant storage and advances the token cursor on success. */
u32 FUN_00436938(VariantToken **cursor, void **output, VariantStorageOwner **owner)
{
    void *value;
    FUN_004352b0(&value, cursor);
    if (value != NULL) {
        VariantStorageEntry *entry;
        FUN_00515618(&entry, (*owner)->storage);
        if (entry != NULL) {
            void *storedValue = value;
            variantSetByteB(&entry->value, &storedValue, (*cursor)->type);
            *output = value;
            *cursor = (*cursor)->next;
            return 0;
        }
    }
    return 2;
}
}
