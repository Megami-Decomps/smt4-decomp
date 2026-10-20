/* NON_MATCHING: frame only: retail spills just r2/r3 with `push {r2,r3,r4,lr}` and passes sp directly; built pushes r0-r3 and copies the message to sp+8 */
/* Lets FUN_002e7516 inspect the 8-byte message (passed by value), then appends its first 4 bytes to the object's stream; returns 1. */
#include "common.h"

extern "C" {

typedef struct Stream {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 sink;
} Stream;

typedef struct Message {
    /* 0x00 */ s32 word0;
    /* 0x04 */ u32 word1;
} Message;

extern void strAssign(u32 sink, Message *data, s32 size, u32 flags);
extern void FUN_002e7516(u32 value, Message *data);

u32 streamWriterWriteU32(Stream *stream, u32 *value, Message message)
{
    FUN_002e7516(*value, &message);
    strAssign(stream->sink, &message, 4, 0xFFFFFFFF);
    return 1;
}

}
