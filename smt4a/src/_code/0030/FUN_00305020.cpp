/* NON_MATCHING: The final size guard loads the declared size into r0 before computing the end, rather than using r1 after the position load. */
#include "shard/Reader.h"

namespace {
struct SerializedTripleRecord {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 flag;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u8 first[8];
    /* 0x10 */ u8 second[8];
    /* 0x18 */ u8 third[8];
    /* 0x20 */ u8 final[12];
};
}
extern "C" {
void streamExtractU8(Reader *reader, void *output);
void streamReadWord(Reader *reader, void *output);
void FUN_002fbc1a(Reader *reader, void *output);
void FUN_00307316(Reader *reader, void *output);
s32 streamSeek(Reader *reader, u32 position);

/* Reads the record fields and seeks to its declared end, retaining the reader's sticky error state. */
void FUN_00305020(Reader *reader, SerializedTripleRecord *record)
{
    record->flag = 0;
    s8 headerless = reader->headerless;
    u32 size = 0;
    if (headerless == 0) {
        streamExtractU8(reader, &record->flag);
        if (reader->error) return;
        streamReadWord(reader, &size);
        if (reader->error) return;
    }
    u32 start = reader->pos;
    if (reader->error) return;
    FUN_002fbc1a(reader, record->first);
    if (reader->error) return;
    FUN_002fbc1a(reader, record->second);
    if (reader->error) return;
    FUN_002fbc1a(reader, record->third);
    if (reader->error) return;
    FUN_00307316(reader, record->final);
    if (reader->error) return;
    if (headerless != 0) return;
    if (reader->pos > start + size || streamSeek(reader, start + size) == 0) {
        reader->error = 1;
    }
}
}
