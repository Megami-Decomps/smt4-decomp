/* NON_MATCHING: timestamp loads/multiply allocation and sequence byte swap differ; -O2 candidate. */
#include "common.h"

struct PacketDecoder {
    u64 timestamp;                 // 0x0000
    u64 timestampStep;             // 0x0008
    u8 unk0010[0x1470];
    u32 previousHeader;            // 0x1480
    u32 sequence;                  // 0x1484
    u8 unk1488[5];
    u8 headerFlag;                 // 0x148d
    u8 unk148e;
    u8 pending;                    // 0x148f
    u8 unk1490;
    u8 hasSequence;                // 0x1491
};

extern "C" {
int FUN_004adb08(PacketDecoder *decoder);
int FUN_004af1c0(PacketDecoder *decoder);

static __inline void resetPacketHeader(PacketDecoder *decoder)
{
    decoder->timestamp = 0;
    decoder->timestampStep = 0;
    decoder->previousHeader = 0x40;
    decoder->sequence = 0x10000;
    decoder->pending = 0;
    decoder->hasSequence = 0;
}

// Read the packet flags, advance the timestamp, and check an optional sequence.
u32 moviePacketReadHeader(PacketDecoder *decoder, const u8 *data, u32 *cursor, u32 length)
{
    if (*cursor >= length) {
        resetPacketHeader(decoder);
        return 0x43;
    }
    u8 flags = data[(*cursor)++];
    decoder->hasSequence = (flags & 2) >> 1;
    decoder->headerFlag = flags & 1;
    u32 previous = decoder->previousHeader;
    u32 header = flags >> 2;
    if (previous == 0x40) {
        decoder->previousHeader = header;
    } else if (previous != header) {
        u64 step = decoder->timestampStep;
        if (step == 0) {
            resetPacketHeader(decoder);
            return 0x46;
        }
        decoder->timestamp += step * (u64)(header - previous);
        decoder->previousHeader = header;
        if (!FUN_004adb08(decoder))
            return 0x44;
    }
    if (decoder->hasSequence) {
        u32 sequence = *(const u16 *)(data + *cursor);
        *cursor += 2;
        sequence = ((sequence & 0xff) << 8) | (sequence >> 8);
        if (*cursor > length) {
            resetPacketHeader(decoder);
            return 0x43;
        }
        u32 expected = decoder->sequence == 0x10000 ? sequence : (u16)(decoder->sequence + 1);
        if (expected != sequence) {
            decoder->sequence = 0x10000;
            return FUN_004af1c0(decoder) ? 0x50 : 0x44;
        }
        decoder->sequence = sequence;
    }
    return 0;
}
}
