#ifndef TEXT_CONDITIONAL_BRANCH_MATCHER_H
#define TEXT_CONDITIONAL_BRANCH_MATCHER_H
#include "common.h"
#include <stddef.h>

struct BranchMatchState;
struct BranchMatchLink {
    BranchMatchLink *previous;
    BranchMatchLink *next;
};
struct BranchMatchTransition {
    BranchMatchState *target;
    u8 kind;
    u8 unk05;
    u16 character;
};
struct BranchMatchEdge {
    BranchMatchLink links;
    BranchMatchTransition transition;
};
struct BranchMatchState {
    u32 unk00[2];
    /* 0x08 */ BranchMatchLink children;
    /* 0x10 */ u8 unk10[0x1C];
    /* 0x2C */ s8 accepted;
    u8 unk2D[3];
};
struct BranchMatchRoot {
    u32 unk00;
    BranchMatchState *entry;
};
typedef char BranchMatchRecordOffsets[offsetof(BranchMatchEdge, transition) == 8 &&
    offsetof(BranchMatchState, children) == 8 &&
    offsetof(BranchMatchState, accepted) == 0x2C &&
    offsetof(BranchMatchRoot, entry) == 4 ? 1 : -1];
#endif
