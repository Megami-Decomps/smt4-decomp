#ifndef SHARD_W6_W6MATCH7_MATERIALANIMATIONFLAGS_H
#define SHARD_W6_W6MATCH7_MATERIALANIMATIONFLAGS_H

#include "common.h"
#include <stddef.h>
#include "shard/W6_W6Match8_BattleSpritePlacement.h"

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

struct MaterialMergeChannel {
    /* 0x00 */ f32 first[3];
    /* 0x0C */ f32 second[3];
};
struct MaterialMergeTiming {
    /* 0x00 */ f32 first;
    union {
        /* 0x04 */ f32 second;
        /* 0x04 */ u32 mode;
    };
};
struct MaterialMergeNode {
    /* 0x000 */ u16 flags;
    /* 0x002 */ u8 kinds;
    /* 0x003 */ u8 unk003[0xE9];
    /* 0x0EC */ MaterialMergeChannel channels[3];
    /* 0x134 */ u8 unk134[0x0C];
    /* 0x140 */ MaterialMergeTiming timing[3];
};
struct MaterialMergeMetadata {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u16 count;
};
struct MaterialMergeResource {
    /* 0x000 */ u8 unk000[0x10C];
    /* 0x10C */ MaterialMergeNode *nodes;
    /* 0x110 */ u8 unk110[0x100];
    /* 0x210 */ MaterialMergeMetadata *metadata;
};
struct MaterialMergePose {
    u8 unk00[0xC];
    s32 state;
};
struct MaterialMergeModel {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ MaterialMergeResource *resource;
    union {
        /* 0x08 */ u8 unk08[0x18];
        /* 0x08 */ MaterialMergePose *pose;
    };
};
struct MaterialMergeOriginal {
    /* 0x00 */ MaterialMergeModel *model;
    /* 0x04 */ s32 key;
    /* 0x08 */ u32 context;
    /* 0x0C */ u8 unk0c[0x1C];
};
struct MaterialMergeResult {
    /* 0x00 */ MaterialMergeModel *model;
    /* 0x04 */ s32 group;
    /* 0x08 */ u8 unk08[8];
};
struct MaterialMergeRoute {
    /* 0x00 */ s16 node;
    /* 0x02 */ s16 channel;
};
struct MaterialMergeGroup {
    /* 0x000 */ MaterialMergeRoute routes[64];
    /* 0x100 */ s32 count;
    /* 0x104 */ u8 mode;
    /* 0x105 */ u8 unk105[0x107];
};
struct MaterialMergeSlotState {
    /* 0x00 */ s32 handle;
    /* 0x04 */ u32 unk04;
};
struct MaterialMergePlacement {
    /* 0x00 */ s32 key;
    union {
        /* 0x04 */ u32 unk04;
        /* 0x04 */ BattleFrameSprite *resource;
    };
    /* 0x08 */ BattleSpritePlacement placement;
    union {
        /* 0x28 */ u8 unk28[8];
        struct {
            u8 unk28[4];
            /* 0x2C */ u32 flags;
        } activation;
    };
};
struct MaterialMergeOwner {
    union {
        struct {
            /* 0x000 */ u8 unk000[0x190];
            /* 0x190 */ MaterialMergeOriginal originals[50];
            /* 0x960 */ MaterialMergeResult results[1];
        } models;
        struct {
            /* 0x0000 */ u8 unk0000[0x1034];
            /* 0x1034 */ MaterialMergeSlotState slots[1];
        } state;
        struct {
            /* 0x0000 */ u8 unk0000[0x371C];
            /* 0x371C */ MaterialMergeGroup groups[50];
        } routing;
        struct {
            /* 0x0000 */ u8 unk0000[0x1398];
            /* 0x1398 */ MaterialMergePlacement entries[50];
        } placements;
    };
};
struct MaterialMergeVariants {
    union {
        /* 0x00 */ u8 unk00[0x0C];
        struct {
            u8 unk00[2];
            /* 0x02 */ u16 kind;
        } identity;
    };
    /* 0x0C */ s32 keys[1];
};
static __inline void materialMergeSetKind(MaterialMergeNode *node, u8 mask, bool enabled)
{
    if (enabled) {
        node->kinds |= mask;
    } else {
        node->kinds &= ~mask;
    }
}
typedef char MaterialMergeNodeSizeCheck[sizeof(MaterialMergeNode) == 0x158 ? 1 : -1];
typedef char MaterialMergeModelSizeCheck[sizeof(MaterialMergeModel) == 0x20 ? 1 : -1];
typedef char MaterialMergeOriginalSizeCheck[sizeof(MaterialMergeOriginal) == 0x28 ? 1 : -1];
typedef char MaterialMergeResultSizeCheck[sizeof(MaterialMergeResult) == 0x10 ? 1 : -1];
typedef char MaterialMergeGroupSizeCheck[sizeof(MaterialMergeGroup) == 0x20C ? 1 : -1];
typedef char MaterialMergeOwnerResultOffsetCheck[
    offsetof(MaterialMergeOwner, models.results) == 0x960 ? 1 : -1];
typedef char MaterialMergeOwnerStateOffsetCheck[
    offsetof(MaterialMergeOwner, state.slots) == 0x1034 ? 1 : -1];
typedef char MaterialMergeOwnerGroupOffsetCheck[
    offsetof(MaterialMergeOwner, routing.groups) == 0x371C ? 1 : -1];

typedef char MaterialMergePlacementOffsetsCheck[
    sizeof(MaterialMergePlacement) == 0x30 &&
    offsetof(MaterialMergePlacement, placement) == 8 &&
    offsetof(MaterialMergeOwner, placements.entries) == 0x1398 &&
    offsetof(MaterialMergeModel, pose) == 8 &&
    sizeof(MaterialMergeOwner) == 0x9D74 ? 1 : -1];
typedef char MaterialMergeActivationOffsets[
    offsetof(MaterialMergePlacement, resource) == 4 &&
    offsetof(MaterialMergePlacement, activation.flags) == 0x2c &&
    sizeof(MaterialMergePlacement) == 0x30 &&
    offsetof(MaterialMergeVariants, identity.kind) == 2 &&
    sizeof(MaterialMergeVariants) == 0x10 ? 1 : -1];
typedef char MaterialMergeTimingModeOffsetCheck[sizeof(MaterialMergeTiming) == 8 &&
    offsetof(MaterialMergeTiming, mode) == 4 ? 1 : -1];
#endif
