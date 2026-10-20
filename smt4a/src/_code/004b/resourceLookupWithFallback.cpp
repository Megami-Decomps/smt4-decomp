#include "common.h"

extern "C" {

int FUN_0031670c(void);
void *FUN_0037a7d8(u8 *list);
int asdCecReadOutboxMessage(void *entry, u32 key);

/* When FUN_0031670c allows it, looks up the entry for `key`; if that fails, retries with no entry. */
void resourceLookupWithFallback(u8 *owner, u32 key)
{
    if (FUN_0031670c() != 0) {
        if (asdCecReadOutboxMessage(FUN_0037a7d8(owner + 0xc), key) == 0) {
            asdCecReadOutboxMessage(NULL, key);
        }
    }
}

} /* extern "C" */
