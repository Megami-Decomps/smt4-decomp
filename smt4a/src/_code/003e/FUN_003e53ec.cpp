#include "common.h"

extern "C" {

typedef struct SlotTable {
    /* 0x0000 */ u8 unk0000[0x2C4E];
    /* 0x2C4E */ u16 value;
} SlotTable;

extern s32 gameFlagIsSet(u32 flag);
extern SlotTable *gameGetSlotTable(void);

/* The slot table's value when flag 0x533 is set; 0 otherwise. */
u16 FUN_003e53ec(void)
{
    if (gameFlagIsSet(0x533) != 0) {
        return gameGetSlotTable()->value;
    }
    return 0;
}

} /* extern "C" */
