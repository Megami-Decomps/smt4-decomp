#include "common.h"

extern "C" {

typedef struct Inventory {
    /* 0x0000 */ u8 unk0000[0x1CA3];
    /* 0x1CA3 */ u8 capacity;
} Inventory;

int FUN_001b347c(void);
Inventory *FUN_001ab888(void);
int scrSetResult(int value);
int scrGetArg(u32 index);

/* Script command: passes to scrSetResult whether script argument 0 fits in the remaining capacity (capacity - used). */
u32 FUN_0038d7fc(void)
{
    int needed = scrGetArg(0);

    scrSetResult(needed <= (int)(FUN_001ab888()->capacity - FUN_001b347c()));
    return 1;
}

} /* extern "C" */
