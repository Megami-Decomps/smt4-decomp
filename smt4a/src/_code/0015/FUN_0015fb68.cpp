#include "common.h"
#include "code/Code0015.h"
#include "gamedata/DataTableAccess.h"

extern "C" {

typedef struct Table {
    /* 0x00000 */ u8 unk00000[0x21589];
    /* 0x21589 */ u8 flag;
} Table;

Table *gameDataBlocksGetSaveData(void);

/* Returns the byte at 0x21589 of the table gameDataBlocksGetSaveData returns. */
u8 FUN_0015fb68(void)
{
    Table *table = gameDataBlocksGetSaveData();
    return table->flag;
}

} /* extern "C" */
