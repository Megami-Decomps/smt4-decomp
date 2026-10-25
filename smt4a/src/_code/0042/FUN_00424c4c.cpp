/* NON_MATCHING: only the order of `mov r1, i` / `add r2, &record` before the FUN_0051415c call differs. */
#include "record/RecordTable.h"

extern "C" {
u8 readInnerWord6(u32 file, u32 *value);
void FUN_0051415c(u32 file, u32 index, u32 *record);

/* Reads every record from the file into the table's per-kind arrays, flagging overflows and missing kinds. */
void FUN_00424c4c(RecordTable *table)
{
    u32 count;
    readInnerWord6(*table->file, &count);
    if (count != 0) {
        for (u32 i = 0; i < count; i++) {
            RecordBuffer record;
            FUN_0051415c(*table->file, i, &record.kind);
            if (record.kind == 0) {
                if (table->kind0Count == RECORD_CAPACITY) {
                    table->state = 7;
                    table->errors |= 2;
                } else if (table->kind0Count < RECORD_CAPACITY) {
                    table->kind0Reserved[table->kind0Count] = 0;
                    table->kind0[table->kind0Count] = record.kind0;
                    table->kind0Source[table->kind0Count] = i;
                }
                table->kind0Count++;
            } else if (record.kind == 1) {
                if (table->kind1Count == RECORD_CAPACITY) {
                    table->state = 7;
                    table->errors |= 8;
                } else if (table->kind1Count < RECORD_CAPACITY) {
                    table->kind1Reserved[table->kind1Count] = 0;
                    table->kind1[table->kind1Count] = record.kind1;
                    table->kind1Source[table->kind1Count] = i;
                }
                table->kind1Count++;
            } else if (record.kind == 2) {
                if (table->kind2Count == RECORD_CAPACITY) {
                    table->state = 7;
                    table->errors |= 0x20;
                } else if (table->kind2Count < RECORD_CAPACITY) {
                    table->kind2[table->kind2Count] = record.kind2;
                    table->kind2Source[table->kind2Count] = i;
                }
                table->kind2Count++;
            } else {
                table->state = 7;
                table->errors |= 0x40;
            }
        }
        if (table->kind0Count == 0)
            table->errors |= 1;
        if (table->kind1Count == 0)
            table->errors |= 4;
        if (table->kind2Count == 0)
            table->errors |= 0x10;
        table->loaded = 1;
    }
}
}
