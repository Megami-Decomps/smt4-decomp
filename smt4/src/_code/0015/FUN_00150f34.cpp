/* NON_MATCHING: retail copies the zero it shares between the store and the disabled-list count from the loop index (mov r3, r1) before the first compare; built materialises it later (movhi r3, #0) */
#include "common.h"

extern "C" {

typedef struct ClearList {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 *count;     /* number of valid entries */
    /* 0x08 */ u32 *entries;
    /* 0x0c */ u8 enabled;
} ClearList;

/* The number of valid entries; 0 while the list is disabled. */
static inline u32 clearListCount(ClearList *list)
{
    u32 count = 0;

    if (list->enabled != 0) {
        count = *list->count;
    }
    return count;
}

/* Zeroes the entries while the list is enabled. */
void FUN_00150f34(ClearList *list)
{
    for (u32 i = 0; i < clearListCount(list); i++) {
        list->entries[i] = 0;
    }
}

} /* extern "C" */
