#ifndef GFX_NAMED_SUBRESOURCE_SELECTION_H
#define GFX_NAMED_SUBRESOURCE_SELECTION_H
#include "common.h"
#include <stddef.h>

struct NamedSubresourceEntry {
    u8 prefix[0xC];
    const char *name;
};
struct NamedSubresourceGroup {
    NamedSubresourceEntry *entries;
    u32 count;
};
struct NamedSubresourceSelection {
    u8 prefix[0x4C];
    NamedSubresourceEntry *primary;
    NamedSubresourceEntry *secondary;
    u8 unk54[8];
    const u16 *primaryGroup;
    const char *primaryName;
    const u16 *secondaryGroup;
    const char *secondaryName;
};
typedef char NamedSubresourceSelectionLayoutCheck[
    sizeof(NamedSubresourceEntry) == 0x10 &&
    offsetof(NamedSubresourceSelection, primary) == 0x4C &&
    offsetof(NamedSubresourceSelection, primaryGroup) == 0x5C &&
    sizeof(NamedSubresourceSelection) == 0x6C ? 1 : -1];
#endif
