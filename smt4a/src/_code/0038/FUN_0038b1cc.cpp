/* NON_MATCHING: compiler initializes the packet's zero flag in r0 instead of retail's r1. */
#include "shard/W6_W6Match5_SequencePacket.h"

extern "C" {
u32 scrGetArg(u32);
void *jyoucyuGetTableEntry(s32);
void asdSequenceRequest(s32, const void *, u32);

// Forward two script arguments as a sequence-sixteen request.
u32 FUN_0038b1cc(void)
{
    u32 first = scrGetArg(0);
    u32 second = scrGetArg(1);
    jyoucyuGetTableEntry(0);
    ScriptSequencePacket packet = {first, second, 0};
    asdSequenceRequest(0x10, &packet, sizeof(packet));
    return 1;
}
}
