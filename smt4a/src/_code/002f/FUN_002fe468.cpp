/* NON_MATCHING: RAII key construction uses its stack address rather than the constructor return; map/output register allocation and end-load padding differ. */
#include "shard/W6_W6Match2_OnlineString.h"

struct StringMapNode {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ OnlineStringValue value;
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
StringMapNode* FUN_0030f0bc(StringMap* map, const OnlineStringValue* key);
s32 wordRefsDiffer_0030f0ac(StringMapNode* const* first, StringMapNode* const* second);

// Copy the keyed string value, or construct an empty string when absent.
void FUN_002fe468(OnlineStringValue* output, StringMapOwner* owner)
{
    StringMap* map = &owner->values;
    StringMapNode* node;
    {
        OnlineStringValue key(DAT_00538b28);
        node = FUN_0030f0bc(map, &key);
    }
    StringMapNode* end = map->end;
    if (wordRefsDiffer_0030f0ac(&node, &end) != 0)
        onlineStringCopyConstruct(output, &node->value);
    else
        onlineStringConstruct(output, "");
}
}
