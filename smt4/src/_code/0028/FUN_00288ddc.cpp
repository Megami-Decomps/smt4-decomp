#include "common.h"
#include "util/CalleeContracts.h"

extern "C" {

extern void *gameGetUnitRecord(void);
extern u8 *gameGetSlotTable(void);
extern void *gameGetPlayerData(void);

typedef struct Pad {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s16 unk1C;
} Pad;

typedef struct Unit {
    /* 0x00 */ u8 unk00[0xE];
    /* 0x0E */ s16 unk0E;
    /* 0x10 */ u8 unk10[0x36];
    /* 0x46 */ u16 id;
} Unit;

typedef struct Party {
    /* 0x0000 */ u8 unk0000[0x90F0];
    /* 0x90F0 */ s8 slots[0x18];
} Party;

int FUN_00288ddc(int limit, u32 id)
{
    Pad *pad;
    Party *party;
    Unit *unit;
    int i;

    if ((int)id < 0) {
        pad = (Pad *)gameGetPlayerData();
        if (pad->unk1C < limit) {
            return 1;
        }
    } else {
        party = (Party *)gameGetSlotTable();
        i = 0;
        do {
            if ((((party->slots[i] >= 0) && (unit = (Unit *)gameGetUnitRecord(), unit != NULL)) &&
                 (unit->id == id)) && (unit->unk0E < limit)) {
                return 1;
            }
            i = i + 1;
        } while (i < 0x18);
    }
    return 0;
}

} /* extern "C" */
