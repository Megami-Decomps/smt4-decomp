/* NON_MATCHING: compiler groups translation loads and reorders independent component stores differently. */
#include "common.h"

namespace {
struct Node { u8 padding[0x58]; u32 z; u8 gap[0xc]; u32 x; u8 gap2[0xc]; u32 y; u8 gap3[0xc]; u32 flags; };
struct Owner { u8 padding[0x2c]; Node *node; };
struct Translation { u32 z, x, y; };
}
extern "C" {
/* Applies the supplied translation to the node and marks its transform dirty. */
void nodeSetTranslation(Owner *owner, u32 kind, const Translation *translation)
{
    Node *node = owner->node;
    Translation value = *translation;
    node->x = value.x;
    node->y = value.y;
    node->z = value.z;
    node->flags |= 0x800;
}
}
