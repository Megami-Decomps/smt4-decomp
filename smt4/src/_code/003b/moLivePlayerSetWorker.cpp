/* NON_MATCHING: Source binding uses the hidden-result iterator ABI and PlayerQuad/resetStreamState (ported from smt4a FUN_004af258); iterator/key stack layout and resetStreamState store scheduling still differ. */
#include "common.h"

class BoundDataSource {
public:
    virtual void vfunc00();
    virtual u8 getKind();
    virtual void vfunc08();
    virtual s32 isReady();
};
struct SourceBindingNode {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ f32 key;
};
class SourceBindingIterator {
public:
    explicit SourceBindingIterator(SourceBindingNode *value) : node(value) {}
    SourceBindingIterator(const SourceBindingIterator &other) : node(other.node) {}
    SourceBindingNode *node;
};
struct SourceBindingMap {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ SourceBindingNode *current;
    /* 0x18 */ u8 unk18[8];
};
struct SourceBindingList {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0C */ u32 count;
};
struct SourceBindingQuad {
    u64 first;
    u64 second;
};
struct SourceBindingOwner {
    /* 0x0000 */ SourceBindingQuad header;
    /* 0x0010 */ u8 unk0010[0x1404];
    /* 0x1414 */ SourceBindingMap map;
    /* 0x1434 */ SourceBindingList list;
    /* 0x1444 */ u8 unk1444[0x2c];
    /* 0x1470 */ BoundDataSource *source;
    /* 0x1474 */ u32 unk1474;
    /* 0x1478 */ u32 error;
    /* 0x147C */ u32 capacity;
    /* 0x1480 */ u32 unk1480;
    /* 0x1484 */ u8 unk1484;
    /* 0x1485 */ u8 started;
    /* 0x1486 */ u8 modified;
    /* 0x1487 */ u8 flag1487;
    /* 0x1488 */ u8 type;
    /* 0x1489 */ u8 flag1489;

    void resetStreamState()
    {
        SourceBindingQuad zero = {0, 0};
        header = zero;
        error = 64;
        type = source->getKind();
        capacity = 0x10000;
        flag1487 = 0;
        flag1489 = 0;
    }
};
extern "C" {
SourceBindingIterator _ZN4__rw9__rb_treeIjSt4pairIKjN6MoLive12ObjectHandleEENS_11__select1stIS5_jEESt4lessIjENS3_12StlAllocatorIS5_EEE5eraseENS_14__rw_tree_iterIS5_iPS5_RS5_NS_17__rw_rb_tree_nodeISB_S5_jS7_EEEESI_(SourceBindingMap *map, const f32 &key, SourceBindingIterator position);
void FUN_0022c564(SourceBindingList *list, u32 first, u32 count);
}

/* Clear the old source's lookup state, then bind and validate the replacement. */
extern "C" u32 moLivePlayerSetWorker(SourceBindingOwner *owner, BoundDataSource *source)
{
    if (source == NULL) {
        return 64;
    }
    if (owner->source != NULL) {
        SourceBindingMap *map = &owner->map;
        SourceBindingNode *node = map->current;
        f32 key = node->key;
        _ZN4__rw9__rb_treeIjSt4pairIKjN6MoLive12ObjectHandleEENS_11__select1stIS5_jEESt4lessIjENS3_12StlAllocatorIS5_EEE5eraseENS_14__rw_tree_iterIS5_iPS5_RS5_NS_17__rw_rb_tree_nodeISB_S5_jS7_EEEESI_(map, key, SourceBindingIterator(node));
        SourceBindingList *list = &owner->list;
        FUN_0022c564(list, 0, list->count);
        list->count = 0;
        owner->header.first = 0;
        owner->error = 64;
        owner->started = 1;
        owner->modified = 0;
    }
    owner->source = source;
    if (!owner->source->isReady()) {
        return 65;
    }
    owner->resetStreamState();
    return 0;
}
