/* NON_MATCHING: independent zero/sentinel packet stores and the mode constant use different scheduling/registers. */
#include "common.h"

struct SequenceKindFivePacket {
    u8 mode; // 0x00
    u8 unk01;
    u16 id; // 0x02
    s16 initialValues[4]; // 0x04
    u8 flags; // 0x0c
    u8 unk0d;
    u16 values[4]; // 0x0e
};

extern "C" {
void asdSequenceRequest(s32, const SequenceKindFivePacket *, u32);

u32 FUN_00270c58(u16 id)
{
    SequenceKindFivePacket packet;
    packet.flags = 0;
    packet.values[0] = 0;
    packet.values[1] = 0;
    packet.values[2] = 0;
    packet.values[3] = 0;
    packet.mode = 1;
    packet.initialValues[0] = -1;
    packet.initialValues[1] = -1;
    packet.initialValues[2] = -1;
    packet.initialValues[3] = -1;
    packet.id = id;
    asdSequenceRequest(5, &packet, sizeof(packet));
    return 1;
}
}
