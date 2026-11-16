#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 id;
} Record;

extern int partySlotIsOccupied(Record *record);
extern Record *partyGetSlot(u16 index);

/* Finds the record (of the 12) with id `id` that partySlotIsOccupied accepts; NULL when there is none. */
Record *recordFindAcceptedById(u32 id)
{
    s32 i;

    for (i = 0; i < 12; i++) {
        Record *record = partyGetSlot((u16)i);

        if (partySlotIsOccupied(record) != 0 && record->id == id) {
            return record;
        }
    }
    return NULL;
}

}
