/* NON_MATCHING: final position/limit compare uses r0/r1 swapped (loads are scheduled the same). */
#include "sys/StreamReader.h"

extern "C" {

/* Record read from the stream: six fields at 4-12 byte spacing. */
typedef struct {
    u8 unk00[4];
    u8 unk04;       /* 0x04 */
    u8 unk05[3];
    u8 field08[8];  /* 0x08 */
    u8 field10[8];  /* 0x10 */
    u8 field18[12]; /* 0x18 */
    u8 field24[12]; /* 0x24 */
    u8 field30[12]; /* 0x30 */
} Record;

int FUN_002fbc1a(StreamReader *reader, void *out);
int FUN_00300900(StreamReader *reader, u8 *out);
int FUN_00300934(StreamReader *reader, int *out);
int FUN_00303608(StreamReader *reader, void *out);
int FUN_003072ae(StreamReader *reader, void *out);
int FUN_00307316(StreamReader *reader, void *out);
int FUN_002ee9da(StreamReader *reader);

/* Reads one record from `reader`; sets the reader's error flag when the declared length overruns. */
void FUN_00304f72(StreamReader *reader, Record *record)
{
    s8 skipHeader;
    u32 start;
    int length;

    record->unk04 = 0;
    skipHeader = reader->skipHeader;
    length = 0;
    if (skipHeader == 0) {
        FUN_00300900(reader, &record->unk04);
        if (reader->error != 0) {
            return;
        }
        FUN_00300934(reader, &length);
        if (reader->error != 0) {
            return;
        }
    }
    start = reader->position;
    if (reader->error != 0) {
        return;
    }
    FUN_00303608(reader, record->field08);
    if (reader->error != 0) {
        return;
    }
    FUN_002fbc1a(reader, record->field10);
    if (reader->error != 0) {
        return;
    }
    FUN_003072ae(reader, record->field18);
    if (reader->error != 0) {
        return;
    }
    FUN_003072ae(reader, record->field24);
    if (reader->error != 0) {
        return;
    }
    FUN_00307316(reader, record->field30);
    if (reader->error != 0) {
        return;
    }
    if (skipHeader == 0 && !(reader->position <= start + length && FUN_002ee9da(reader) != 0)) {
        reader->error = 1;
    }
}

} /* extern "C" */
