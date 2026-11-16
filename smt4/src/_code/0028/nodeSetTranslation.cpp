#include "common.h"

namespace {
/* A node's 3x4 transform (row-major, translation in the last column) and its dirty flags. */
struct Node {
    /* 0x00 */ u8 padding[0x4c];
    /* 0x4c */ u32 transform[3][4];
    /* 0x7c */ u32 unk7c[3];
    /* 0x88 */ u32 flags; /* 0x800: transform changed */
};
struct Owner { u8 padding[0x2c]; Node *node; };
struct Translation { u32 x, y, z; };
}
extern "C" {
/* Applies the supplied translation to the node and marks its transform dirty. */
void nodeSetTranslation(Owner *owner, u32 kind, const Translation *translation)
{
    Node *node = owner->node;
    Translation value = *translation;
    node->transform[0][3] = value.x;
    node->transform[2][3] = value.z;
    node->transform[1][3] = value.y;
    node->flags |= 0x800;
}
}
