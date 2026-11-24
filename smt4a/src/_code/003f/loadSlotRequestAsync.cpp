/* NON_MATCHING: retail tail-merges the two call arms (one `bl asdLoadFileAsyncDefault` after per-arm argument setup)
 * and hoists no common setup; a plain static request helper called in both arms matches, but nothing besides the
 * score supports it. */
#include "code/Code0016.h"
#include "gamedata/DataTableSlots.h"
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

void mapIfStoreRequestResult(u32 result, AsyncRequestResult *request, u32 detail);

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
            asdLoadFileAsyncDefault((u32)slot->path, (u32)&slot->data, 1, (u32)mapIfStoreRequestResult, (u32)slot);
        } else {
            asdLoadFileAsyncDefault((u32)slot->path, (u32)&slot->data, 0, (u32)mapIfStoreRequestResult, (u32)slot);
        }
    }
    return 1;
}

} /* extern "C" */
