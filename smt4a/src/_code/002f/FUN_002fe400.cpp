/* NON_MATCHING: native string lifetimes are integrated; map/return-object register allocation remains unmatched. */
#include "shard/W4_Match4_Obj559ecc.h"

struct StringMapNode {
    u8 unk00[0x18]; // 0x00
    Obj55aff4 value; // 0x18
};

struct StringMap {
    u8 unk00[0x10]; // 0x00
    StringMapNode* end; // 0x10
};

struct StringMapOwner {
    u8 unk00[0x28]; // 0x00
    StringMap strings; // 0x28
};

extern "C" {
extern const char DAT_00538914[];
StringMapNode* FUN_0030f0bc(StringMap* map, const Obj55aff4* key);
s32 wordRefsDiffer_0030f0ac(StringMapNode** current, StringMapNode** end);

// Look up the fixed key and return a copy of its value, or an empty string.
Obj55aff4 FUN_002fe400(StringMapOwner* owner)
{
    StringMapNode* current;
    {
        Obj55aff4 key(DAT_00538914);
        current = FUN_0030f0bc(&owner->strings, &key);
    }
    StringMapNode* end = owner->strings.end;
    if (wordRefsDiffer_0030f0ac(&current, &end) != 0) {
        return current->value;
    }
    return Obj55aff4("");
}
}
