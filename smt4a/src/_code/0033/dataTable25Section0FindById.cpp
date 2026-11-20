#include "gamedata/DataTable.h"
#include "shard/W6_W6Match1_Table25Record.h"

extern "C" {

/* Returns the record of data table 0x25 section 0 whose id is `id`, NULL when there is none. */
Table25Record *dataTable25Section0FindById(s32 id)
{
    void *section = dataTableGet(0x25, 0);
    Table25Record *record = (Table25Record *)dataTableGetEntries(section);
    u32 count = dataTableGetCount(section);

    for (u32 index = 0; index < count; ++index, ++record) {
        if (record->id == id) {
            return record;
        }
    }
    return NULL;
}

} /* extern "C" */
