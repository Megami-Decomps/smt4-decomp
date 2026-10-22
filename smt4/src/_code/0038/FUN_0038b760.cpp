/* NON_MATCHING: The compiler merges repeated resource guards and omits retail accessor hints. */
#include "gamedata/TableEntryCache.h"
#include "gamedata/DataTable.h"
extern "C" {
void* dataTableFileGetTable(void*, u32);
void* asdOperatorNewB(u32);
EntryState* __aeabi_vec_ctor_nocookie_nodtor(EntryState*, void (*)(EntryState*), u32, u32);

// Loads the table and constructs a parallel state entry for every table record.
void FUN_0038b760(TableEntryCache* cache)
{
    if (cache->source.enabled != 0 && cache->source.resource != NULL) {
        dataTableGetEntries(dataTableFileGetTable(cache->source.resource, 0));
    }
    if (cache->source.enabled != 0 && cache->source.resource != NULL) {
        u32 count = dataTableGetCount(dataTableFileGetTable(cache->source.resource, 0));
        if (count != 0) {
            EntryState* states = (EntryState*)asdOperatorNewB(count * sizeof(EntryState));
            if (states != NULL) {
                states = __aeabi_vec_ctor_nocookie_nodtor(states, entryStateClear,
                                                        sizeof(EntryState), count);
            }
            cache->states = states;
        }
    }
}
}
