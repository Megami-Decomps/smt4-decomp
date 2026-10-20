/* NON_MATCHING: the zero shared by the store and `limit = 0` is copied from i (mov r3, r1) before the first compare in retail; built materialises it later */
#include "common.h"

extern "C" {

typedef struct ClearList {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 *count;     /* number of valid entries */
    /* 0x08 */ u32 *entries;
    /* 0x0c */ u8 enabled;
} ClearList;

/* Zeroes the entries while the list is enabled. */
void FUN_001b1e88(ClearList *list)
{
    u32 i = 0;
    u32 limit;

    if (list->enabled != 0 && i < *list->count) {
        do {
            limit = 0;
            list->entries[i] = 0;
            i++;
            if (list->enabled != 0) {
                limit = *list->count;
            }
        } while (limit > i);
    }
}

} /* extern "C" */
