#include "gamedata/MapSystemTable.h"

extern "C" {

/* Entry `index` of the table, or NULL past its end. */
static MapSystemMapRecord *tableEntry(void *table, u32 index)
{
    MapSystemMapRecord *entries = mapSystemMapRecords(table);
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    return NULL;
}

/* Name of map `id` (MapSystemTable.tbb table 2) (0 when the table ends first); id 10 read as kind 9 or 10 has its own fixed name. */
const char *dataTableEntryNameById(s32 id, s32 kind)
{
    s32 i;

    for (i = 0; i < (s32)dataTableGetCount(dataTableGet(0x2e, 2)); i++) {
        MapSystemMapRecord *entry = tableEntry(dataTableGet(0x2e, 2), i);

        if (entry->mapId == -1) {
            return NULL;
        }
        if (entry->mapId == id) {
            if (entry->mapId == 10 && (kind == 9 || kind == 10)) {
                return "\x82r\x82\x8b\x82\x99\x81@\x82s\x82\x8f\x82\x97\x82\x85\x82\x92";
            }
            return entry->name;
        }
    }
    return NULL;
}

} /* extern "C" */
