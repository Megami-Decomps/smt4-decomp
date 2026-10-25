/* NON_MATCHING: field copies corrected; slot-store scheduling and duplicated learned-bit store tail still differ. */
#include "common.h"
#include "AsdSDK/AsdMemUtil.h"
#include "shard/gameDataSetItemFlag.h"

/* A unit record (0x604 bytes, accessed fields). */
struct UnitRecord {
    u16 stat[7];            // 0x00..0x0C
    u16 current0E;          // 0x0E
    u16 current10;          // 0x10
    u8 unk12[0x0A];
    u16 base1C;             // 0x1C
    u16 base1E;             // 0x1E
    u16 base20;             // 0x20
    u16 base22;             // 0x22
    u16 base24;             // 0x24
    u16 base26;             // 0x26
    u16 base28;             // 0x28
    u16 current2A;          // 0x2A
    u16 current2C;          // 0x2C
    u8 unk2E[2];
    u32 extra30;            // 0x30
    u16 resist[8];          // 0x34
    u8 unk44[2];
    u16 id;                 // 0x46
    u8 level;               // 0x48
    u8 unk49;
    u8 slot;                // 0x4A
    u8 unk4B;
    u8 learnedBits[0x5B5];  // 0x4C
    u8 unk601;              // 0x601: high nibble bits of the copy's flags
    u8 unk602[2];
};

/* The fixed devil data record (accessed fields). */
struct DevilRecord {
    u8 unk00[3];
    u8 level;               // 0x03
    u8 unk04[0x10];
    u16 stat[8];            // 0x14..0x22
    u8 unk24[0x14];
    u16 learnIndex;         // 0x38
    u8 unk3A[2];
    u16 resist[8];          // 0x3C
};

/* The copy of a unit's saved devil data. */
struct DevilCopy {
    u16 level;              // 0x00
    u16 stat[6];            // 0x02..0x0C -> unit stats 2.. (see FUN_001a7dbc)
    u16 stat0E;             // 0x0E
    u16 current[3];         // 0x10..0x14
    u8 flags;               // 0x16: bits 2..5 are copied to unit->unk601
    u8 unk17;
    u16 first;              // 0x18
    u16 second;             // 0x1A
    u16 resist[8];          // 0x1C
    u16 unk2C[2];
    u32 extra30;            // 0x30
};

extern "C" {
s8 *gameGetSlotTable(void);
void gameDataSlotSetFlag(u16 id, s32 value);
DevilRecord *devilGetRecord(u16 id);
void gameRecordCopy(u16 id, DevilCopy *copy);
void unitRecalculateEffectiveStats(UnitRecord *unit);
void FUN_0029bde4(UnitRecord *unit);

/* Initialise a unit record for a devil: from the data record (mode 0/3) or from a saved copy (mode 1). */
void FUN_001a7dbc(UnitRecord *unit, u8 slot, u32 id, s32 mode)
{
    memClear(unit, 0x604);
    unit->id = id;
    unit->slot = slot;
    if (mode != 3) {
        s8 *slots = gameGetSlotTable() + 0x90F0;
        for (s32 i = 0; i < 24; i++) {
            if (slots[i] < 0) {
                slots[i] = slot;
                break;
            }
        }
        gameDataSetItemFlag(id, 1);
        gameDataSlotSetFlag(id, 1);
    }
    DevilRecord *record = devilGetRecord(id);
    switch (mode) {
    case 0:
    case 3: {
        unit->level = record->level;
        unit->stat[0] = record->stat[0];
        unit->stat[1] = record->stat[1];
        unit->stat[2] = record->stat[3];
        unit->stat[4] = record->stat[5];
        unit->stat[5] = record->stat[6];
        unit->stat[6] = record->stat[7];
        unit->stat[3] = record->stat[4];
        unit->base1C = 0;
        unit->base1E = 0;
        unit->base20 = record->stat[3];
        unit->base24 = record->stat[5];
        unit->base26 = record->stat[6];
        unit->base28 = record->stat[7];
        unit->base22 = record->stat[4];
        for (s32 i = 0; i < 8; i++)
            unit->resist[i] = record->resist[i];
        unit->learnedBits[record->learnIndex >> 3] |= 1 << (record->learnIndex & 7);
        break;
    }
    case 1: {
        DevilCopy copy;
        gameRecordCopy(id, &copy);
        unit->level = copy.level;
        unit->stat[0] = copy.first;
        unit->stat[1] = copy.second;
        unit->stat[2] = copy.stat[0];
        unit->stat[4] = copy.stat[2];
        unit->stat[5] = copy.stat[3];
        unit->stat[6] = copy.stat[4];
        unit->stat[3] = copy.stat[1];
        unit->base1C = 0;
        unit->base1E = 0;
        unit->base20 = copy.stat[5];
        unit->base24 = copy.current[0];
        unit->base26 = copy.current[1];
        unit->base28 = copy.current[2];
        unit->base22 = copy.stat0E;
        for (s32 i = 0; i < 8; i++)
            unit->resist[i] = copy.resist[i];
        unit->extra30 = copy.extra30;
        unit->unk601 = (static_cast<u32>(copy.flags) << 26) >> 28;
        unit->learnedBits[record->learnIndex >> 3] |= 1 << (record->learnIndex & 7);
        break;
    }
    }
    unitRecalculateEffectiveStats(unit);
    unit->current2A = unit->current0E;
    unit->current2C = unit->current10;
    FUN_0029bde4(unit);
}
}
