/* NON_MATCHING: the final position/limit compare uses r0/r1 swapped (retail loads the length into r1, the position into r0). */
#include "sys/StreamReader.h"

extern "C" {

typedef struct {
    u8 unk00[4];
    u8 unk04;       /* 0x04 */
    u8 unk05[3];
    u8 field08[4];  /* 0x08 */
    u8 field0c[12]; /* 0x0c */
    u8 field18;     /* 0x18 */
} Record;

int FUN_00305298(StreamReader *reader, u8 *out);

int streamExtractU8(StreamReader *reader, u8 *out);
int streamReadWord(StreamReader *reader, int *out);
int streamSeek(StreamReader *reader);

/* Reads one length-prefixed record; sets the reader's error flag when the declared length overruns. */
void FUN_00304dfc(StreamReader *reader, Record *record)
{
    int length;
    s8 skipHeader;
    u32 start;

    record->unk04 = 0;
    skipHeader = reader->skipHeader;
    length = 0;
    if (skipHeader == 0) {
        streamExtractU8(reader, &record->unk04);
        if (reader->error != 0) {
            return;
        }
        streamReadWord(reader, &length);
        if (reader->error != 0) {
            return;
        }
    }
    start = reader->position;
    if (reader->error != 0) {
        return;
    }
    streamReadWord(reader, (int *)record->field08);
    if (reader->error != 0) {
        return;
    }
    FUN_00305298(reader, record->field0c);
    if (reader->error != 0) {
        return;
    }
    streamExtractU8(reader, &record->field18);
    if (reader->error != 0) {
        return;
    }
    if (skipHeader == 0 && (reader->position > start + length || streamSeek(reader) == 0)) {
        reader->error = 1;
    }
}

} /* extern "C" */
