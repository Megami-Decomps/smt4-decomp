/* NON_MATCHING: the Thumb data-pointer addition uses reversed commutative source registers; all other instructions match retail. */
#include "sys/StreamReader.h"

struct OnlineBuffer;
struct OnlineByteSequence;

extern "C" {
void FUN_002eea8a(StreamReader* reader, u16* value);
bool streamReaderHasBytes(StreamReader* reader, u32 size);
void _ZN9Obj55b1045resetEv(OnlineByteSequence* output);
OnlineBuffer* streamWriterFinish(StreamReader* reader);
const u8* onlineBufferGetData(OnlineBuffer* buffer);
void FUN_002f4cd6(OnlineByteSequence* output, const u8* data, u32 size);
void streamSeek(StreamReader* reader, u32 position);

// Reads a halfword-length-prefixed byte sequence and advances the stream on success.
bool FUN_0030363c(StreamReader* reader, OnlineByteSequence* output)
{
    u16 length;
    FUN_002eea8a(reader, &length);
    if (!streamReaderHasBytes(reader, length)) {
        return false;
    }
    _ZN9Obj55b1045resetEv(output);
    if (length != 0) {
        const u8* data = onlineBufferGetData(streamWriterFinish(reader));
        FUN_002f4cd6(output, data + reader->position, length);
        streamSeek(reader, reader->position + length);
    }
    return true;
}
}
