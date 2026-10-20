/* NON_MATCHING: the final size check loads size/pos into swapped registers (pos in r1, start + size in r0). */
#include "shard/Reader.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 flag;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u8 field08[8];
    /* 0x10 */ u8 field10[8];
} Record;

int FUN_002ee9da(Reader *reader);
int FUN_002fbc1a(Reader *reader, void *out);
int FUN_00300900(Reader *reader, void *out);
int FUN_00300934(Reader *reader, void *out);

/* Reads a record from `reader`; on success checks that it consumed exactly the declared size and marks the reader finished. */
void FUN_0011786c(Reader *reader, Record *record)
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
    FUN_002fbc1a(reader, record->field08);
    if (reader->error != 0) {
        return;
    }
    FUN_002fbc1a(reader, record->field10);
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
