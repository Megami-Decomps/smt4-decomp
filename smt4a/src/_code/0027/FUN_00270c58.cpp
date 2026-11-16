#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"

/* Payload of a kind-5 sequence request (22 bytes are sent). */
struct SequenceKindFivePacket {
    u8 mode;              // 0x00
    u8 unk01;
    u16 id;               // 0x02
    s16 initialValues[4]; // 0x04: -1 = unset
    u8 flags;             // 0x0c
    u8 unk0d;
    u16 values[4];        // 0x0e
};

extern "C" {

/* Requests sequence kind 5 for `id` in mode 1, with cleared values and unset initial values. */
u32 FUN_00270c58(u16 id)
{
    SequenceKindFivePacket packet;
    packet.flags = 0;
    for (s32 i = 0; i < 4; i++) {
        packet.values[i] = 0;
        packet.initialValues[i] = -1;
    }
    packet.mode = 1;
    packet.id = id;
    asdSequenceRequest(5, &packet, sizeof(packet));
    return 1;
}
}
