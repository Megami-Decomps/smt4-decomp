/* NON_MATCHING: native string construction is integrated; map/output register allocation and end-load padding remain unmatched. */
#include "shard/W4_Match4_Obj559ecc.h"
#include <new>

struct StringMapNode {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ Obj55aff4 value;
};

struct StringMap {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ StringMapNode* end;
};

struct StringMapOwner {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ StringMap values;
};

extern "C" {
extern const char DAT_00538b28[];
StringMapNode* FUN_0030f0bc(StringMap* map, const Obj55aff4* key);
s32 wordRefsDiffer_0030f0ac(StringMapNode* const* first, StringMapNode* const* second);

// Copy the keyed string value, or construct an empty string when absent.
void FUN_002fe468(Obj55aff4* output, StringMapOwner* owner)
{
    StringMap* map = &owner->values;
    StringMapNode* node;
    {
        Obj55aff4 key(DAT_00538b28);
        node = FUN_0030f0bc(map, &key);
    }
    StringMapNode* end = map->end;
    if (wordRefsDiffer_0030f0ac(&node, &end) != 0)
        new (output) Obj55aff4(node->value);
    else
        new (output) Obj55aff4("");
}
}
