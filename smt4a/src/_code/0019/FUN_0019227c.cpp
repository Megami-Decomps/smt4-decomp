#include "gamedata/Table8Record.h"

extern "C" {

/* The add-on system's downloadable table-eight records. */
typedef struct Table8Collection {
    /* 0x000 */ u8 unk000[0x3A8];
    /* 0x3A8 */ s32 count;
    /* 0x3AC */ Table8Record *records;
} Table8Collection;

/* Return the table-eight record with the given id, or NULL. */
Table8Record *FUN_0019227c(Table8Collection *table, u32 id)
{
    for (s32 i = 0; i < table->count; i++) {
        if (table->records[i].id == id) {
            return &table->records[i];
        }
    }
    return NULL;
}

} /* extern "C" */
