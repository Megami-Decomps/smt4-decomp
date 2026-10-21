#include "shard/W6_W6Match2_EntrySequence.h"

// Request sequence four for entries carrying the sequence flag.
extern "C" u32 entryRequestSequence(const EntrySequenceSource* source)
{
    if ((source->flags & 0x20000) == 0) {
        return 0;
    }
    EntrySequencePacket packet;
    packet.id = source->description->id;
    packet.argument = -1;
    libc_strcpy(packet.name, source->description->name);
    asdSequenceRequest(4, &packet, sizeof(packet));
    return 1;
}
