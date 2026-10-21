#ifndef SHARD_W6_W6MATCH7_MATERIALANIMATIONFLAGS_H
#define SHARD_W6_W6MATCH7_MATERIALANIMATIONFLAGS_H

#include "common.h"

/* Prefixes used by the animation-to-material binding pass. */
struct MaterialFlagMember {
    u8 unk00[4];
    u16 kind; // 0x04
    u16 targetKind;
};
struct MaterialFlagAnimation {
    u8 unk00[0xc];
    const MaterialFlagMember** members;
    u32 count; // 0x10
};
struct MaterialFlagState {
    u16 flags;
    u8 unk02[6];
    u32 channelKinds; // 0x08: six packed four-bit kinds
    u8 unk00c[0x14c];
}; // 0x158-byte array stride

/* Only the first pointer of each array owner is needed here. */
struct MaterialFlagStateArray {
    MaterialFlagState* data;
};
struct MaterialFlagBindingArray {
    const u16* data;
};

extern "C" void gfxMarkMaterialAnimationCapabilities(const MaterialFlagAnimation*, MaterialFlagStateArray*,
                             const MaterialFlagBindingArray*);

#endif
