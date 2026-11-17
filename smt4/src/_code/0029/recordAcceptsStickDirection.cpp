#include "common.h"
#include "gamedata/EquipmentRecord.h"

extern "C" {

extern int padGetStickHorizontalDirection(void);

/* 1 when the stick direction padGetStickHorizontalDirection reports is one the entry accepts. */
u32 recordAcceptsStickDirection(int id)
{
    u8 directions;
    int direction;
    EquipmentRecord *entry;

    direction = padGetStickHorizontalDirection();
    entry = itemTableGetEquipmentRecord(id);
    if (entry == NULL) {
        return 0;
    }
    directions = entry->alignments;
    if ((((directions & 1) != 0 && (direction == 4)) ||
         (((directions & 4) != 0 && (direction == 5)))) || (((directions & 2) != 0 && (direction == 1)))) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
