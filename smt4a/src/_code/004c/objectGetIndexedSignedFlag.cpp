#include "shard/Shard0034.h"

struct IndexedFlagOwner {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ UiSpriteState records[1];
};


// Read the signed flag from an indexed state record.
extern "C" s32 objectGetIndexedSignedFlag(const IndexedFlagOwner* owner, s32 index)
{
    return uiSpriteGetCompletionState(&owner->records[index]);
}
