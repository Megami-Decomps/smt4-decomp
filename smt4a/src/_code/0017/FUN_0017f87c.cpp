/* NON_MATCHING: applies one frame of keyframed property tracks to the effect nodes (scalar, 2-float, 4-float and table-reference properties; each component is either kept, a literal or read through FUN_001a83bc); written from the decompilation, the by-id slot lookups are shared helpers and the uninitialised partial vectors rely on the keep flags exactly as retail does */
#include "common.h"

#define TRACK_NO_TARGET 0xFFFF
#define TRACK_TYPE_SCALAR 0
#define TRACK_TYPE_VEC2 2
#define TRACK_TYPE_VEC4 5
#define TRACK_TYPE_TABLE 6
#define TRACK_KEEP_BIT 0x100
#define TRACK_LITERAL_BIT 1
#define TRACK_VEC4_KEEP_MASK 0xF00
#define TRACK_NODE_STRIDE 0x158
#define TRACK_TABLE_FLAG_VALUE 0xC
#define NODE_FLAG_TABLE_A 1
#define NODE_FLAG_TABLE_B 2
#define NODE_FLAG_TABLE_C 4

/* One keyframe of a property track (observed fields). */
struct TrackKey {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 property;
    /* 0x06 */ s16 type;
    /* 0x08 */ u32 flags;
    /* 0x0C */ union {
        f32 value;      /* literal component */
        u32 reference;  /* reference evaluated by FUN_001a83bc */
    } slots[4];
};

struct TrackSet {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ TrackKey **keys;
    /* 0x10 */ u32 count;
};

/* An entry of the table referenced by table-type tracks (observed fields). */
struct TrackTableEntry {
    /* 0x00 */ u32 a;
    /* 0x04 */ u32 b;
    /* 0x08 */ u32 c;
    /* 0x0C */ u32 d;
    /* 0x10 */ u32 e;
    /* 0x14 */ u32 f;
    /* 0x18 */ s8 marker;
};

extern "C" {
f32 FUN_001a83bc(u32 reference);
void FUN_0018fb38(void *node, f32 *values, u32 mask, u32 property);

/* Component `index` of a key: its literal, or the evaluated reference. */
static __inline f32 trackComponent(const TrackKey *key, s32 index)
{
    if ((key->flags & TRACK_LITERAL_BIT << index) != 0)
        return key->slots[index].value;
    return FUN_001a83bc(key->slots[index].reference);
}

/* The 2-float slot a vec2 property id addresses, or NULL. */
static __inline f32 *trackVec2Slot(u8 *node, u32 property)
{
    switch (property) {
    case 0x13: return reinterpret_cast<f32 *>(node + 0xF0);
    case 0x15: return reinterpret_cast<f32 *>(node + 0xFC);
    case 0x16: return reinterpret_cast<f32 *>(node + 0x108);
    case 0x18: return reinterpret_cast<f32 *>(node + 0x114);
    case 0x19: return reinterpret_cast<f32 *>(node + 0x120);
    case 0x1B: return reinterpret_cast<f32 *>(node + 0x12C);
    default: return NULL;
    }
}

/* Copies a table entry's pair into the node's pair and mirrors its marker in the node's flag bit. */
static __inline void trackApplyTable(u8 *node, u32 *pair, u32 first, u32 second, const TrackTableEntry *entry, u8 flagBit)
{
    bool marked = entry->marker == TRACK_TABLE_FLAG_VALUE;
    pair[1] = second;
    pair[0] = first;
    if (marked)
        node[2] |= flagBit;
    else
        node[2] &= ~flagBit;
}

void FUN_0017f87c(TrackSet *set, u8 **nodes, u16 **targets, TrackTableEntry ***tables)
{
    for (u32 i = 0; i < set->count; i++) {
        u32 target = (*targets)[i];
        if (target == TRACK_NO_TARGET)
            continue;
        u8 *node = *nodes + target * TRACK_NODE_STRIDE;
        TrackKey *key = set->keys[i];

        if (key->type == TRACK_TYPE_SCALAR) {
            f32 value;
            if ((key->flags & TRACK_KEEP_BIT) == 0)
                value = trackComponent(key, 0);
            if (key->property == 0x14)
                *reinterpret_cast<f32 *>(node + 0xF8) = value;
            else if (key->property == 0x17)
                *reinterpret_cast<f32 *>(node + 0x110) = value;
            else if (key->property == 0x1A)
                *reinterpret_cast<f32 *>(node + 0x128) = value;
        } else if (key->type == TRACK_TYPE_VEC2) {
            f32 *slot = trackVec2Slot(node, key->property);
            f32 values[9];
            values[0] = slot[0];
            values[1] = slot[1];
            for (s32 k = 0; k < 2; k++) {
                if ((key->flags & (TRACK_KEEP_BIT << k)) == 0)
                    values[k] = trackComponent(key, k);
            }
            slot = trackVec2Slot(node, key->property);
            if (slot != NULL) {
                slot[0] = values[0];
                slot[1] = values[1];
            }
        } else if (key->type == TRACK_TYPE_VEC4) {
            f32 values[9];
            for (s32 k = 0; k < 4; k++) {
                if ((key->flags & (TRACK_KEEP_BIT << k)) == 0)
                    values[k] = trackComponent(key, k);
            }
            FUN_0018fb38(node, values, ~(key->flags & TRACK_VEC4_KEEP_MASK) << 8, key->property);
        } else if (key->type == TRACK_TYPE_TABLE) {
            f32 index;
            if ((key->flags & TRACK_KEEP_BIT) == 0)
                index = trackComponent(key, 0);
            TrackTableEntry *entry = (*tables)[(s32)index];
            if (key->property == 0xD)
                trackApplyTable(node, reinterpret_cast<u32 *>(node + 0x140), entry->a, entry->b, entry, NODE_FLAG_TABLE_A);
            else if (key->property == 0xF)
                trackApplyTable(node, reinterpret_cast<u32 *>(node + 0x148), entry->c, entry->d, entry, NODE_FLAG_TABLE_B);
            else if (key->property == 0x11)
                trackApplyTable(node, reinterpret_cast<u32 *>(node + 0x150), entry->e, entry->f, entry, NODE_FLAG_TABLE_C);
        }
    }
}

} /* extern "C" */
