/* NON_MATCHING: retail tail-merges the two call arms (one `bl FUN_00168750` after per-arm argument setup) and hoists no common setup; armcc here emits the hoisted prefix and trailing hint nops. */
#include "common.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"

extern "C" {

#define DATA_TABLE_SLOTS 0x50

typedef struct DataTableSlot {
    /* 0x00 */ u32 request;
    /* 0x04 */ void *data;      /* loaded table, NULL when free */
    /* 0x08 */ u32 unk08;
    /* 0x0c */ u8 locked;       /* non-zero keeps the table loaded */
    /* 0x0d */ u8 unk0d[3];
} DataTableSlot;

extern DataTableSlot g_dataTableSlots[DATA_TABLE_SLOTS]; /* 0x5e2214 */

void mapIfStoreRequestResult(void);
void FUN_00168750(u32 request, void **result, s32 async, void (*callback)(void), DataTableSlot *slot);

/* Starts loading data table slot `index` (asynchronously when `async`); false for a bad or locked slot. */
u32 loadSlotRequestAsync(u32 index, s32 async)
{
    if (index >= DATA_TABLE_SLOTS) {
        return 0;
    }
    DataTableSlot *slot = &g_dataTableSlots[index];
    if (slot->data == NULL) {
        if (slot->locked != 0) {
            return 0;
        }
        if (async != 0) {
            FUN_00168750(slot->request, &slot->data, 1, mapIfStoreRequestResult, slot);
        } else {
            FUN_00168750(slot->request, &slot->data, 0, mapIfStoreRequestResult, slot);
        }
    }
    return 1;
}

} /* extern "C" */
