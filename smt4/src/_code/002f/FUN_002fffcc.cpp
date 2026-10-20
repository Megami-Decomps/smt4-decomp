#include "common.h"

extern "C" {

typedef struct Inventory {
    /* 0x0000 */ u8 unk0000[0x910B];
    /* 0x910B */ u8 capacity;
} Inventory;

int scrSetResult(int value);
int scrGetArg(int index);
Inventory *FUN_002a8764(void);
int FUN_002a8778(void);

/* Script command: passes to scrSetResult whether script argument 0 fits in the remaining capacity (capacity - used). */
u32 FUN_002fffcc(void)
{
    int needed = scrGetArg(0);

    scrSetResult(needed <= (int)(FUN_002a8764()->capacity - FUN_002a8778()));
    return 1;
}

} /* extern "C" */
