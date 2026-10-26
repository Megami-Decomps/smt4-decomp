#include "common.h"

extern "C" {

typedef struct Table {
    u32 words[6]; /* 0x00 */
} Table;

extern void listInitEmpty2(Table *table, int mode);

/* Clears the table, then runs the initializer in mode 1. */
Table *FUN_002f8728(Table *table)
{
    int i;
    for (i = 0; i < 6; i++) {
        table->words[i] = 0;
    }
    listInitEmpty2(table, 1);
    return table;
}

} /* extern "C" */
