/* NON_MATCHING: native online-string/map class identities and return-object code generation remain unrecovered. */
#include "shard/W6_W6Match2_OnlineString.h"

struct StringMapNode {
    u8 unk00[0x18]; // 0x00
    OnlineStringValue value; // 0x18
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
StringMapNode* FUN_0030f0bc(StringMap* map, const OnlineStringValue* key);
s32 wordRefsDiffer_0030f0ac(StringMapNode** current, StringMapNode** end);

// Look up the fixed key and return a copy of its value, or an empty string.
OnlineStringValue FUN_002fe400(StringMapOwner* owner)
{
    StringMapNode* current;
    {
        OnlineStringValue key(DAT_00538914);
        current = FUN_0030f0bc(&owner->strings, &key);
    }
    StringMapNode* end = owner->strings.end;
    if (wordRefsDiffer_0030f0ac(&current, &end) != 0) {
        return current->value;
    }
    return OnlineStringValue("");
}
}
