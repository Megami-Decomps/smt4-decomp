/* NON_MATCHING: close: retail pairs the state/zero stores into strd and allocates record/index to r7/r6 (built r5/r7); all fields and control flow match */
#include "common.h"

/* A unit record as stored in the party tables (0x18C bytes; only the fields this code reads are named). */
struct UnitRecordIn {
    /* 0x000 */ u8 flags;           /* bit 0: player */
    /* 0x001 */ u8 unk001[7];
    /* 0x008 */ s16 unitIndex;
    /* 0x00A */ u8 unk00A[0x142];
    /* 0x14C */ u32 reset14C[13];   /* cleared on entry */
    /* 0x180 */ u32 reset180;
    /* 0x184 */ u32 reset184;
    /* 0x188 */ u8 unk188[4];
};

/* A spawned unit slot. */
struct UnitSlot {
    /* 0x000 */ u32 state;
    /* 0x004 */ u32 unk004;
    /* 0x008 */ s16 index;
    /* 0x00A */ u8 unk00A[0x64];
    /* 0x06E */ u16 tableId;
    /* 0x070 */ u8 unk070[2];
    /* 0x072 */ u8 block72[0x3C];
    /* 0x0AE */ u8 unk0AE[0x1E];
    /* 0x0CC */ UnitRecordIn record;
    /* 0x258 */ u32 cleared258[8];
    /* 0x278 */ void *playerData;
    /* 0x27C */ void *unitRecord;
    /* 0x280 */ struct SlotTableData *slotTable;
    /* 0x284 */ void *tableRecord;
};

/* The per-index entry of the world's slot table (0x114 bytes). */
struct SlotTableEntry {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 flags;
    /* 0x54 */ u8 unk54[0xC];
    /* 0x60 */ u16 tableId;
    /* 0x62 */ s16 index;
    /* 0x64 */ u8 unk64[0x110 - 0x64 + 4];
};
typedef char SlotTableEntrySize[sizeof(SlotTableEntry) == 0x114 ? 1 : -1];

/* The slot-table block inside the game's slot table. */
struct SlotTableData {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ u16 flags;
};

struct SlotWorld {
    /* 0x0000 */ u8 unk0000[0x1E98];
    /* 0x1E98 */ SlotTableEntry *entries;
    /* 0x1E9C */ u8 unk1E9C[0x128];
    /* 0x1FC4 */ u16 playerCount;
    /* 0x1FC6 */ u16 tableCount;
    /* 0x1FC8 */ u8 unk1FC8[0x29FC];
    /* 0x49C4 */ u8 slotTableReady;
};

extern "C" {

UnitSlot *FUN_002561d8(SlotWorld *world, s32 index, u32 arg);
UnitSlot *FUN_0033a5a0(void);
void __aeabi_memcpy4(void *dest, const void *src, s32 size);
void rt_memclr(void *dest, s32 size);
void *gameGetPlayerData(void);
void *gameGetUnitRecord(s32 index);
u8 *gameGetSlotTable(void);
void *dataTable00FindById(u32 id);
s32 FUN_003be758(UnitSlot *slot);
void FUN_002550d8(s32 index, s32 mode, s32 arg, s32 zero);

/* Spawns a unit slot of the given kind (0: party record, 1: table unit, 2: slot-table unit) from `record` at `index`. */
void FUN_00255e38(SlotWorld *world, UnitRecordIn *record, s32 kind, s32 index, s32 extra)
{
    UnitSlot *slot = NULL;
    SlotTableEntry *entry;

    record->reset184 = 0;
    record->reset14C[0] = 0;
    record->reset14C[1] = 0;
    record->reset14C[2] = 0;
    record->reset14C[3] = 0;
    record->reset14C[4] = 0;
    record->reset14C[5] = 0;
    record->reset14C[6] = 0;
    record->reset14C[7] = 0;
    record->reset14C[8] = 0;
    record->reset14C[9] = 0;
    record->reset14C[10] = 0;
    record->reset14C[11] = 0;
    record->reset14C[12] = 0;
    record->reset180 = 0;
    if (kind == 0) {
        slot = FUN_002561d8(world, index, 0);
        __aeabi_memcpy4(&slot->record, record, sizeof(UnitRecordIn));
        if ((slot->record.flags & 1) != 0) {
            slot->state = 7;
            slot->unk004 = 0;
            slot->playerData = gameGetPlayerData();
        } else {
            slot->state = 9;
            slot->unk004 = 0;
            slot->unitRecord = gameGetUnitRecord(slot->record.unitIndex);
        }
        world->playerCount++;
    } else if (kind == 1) {
        slot = FUN_0033a5a0();
        __aeabi_memcpy4(&slot->record, record, sizeof(UnitRecordIn));
        slot->state = 0x11;
        slot->unk004 = 0;
        slot->tableRecord = dataTable00FindById(*(u16 *)((u8 *)slot + 0xCE));
        if (*((u8 *)slot + 0x1A0) == 1) {
            slot->state |= 0x100;
        }
        world->tableCount++;
    } else if (kind == 2) {
        u8 *table;
        SlotTableData *data;

        slot = FUN_002561d8(world, index, 0);
        __aeabi_memcpy4(&slot->record, record, sizeof(UnitRecordIn));
        slot->state = 0x21;
        slot->unk004 = 0;
        table = gameGetSlotTable();
        data = (SlotTableData *)(table + 0x910C);
        slot->slotTable = data;
        if ((data->flags & 2) != 0) {
            world->slotTableReady = 0;
        } else {
            world->slotTableReady = 1;
        }
    }
    slot->index = index;
    rt_memclr(slot->block72, 0x3C);
    *(u32 *)((u8 *)slot + 0xAE) = 0;
    *(u32 *)((u8 *)slot + 0xB2) = 0;
    *(u32 *)((u8 *)slot + 0xB6) = 0;
    *(u32 *)((u8 *)slot + 0xBA) = 0;
    *(u16 *)((u8 *)slot + 0xBE) = 0;
    slot->cleared258[0] = 0;
    slot->cleared258[1] = 0;
    slot->cleared258[2] = 0;
    slot->cleared258[3] = 0;
    slot->cleared258[4] = 0;
    slot->cleared258[5] = 0;
    slot->cleared258[6] = 0;
    slot->cleared258[7] = 0;
    if (extra != 0) {
        slot->state |= 0x20000000;
    }
    entry = &world->entries[index];
    entry->flags = 0x81;
    if (index < 4) {
        entry->flags = 0x281;
    } else if (index < 0x36) {
        entry->flags = 0x481;
    } else {
        entry->flags = 0x881;
    }
    entry->tableId = slot->tableId;
    entry->index = index;
    FUN_002550d8(index, 12, FUN_003be758(slot), 0);
}

} /* extern "C" */
