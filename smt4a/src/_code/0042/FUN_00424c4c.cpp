/* NON_MATCHING: only the order of `mov r1, i` / `add r2, &record` before the FUN_0051415c call differs. */
#include "common.h"
#include <stddef.h>

/* Records read from the file, by kind (kind 0 is the largest). */
struct RecordKind0 {
    u32 kind;
    u32 words[9];
};
struct RecordKind1 {
    u32 kind;
    u32 words[3];
};
struct RecordKind2 {
    u32 kind;
    u32 word;
};
union RecordBuffer {
    u32 kind;
    RecordKind0 kind0;
    RecordKind1 kind1;
    RecordKind2 kind2;
};

#define RECORD_CAPACITY 8

/* The record table loader: parsed records of three kinds, each with the file index they came from. */
struct RecordTable {
    /* 0x000 */ u8 unk000[0xC];
    /* 0x00C */ u32 state;
    /* 0x010 */ u8 unk010;
    /* 0x011 */ u8 loaded;
    /* 0x012 */ u8 unk012[6];
    /* 0x018 */ u32 *file;
    /* 0x01C */ u8 unk01C[0x1A8];
    /* 0x1C4 */ s32 kind2Count;
    /* 0x1C8 */ u8 unk1C8[0xC0];
    /* 0x288 */ RecordKind2 kind2[RECORD_CAPACITY];
    /* 0x2C8 */ u32 kind2Source[RECORD_CAPACITY];
    /* 0x2E8 */ s32 kind0Count;
    /* 0x2EC */ u32 kind0Reserved[RECORD_CAPACITY];
    /* 0x30C */ RecordKind0 kind0[RECORD_CAPACITY];
    /* 0x44C */ u32 kind0Source[RECORD_CAPACITY];
    /* 0x46C */ u8 unk46C[0x18];
    /* 0x484 */ s32 kind1Count;
    /* 0x488 */ u32 kind1Reserved[RECORD_CAPACITY];
    /* 0x4A8 */ RecordKind1 kind1[RECORD_CAPACITY];
    /* 0x528 */ u32 kind1Source[RECORD_CAPACITY];
    /* 0x548 */ u8 unk548[8];
    /* 0x550 */ u32 errors;
};
typedef char RecordTableOffsetCheck[
    offsetof(RecordTable, kind2) == 0x288 && offsetof(RecordTable, kind0) == 0x30C &&
    offsetof(RecordTable, kind1) == 0x4A8 && offsetof(RecordTable, errors) == 0x550 &&
    offsetof(RecordTable, kind1Count) == 0x484 ? 1 : -1];

extern "C" {
s32 readInnerWord6(u32 file, u32 *value);
s32 FUN_0051415c(u32 file, u32 index, u32 *record);

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
