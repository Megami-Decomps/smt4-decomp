/* NON_MATCHING: Marker-bit zero testing and split entry-range guards are lowered differently. */
#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
FlagGatePrefixA *FUN_002e26c4(u32 index);
s32 gameFlagIsSet(u16 flag);
u8 *gameFlagBlockGetEntry(u32 index);
EntryAttributePrefixA *FUN_001ad9b4(u32 index);

u32 FUN_003deee4(u32 requestedAttribute)
{
    u32 gateEnabled = 0;
    FlagGatePrefixA *gate = FUN_002e26c4(30);
    if (gate != 0 && gameFlagIsSet(gate->flagId) != 0)
        gateEnabled = 1;

    const u32 enabled = gateEnabled | requestedAttribute;
    for (u16 index = 0; index < 400; ++index) {
        if (index < 350) {
            if ((*gameFlagBlockGetEntry(index) & 1) == 0)
                continue;
        }
        if (index >= 350) {
            if (FUN_001ad9b4(index) == 0)
                continue;
        }

        if (enabled == 0)
            continue;

        EntryAttributePrefixA *first = FUN_001ad9b4(index);
        const u32 firstAttribute = first != 0
            ? (first->attributeFlags & 1) : 0;
        if ((firstAttribute & ~requestedAttribute) != 0)
            continue;

        EntryAttributePrefixA *second = FUN_001ad9b4(index);
        const u32 secondAttribute = second != 0
            ? (second->attributeFlags & 1) : 0;
        if ((requestedAttribute & ~secondAttribute) != 0)
            continue;

        if ((*gameFlagBlockGetEntry(index) & 0x20) != 0)
            return 1;
    }
    return 0;
}
}
