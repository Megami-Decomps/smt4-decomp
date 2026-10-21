#include "common.h"

struct PartySlotRecord {
    /* 0x00 */ u8 unk00[0x66];
    /* 0x66 */ u8 id;
    /* 0x67 */ u8 unk67[0xc5];
};

struct PartySlotTable {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ PartySlotRecord slots[24];
};

extern "C" PartySlotTable* gameGetSlotTable(void);

// Find a party slot by record identity or by its byte-sized id.
extern "C" s32 partySlotFindIndex(const PartySlotRecord* record)
{
    if (record != NULL) {
        PartySlotRecord* slot = gameGetSlotTable()->slots;
        for (s32 index = 0; index < 24; ++index, ++slot) {
            if (slot == record || slot->id == record->id)
                return index;
        }
    }
    return -1;
}
