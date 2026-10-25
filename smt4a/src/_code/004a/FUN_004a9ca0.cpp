#include "battle/btlUI.h"

struct BtlUnitLinkA {
    u8 unk00[0x62];  // 0x00
    u16 id;          // 0x62
};

struct BtlUnitEntryA {
    u8 unk000[0x3FC];    // 0x000
    BtlUnitLinkA *link;  // 0x3FC
    u8 unk400[8];        // 0x400
};

struct BtlStateUnitsA {
    u8 unk0000[0x1FFC];   // 0x0000
    BtlUnitEntryA *units; // 0x1FFC
};

extern "C" {

void __aeabi_memcpy4(void *destination, const void *source, u32 size);

extern BtlUiGlobalsA g_btlUi;

/* Stores a unit record in the UI slot of the battle unit it names (first four units). */
void FUN_004a9ca0(u32 unused, BtlUiUnitRecordA *record)
{
    BtlUiA *ui = g_btlUi.ui;

    for (s32 i = 0; i < 4; i++) {
        BtlUnitEntryA *unit = &((BtlStateUnitsA *)ui->owner)->units[i];

        if (unit != NULL && unit->link != NULL && unit->link->id == record->unitId) {
            __aeabi_memcpy4(&ui->unitRecords.records[i], record, sizeof(BtlUiUnitRecordA));
            return;
        }
    }
}

} /* extern "C" */
