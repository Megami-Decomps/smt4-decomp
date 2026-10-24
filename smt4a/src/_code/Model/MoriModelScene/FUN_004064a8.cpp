/* NON_MATCHING: node/vector structure recovered; retail takes the node pointer back from the inlined id-quad constructor result (sub r0,#68) and keeps obj/slot/entry in r4/r6/r7, allocation differs. */
#include <vector>
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/S3UiLookup.h"

extern "C" {
u32 *setMinus1ReturnPtr(u32 *value);
void *FUN_00178b04(u32 size, const char *file, u32 line);
void rt_memcpy_w(void *dest, const void *src, u32 size);
}

/* Four consecutive words each set to -1. */
struct IdQuad {
    u32 v[4];

    IdQuad()
    {
        u32 *p = setMinus1ReturnPtr(v);

        p = setMinus1ReturnPtr(p + 1);
        p = setMinus1ReturnPtr(p + 1);
        p = setMinus1ReturnPtr(p + 1);
    }
};

struct UiNodePosition {
    u32 v[3];
};

/* The copy of the found entry kept in a model node. */
struct UiNodeEntry {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ IdQuad ids;
    /* 0x40 */ u8 unk40[0x2C];
};

/* Header of a model node. */
struct UiModelNodeHead {
    /* 0x00 */ u8 hasEntry29;
    /* 0x01 */ u8 active;
    /* 0x04 */ f32 unk04;

    UiModelNodeHead()
    {
        hasEntry29 = 0;
        unk04 = 0.0f;
    }
};

/* A model attached to a lookup slot: a copy of the found entry plus a position. */
struct UiModelNode : UiModelNodeHead {
    /* 0x08 */ UiNodeEntry entry;
    /* 0x74 */ UiNodePosition position;

    UiModelNode()
    {
        position.v[0] = 0;
        position.v[1] = 0;
    }

    static void *operator new(u32 size, const char *file, u32 line) throw() { return FUN_00178b04(size, file, line); }
};

/* The lookup object's per slot lists of attached models. */
struct UiModelLookupObj : UiLookupObj {
    /* 0x10C */ u8 unk10C[8];
    /* 0x114 */ std::vector<UiModelNode *> nodes[1];
};

extern "C" {

// Attach a model node built from `entry` to a slot's list.
void FUN_004064a8(UiModelLookupObj *obj, u32 slot, UiFoundEntry *entry, const UiNodePosition *position)
{
    UiModelNode *node = new ("c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelScene.cpp", 255) UiModelNode();
    rt_memcpy_w(&node->entry, entry, sizeof(node->entry));
    node->hasEntry29 = entry->unk29[0] != 0;
    node->active = 1;
    node->position = *position;
    obj->nodes[slot].push_back(node);
}

}
