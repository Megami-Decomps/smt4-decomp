#include "common.h"

extern "C" {

typedef struct Inventory {
    /* 0x0000 */ u8 unk0000[0x910B];
    /* 0x910B */ u8 capacity;
} Inventory;

int scrSetResult(int value);
int scrGetArg(int index);
Inventory *gameGetSlotTable(void);
int gameCountUnits(void);

/* Script command: passes to scrSetResult whether script argument 0 fits in the remaining capacity (capacity - used). */
u32 scrFitsSlotCapacity(void)
{
    int needed = scrGetArg(0);

    scrSetResult(needed <= (int)(gameGetSlotTable()->capacity - gameCountUnits()));
    return 1;
}

} /* extern "C" */
