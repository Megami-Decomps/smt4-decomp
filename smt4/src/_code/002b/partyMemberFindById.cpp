#include "common.h"
#include "shard/partyMemberFindById.h"

extern "C" {

extern u8 *gameGetUnitRecord(int index);
extern s8 *gameGetSlotTable(void);
extern int gameCountUnits(void);

typedef struct Unit {
    /* 0x00 */ u8 unk00[0x46];
    /* 0x46 */ u16 id;
} Unit;

/* Finds the party member whose unit id is `id`, or 0. */
int partyMemberFindById(u32 id)
{
    int i = 0;
    int count;
    int slot;
    Unit *unit;

    count = gameCountUnits();
    if (0 < count) {
        do {
            slot = gameGetSlotTable()[i + 0x90f0];
            unit = (Unit *)gameGetUnitRecord(slot);
            if (unit->id == id) {
                return (int)unit;
            }
            i = i + 1;
            count = gameCountUnits();
        } while (i < count);
    }
    return 0;
}

} /* extern "C" */
