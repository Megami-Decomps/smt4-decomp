#ifndef GFX_SCALARANIMATIONNODE_H
#define GFX_SCALARANIMATIONNODE_H
#include "shard/W6_W6Match4_RelativeResourceGraph.h"
#include <stddef.h>

struct ScalarAnimationSection {
    /* 0x00 */ f32 start;
    /* 0x04 */ f32 end;
    /* 0x08 */ u32 flags;
    union {
        /* 0x0C */ f32 constant;
        /* 0x0C */ u8 keys[1];
    };
};
struct ScalarAnimationNode {
    /* 0x00 */ f32 start;
    /* 0x04 */ f32 end;
    /* 0x08 */ u8 before;
    /* 0x09 */ u8 after;
    /* 0x0A */ u8 unk0A[2];
    /* 0x0C */ u32 flags;
    union {
        /* 0x10 */ f32 constant;
        /* 0x10 */ s32 count;
        /* 0x10 */ ResourceRelativePointer<ScalarAnimationNode> first;
    };
    union {
        /* 0x14 */ ResourceRelativePointer<ScalarAnimationNode> second;
        /* 0x14 */ ResourceRelativePointer<ScalarAnimationSection> sections[1];
    };
};
typedef char ScalarAnimationNodeOffsetsCheck[
    offsetof(ScalarAnimationNode, flags) == 0xC &&
    offsetof(ScalarAnimationNode, first) == 0x10 &&
    offsetof(ScalarAnimationNode, sections) == 0x14 &&
    offsetof(ScalarAnimationSection, keys) == 0xC ? 1 : -1];
#endif
