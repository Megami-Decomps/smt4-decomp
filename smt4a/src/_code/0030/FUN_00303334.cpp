#include "common.h"

extern "C" {

typedef struct Table {
    u32 words[6]; /* 0x00 */
} Table;

extern void listInitEmpty(Table *table, int mode);

/* Clears the table, then runs the initializer in mode 1. */
Table *FUN_00303334(Table *table)
{
    int i;
    for (i = 0; i < 6; i++) {
        table->words[i] = 0;
    }
    listInitEmpty(table, 1);
    return table;
}

} /* extern "C" */
