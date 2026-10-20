#include "common.h"

extern "C" {

typedef struct Inventory {
    /* 0x0000 */ u8 unk0000[0x1CA3];
    /* 0x1CA3 */ u8 capacity;
} Inventory;

int gameSlotTableFindFree(void);
Inventory *gameGetSlotTable(void);
int scrSetResult(int value);
int scrGetArg(u32 index);

/* Script command: passes to scrSetResult whether script argument 0 fits in the remaining capacity (capacity - used). */
u32 FUN_0038d7fc(void)
{
    int needed = scrGetArg(0);

    scrSetResult(needed <= (int)(gameGetSlotTable()->capacity - gameSlotTableFindFree()));
    return 1;
}

} /* extern "C" */
