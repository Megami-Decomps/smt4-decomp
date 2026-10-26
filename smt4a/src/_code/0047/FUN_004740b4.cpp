/* NON_MATCHING: The compiler merges repeated resource guards and omits retail accessor hints. */
#include "gamedata/TableEntryCache.h"
#include "gamedata/DataTable.h"
#include "util/dataTableFileGetTable.h"
extern "C" {
void* asdOperatorNewE(u32);
EntryState* __aeabi_vec_ctor_nocookie_nodtor(EntryState*, void (*)(EntryState*), u32, u32);

// Loads the table and constructs a parallel state entry for every table record.
void FUN_004740b4(TableEntryCache* cache)
{
    if (cache->source.enabled != 0 && cache->source.resource != NULL) {
        dataTableGetEntries(dataTableFileGetTable((u32)(cache->source.resource), 0));
    }
    if (cache->source.enabled != 0 && cache->source.resource != NULL) {
        u32 count = dataTableGetCount(dataTableFileGetTable((u32)(cache->source.resource), 0));
        if (count != 0) {
            EntryState* states = (EntryState*)asdOperatorNewE(count * sizeof(EntryState));
            if (states != NULL) {
                states = __aeabi_vec_ctor_nocookie_nodtor(states, entryStateClear,
                                                        sizeof(EntryState), count);
            }
            cache->states = states;
        }
    }
}
}
