#include "common.h"

extern "C" {

int FUN_0021f538(void);
void *FUN_002f5068(u8 *list);
int asdCecReadOutboxMessage(void *entry, u32 key);

/* When FUN_0021f538 allows it, looks up the entry for `key`; if that fails, retries with no entry. */
void resourceLookupWithFallback(u8 *owner, u32 key)
{
    if (FUN_0021f538() != 0) {
        if (asdCecReadOutboxMessage(FUN_002f5068(owner + 0xc), key) == 0) {
            asdCecReadOutboxMessage(NULL, key);
        }
    }
}

} /* extern "C" */
