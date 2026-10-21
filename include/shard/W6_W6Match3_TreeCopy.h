#ifndef W6_W6MATCH3_TREE_COPY_H
#define W6_W6MATCH3_TREE_COPY_H

#include "common.h"

struct TreeCopyNode {
    union {
        /* 0x00 */ u32 color;
        /* 0x00 */ u8 colorByte;
    };
    /* 0x04 */ TreeCopyNode* parent;
    /* 0x08 */ TreeCopyNode* left;
    /* 0x0c */ TreeCopyNode* right;
};

// Known prefix; constructor flags are kept in a separate extended view.
struct OnlineRecordTree {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ TreeCopyNode* sentinel;
    /* 0x14 */ u32 count;
};
extern "C" OnlineRecordTree* onlineTreeAssign(OnlineRecordTree* destination,
    const OnlineRecordTree* source);
extern "C" OnlineRecordTree* FUN_001301be(OnlineRecordTree* destination,
    const OnlineRecordTree* source, u8 option);

#endif
