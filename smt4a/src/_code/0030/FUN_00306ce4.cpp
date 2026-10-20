/* NON_MATCHING: retail reads the exhausted flag with `movs r3, #59; ldrsb r2, [r3, r4]` (signed byte); armcc emits `ldrb`. */
#include "common.h"

extern "C" {

typedef struct Stream {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s8 failed;
    /* 0x05 */ u8 unk05[0x36];
    /* 0x3B */ s8 exhausted;
} Stream;

extern void streamExtractU8(Stream *stream, u8 *out);
extern void streamReadWord(Stream *stream, s32 *out);

/* Reads a byte into `out` and, if the stream hasn't failed, a word that is discarded. */
void FUN_00306ce4(Stream *stream, u8 *out)
{
    s32 word;

    out[4] = 0;
    word = 0;
    if (stream->exhausted == 0) {
        streamExtractU8(stream, out + 4);
        if (stream->failed == 0) {
            streamReadWord(stream, &word);
        }
    }
}

}
