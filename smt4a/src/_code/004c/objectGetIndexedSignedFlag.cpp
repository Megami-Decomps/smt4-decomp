#include "shard/Shard0034.h"

struct IndexedFlagOwner {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ EmbeddedFlagState records[1];
};

extern "C" s32 objectGetSignedFlag(const EmbeddedFlagState* state);

// Read the signed flag from an indexed state record.
extern "C" s32 objectGetIndexedSignedFlag(const IndexedFlagOwner* owner, s32 index)
{
    return objectGetSignedFlag(&owner->records[index]);
}
