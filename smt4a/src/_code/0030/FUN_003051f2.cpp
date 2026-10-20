/* NON_MATCHING: the final size check loads size/pos into swapped registers (pos in r1, start + size in r0). */
/* NON_MATCHING: the final size check loads size/pos into swapped registers (pos in r1, start + size in r0). */
#include "shard/Reader.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 flag;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 field08;
    /* 0x0C */ u8 field0C[8];
    /* 0x14 */ u8 field14[12];
    /* 0x20 */ u8 field20[12];
    /* 0x2C */ u8 field2C[12];
} Record;

int FUN_002ee9da(Reader *reader);
int FUN_002fbc1a(Reader *reader, void *out);
int FUN_00300900(Reader *reader, void *out);
int FUN_00300934(Reader *reader, void *out);
int FUN_003072ae(Reader *reader, void *out);
int FUN_00307316(Reader *reader, void *out);

/* Reads a record from `reader`; on success checks that it consumed exactly the declared size and marks the reader finished. */
void FUN_003051f2(Reader *reader, Record *record)
{
    s32 size;
    u32 start;
    s8 headerless;

    record->flag = 0;
    headerless = reader->headerless;
    size = 0;
    if (headerless == 0) {
        FUN_00300900(reader, &record->flag);
        if (reader->error != 0) {
            return;
        }
        FUN_00300934(reader, &size);
        if (reader->error != 0) {
            return;
        }
    }
    start = reader->pos;
    if (reader->error != 0) {
        return;
    }
    FUN_00300934(reader, &record->field08);
    if (reader->error != 0) {
        return;
    }
    FUN_002fbc1a(reader, record->field0C);
    if (reader->error != 0) {
        return;
    }
    FUN_003072ae(reader, record->field14);
    if (reader->error != 0) {
        return;
    }
    FUN_003072ae(reader, record->field20);
    if (reader->error != 0) {
        return;
    }
    FUN_00307316(reader, record->field2C);
    if (reader->error != 0) {
        return;
    }
    if (headerless != 0) {
        return;
    }
    if (reader->pos > start + size || FUN_002ee9da(reader) == 0) {
        reader->error = 1;
    }
}

} /* extern "C" */
