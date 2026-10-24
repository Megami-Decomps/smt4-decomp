/* The record table loader's object (Shin Megami Tensei IV: Apocalypse). */
#ifndef RECORD_RECORDTABLE_H
#define RECORD_RECORDTABLE_H

#include "common.h"
#include <stddef.h>

#define RECORD_CAPACITY 8

/* The loaded data of a kind-2 record: its 16-byte header and a copy of the rest. */
struct RecordPayload {
    u32 header[4];
    void *body;
    u32 unk14;
};

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
    /* 0x1C8 */ RecordPayload payloads[RECORD_CAPACITY]; /* the data of each kind-2 record */
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
    sizeof(RecordPayload) == 0x18 && offsetof(RecordTable, payloads) == 0x1C8 &&
    offsetof(RecordTable, kind2) == 0x288 && offsetof(RecordTable, kind0) == 0x30C &&
    offsetof(RecordTable, kind1) == 0x4A8 && offsetof(RecordTable, errors) == 0x550 &&
    offsetof(RecordTable, kind1Count) == 0x484 ? 1 : -1];

#endif
