/* NON_MATCHING: payload length reads now go through the real getter objectGetLengthField (matches retail); retail also sets the output length through a second one-instruction setter (mov r0,r5; str r1,[r0,#16]) and if-converts the marker clamp differently. */
#include "shard/Shard0031.h"

/* Only the six I/O fields of the existing zlib stream are accessed here. */
struct OnlineCompressionStreamPrefix {
    u8 *input;
    u32 availableInput;
    u32 totalInput;
    u8 *output;
    u32 availableOutput;
    u32 totalOutput;
};
struct OnlineCompressionWorkPrefix {
    u8 unk00[0x38];
    OnlineCompressionStreamPrefix stream;
};
struct OnlineCompressionOwner {
    u8 unk000[0x120];
    OnlineCompressionWorkPrefix *work;
};
typedef char OnlineCompressionOffsets[
    offsetof(OnlineCompressionOwner, work) == 0x120 &&
    offsetof(OnlineCompressionWorkPrefix, stream) == 0x38 &&
    offsetof(OnlineCompressionStreamPrefix, totalOutput) == 0x14 ? 1 : -1];
extern "C" {
s32 FUN_001274fc(OnlineCompressionStreamPrefix *);
s32 FUN_00126d1c(OnlineCompressionStreamPrefix *, s32);
s32 rangeObjRemaining(RangeObject *);
void FUN_002fa010(RangeObject *, u32);
u8 *onlineBufferGetData(RangeObject *);
void rt_memcpy(void *, const void *, u32);
/* The length of a range object's payload (a one-instruction getter the linker inlines). */
u32 objectGetLengthField(const RangeObject *);

// Prefix compressed data with its expansion estimate, or zero followed by the original bytes.
u32 FUN_004327f8(OnlineCompressionOwner *owner, RangeObject *input, RangeObject *output)
{
    FUN_001274fc(&owner->work->stream);
    if (static_cast<u32>(rangeObjRemaining(output)) < objectGetLengthField(input) + 1)
        FUN_002fa010(output, objectGetLengthField(input) + 1);
    owner->work->stream.availableOutput = rangeObjRemaining(output);
    owner->work->stream.output = onlineBufferGetData(output);
    owner->work->stream.availableInput = objectGetLengthField(input);
    owner->work->stream.input = onlineBufferGetData(input);
    ++owner->work->stream.output;
    --owner->work->stream.availableOutput;
    if (FUN_00126d1c(&owner->work->stream, 4) == 1 &&
        owner->work->stream.totalOutput < objectGetLengthField(input)) {
        f32 expansion = static_cast<f32>(objectGetLengthField(input)) /
                        static_cast<f32>(owner->work->stream.totalOutput) + 1.0f;
        u8 marker = expansion <= 255.0f ? static_cast<u8>(static_cast<u32>(expansion)) : 255;
        output->payload.length = owner->work->stream.totalOutput + 1;
        *onlineBufferGetData(output) = marker;
    } else {
        u8 *destination = output->payload.base + output->pos;
        output->payload.length = objectGetLengthField(input) + 1;
        *destination = 0;
        u32 length = objectGetLengthField(input);
        u8 *source = onlineBufferGetData(input);
        rt_memcpy(destination + 1, source, length);
    }
    return 0;
}
}
