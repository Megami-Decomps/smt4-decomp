#include "gamedata/KeyedCatalog.h"

extern "C" {

struct CatalogRecord;
const CatalogRecord *dataFindKeyedRecordWithOverrides(u32 id);

/* The catalog's name occupies the first bytes of its keyed record. */
const char *FUN_00186f54(u32 id)
{
    return reinterpret_cast<const char *>(dataFindKeyedRecordWithOverrides(id));
}

} /* extern "C" */
