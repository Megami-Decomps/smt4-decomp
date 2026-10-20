/* NON_MATCHING: instruction scheduling only: retail loads `length` straight into r1 and `pos` second; built computes `end` first */
/* Reads one record from `reader` into `out`: a flag and length header, then the payload fields; marks the reader done if the length checks out. */
#include "common.h"

extern "C" {

typedef struct Reader {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 done;         /* nonzero once reading must stop */
    /* 0x05 */ u8 unk05[7];
    /* 0x0C */ u32 pos;
    /* 0x10 */ u8 unk10[0x2B];
    /* 0x3B */ s8 headerless;   /* record has no flag/length header */
} Reader;

typedef struct Record {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 flag;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u8 field8[8];
    /* 0x10 */ u8 field10[8];
    /* 0x18 */ u8 field18[8];
} Record;

extern void streamExtractU8(Reader *reader, u8 *out);
extern void streamReadWord(Reader *reader, void *out);
extern void readerRead8(Reader *reader, void *out);
extern s32 streamSeek(Reader *reader, u32 end);

void FUN_0011b28c(Reader *reader, Record *out)
{
    s8 headerless;
    s32 length;
    u32 start;
    u32 end;

    out->flag = 0;
    headerless = reader->headerless;
    length = 0;
    if (headerless == 0) {
        streamExtractU8(reader, &out->flag);
        if (reader->done != 0) {
            return;
        }
        streamReadWord(reader, &length);
        if (reader->done != 0) {
            return;
        }
    }
    start = reader->pos;
    if (reader->done != 0) {
        return;
    }
    readerRead8(reader, out->field8);
    if (reader->done != 0) {
        return;
    }
    streamReadWord(reader, out->field10);
    if (reader->done != 0) {
        return;
    }
    readerRead8(reader, out->field18);
    if (reader->done != 0) {
        return;
    }
    if (headerless != 0) {
        return;
    }
    end = start + length;
    if (reader->pos > end || streamSeek(reader, end) == 0) {
        reader->done = 1;
    }
}

}
