#include "common.h"

extern "C" {

extern u8 *FUN_002a8740(int index);
extern s8 *FUN_002a8764(void);
extern int FUN_002a8778(void);

typedef struct Unit {
    /* 0x00 */ u8 unk00[0x46];
    /* 0x46 */ u16 id;
} Unit;

/* Finds the party member whose unit id is `id`, or 0. */
int FUN_002b066c(u32 id)
{
    int i = 0;
    int count;
    int slot;
    Unit *unit;

    count = FUN_002a8778();
    if (0 < count) {
        do {
            slot = FUN_002a8764()[i + 0x90f0];
            unit = (Unit *)FUN_002a8740(slot);
            if (unit->id == id) {
                return (int)unit;
            }
            i = i + 1;
            count = FUN_002a8778();
        } while (i < count);
    }
    return 0;
}

} /* extern "C" */
