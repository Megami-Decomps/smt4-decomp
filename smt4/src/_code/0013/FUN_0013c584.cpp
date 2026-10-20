/* NON_MATCHING: temporaries after the rt_memclr call land in r0/r1 where retail uses r1/r2. */
#include "common.h"

extern "C" {

/* Record being initialised: two zeroed words and halves, a 0xed8-byte table, flags, a 0x89-byte buffer and a sub-object. */
typedef struct {
    u32 unk00;          /* 0x000 */
    u32 unk04;          /* 0x004 */
    u16 unk08;          /* 0x008 */
    u16 unk0a;          /* 0x00a */
    u8 table[0xed8];    /* 0x00c */
    u8 enabled;         /* 0xee4 */
    u8 unkEE5;          /* 0xee5 */
    u8 unkEE6;          /* 0xee6 */
    u8 buffer[0x89];    /* 0xee7 */
    u32 index;          /* 0xf70 */
    u16 unkF74;         /* 0xf74 */
    u8 sub[1];          /* 0xf76 */
} Record;

int wordTripleClear(u8 *sub);
int rt_memclr(u8 *buffer, int size);
int memClear(u8 *buffer, int size);

/* Resets the record to its initial state: tables cleared, index = -1. */
void FUN_0013c584(Record *record)
{
    record->unk00 = 0;
    record->unk04 = 0;
    record->unk08 = 0;
    record->unk0a = 0;
    memClear(record->table, 0xed8);
    record->enabled = 1;
    record->unkEE5 = 0;
    record->unkEE6 = 0;
    rt_memclr(record->buffer, 0x89);
    record->index = -1;
    record->unkF74 = 0;
    wordTripleClear(record->sub);
}

} /* extern "C" */
