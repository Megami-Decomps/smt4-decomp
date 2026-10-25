/* NON_MATCHING: register allocation: retail keeps 0xff in ip and 0x500 in r3 (no push {r4}), this build needs r4 for 0xff */
#include "common.h"

extern "C" {

typedef struct TableEntry {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ u8 unk02;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ u8 unk04;
    /* 0x05 */ u8 unk05;
    /* 0x06 */ u16 unk06;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u8 unk0c;
    /* 0x0D */ u8 unk0d;
    /* 0x0E */ u16 unk0e;
    /* 0x10 */ u8 unk10[2];
    /* 0x12 */ u16 unk12;
    /* 0x14 */ u8 unk14[2];
    /* 0x16 */ u16 unk16;
    /* 0x18 */ u8 unk18[4];
    /* 0x1C */ u32 link;
} TableEntry; /* 0x20 */

typedef struct Table {
    /* 0x0000 */ u16 head;
    /* 0x0002 */ u8 unk0002[2];
    /* 0x0004 */ TableEntry entries[0x500];
    /* 0xA004 */ u8 sentinel;
    /* 0xA005 */ u8 unkA005;
    /* 0xA006 */ u16 count;
} Table;

/* Clears the table: every entry's fields, the head and the free-list state. */
void FUN_0022e2fc(void *memory)
{
    Table *table = static_cast<Table *>(memory);
    s32 i;

    table->sentinel = 0xFF;
    table->head = 0;
    table->count = 0x500;
    for (i = 0; i < 0x500; i++) {
        table->entries[i].unk00 = 0;
        table->entries[i].unk02 = 0;
        table->entries[i].unk0c = 0;
        table->entries[i].unk03 = 0;
        table->entries[i].unk04 = 0;
        table->entries[i].unk06 = 0;
        table->entries[i].unk0e = 0;
        table->entries[i].unk12 = 0;
        table->entries[i].link = 0;
    }
}

} /* extern "C" */
