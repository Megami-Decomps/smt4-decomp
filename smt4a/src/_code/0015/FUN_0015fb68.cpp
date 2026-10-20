#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x00000 */ u8 unk00000[0x21589];
    /* 0x21589 */ u8 flag;
} Table;

Table *FUN_0014af84(void);

/* Returns the byte at 0x21589 of the table FUN_0014af84 returns. */
u8 FUN_0015fb68(void)
{
    Table *table = FUN_0014af84();
    return table->flag;
}

} /* extern "C" */
