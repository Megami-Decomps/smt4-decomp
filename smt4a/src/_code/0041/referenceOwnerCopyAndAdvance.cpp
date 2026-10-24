#include "common.h"

struct ReferenceTriple {
    s32 index;
    u32 owner;
    u32 generation;
};
struct ReferenceSource {
    u8 unk00[0x38];
    ReferenceTriple reference; // 0x38
};
struct ReferenceStateOwner {
    u8 unk00[0x7c];
    ReferenceTriple reference; // 0x7c
    u8 unk88[0x74];
    u8 invalid; // 0xfc
};

extern "C" {
void _ZN18OnlineResultRecordaSERKS_(ReferenceTriple *destination, const ReferenceTriple *source);
s32 _ZNK18OnlineResultRecord7isValidEv(s32 *value);
void _ZN9Obj557c908setStateEj(ReferenceStateOwner *owner, s32 state);

// Copy the supplied reference and mark invalid handles or advance to state three.
void referenceOwnerCopyAndAdvance(ReferenceStateOwner *owner, const ReferenceSource *source)
{
    ReferenceTriple reference = source->reference;
    _ZN18OnlineResultRecordaSERKS_(&owner->reference, &reference);
    if (_ZNK18OnlineResultRecord7isValidEv(&owner->reference.index) == 0) {
        owner->invalid = 1;
    } else {
        _ZN9Obj557c908setStateEj(owner, 3);
    }
}
}
