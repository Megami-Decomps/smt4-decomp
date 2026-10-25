#include "shard/W6_W6Match5_SequencePacket.h"
#include "shard/W6_W6Match2_EntrySequence.h"

extern "C" {
u32 scrGetArg(u32);
void *jyoucyuGetTableEntry(s32);

// Forward two script arguments as a sequence-sixteen request.
u32 scrComm_Sequence16Request(void)
{
    u32 first = scrGetArg(0);
    u32 second = scrGetArg(1);
    jyoucyuGetTableEntry(0);
    ScriptSequencePacket packet(first, second, 0);
    asdSequenceRequest(0x10, &packet, sizeof(packet));
    return 1;
}
}
